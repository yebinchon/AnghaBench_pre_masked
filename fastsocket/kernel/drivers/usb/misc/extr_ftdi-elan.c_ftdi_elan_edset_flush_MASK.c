
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct usb_ftdi {scalar_t__ disconnected; scalar_t__ initialized; int command_next; int command_head; int u132_lock; struct u132_command* command; struct u132_target* target; } ;
struct u132_target {int abandoning; int active; } ;
struct u132_command {int header; int length; int address; int width; scalar_t__ value; scalar_t__* buffer; scalar_t__ follows; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_ftdi*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct usb_ftdi *VAR_3, u8 VAR_4,
        void *VAR_5)
{
        u8 VAR_6 = VAR_4 - 1;
        if (VAR_3->disconnected > 0) {
                return -VAR_2;
        } else if (VAR_3->initialized == 0) {
                return -VAR_2;
        } else {
                struct u132_target *VAR_7 = &VAR_3->target[VAR_6];
                FUNC_2(&VAR_3->u132_lock);
                if (VAR_7->abandoning > 0) {
                        FUNC_3(&VAR_3->u132_lock);
                        return 0;
                } else {
                        VAR_7->abandoning = 1;
                      wait_1:if (VAR_7->active == 1) {
                                int VAR_8 = VAR_3->command_next -
                                        VAR_3->command_head;
                                if (VAR_8 < VAR_1) {
                                        struct u132_command *VAR_9 =
                                                &VAR_3->command[VAR_0 &
                                                VAR_3->command_next];
                                        VAR_9->header = 0x80 | (VAR_6 << 5) |
                                                0x4;
                                        VAR_9->length = 0x00;
                                        VAR_9->address = 0x00;
                                        VAR_9->width = 0x00;
                                        VAR_9->follows = 0;
                                        VAR_9->value = 0;
                                        VAR_9->buffer = &VAR_9->value;
                                        VAR_3->command_next += 1;
                                        FUNC_0(VAR_3);
                                } else {
                                        FUNC_3(&VAR_3->u132_lock);
                                        FUNC_1(100);
                                        FUNC_2(&VAR_3->u132_lock);
                                        goto wait_1;
                                }
                        }
                        FUNC_3(&VAR_3->u132_lock);
                        return 0;
                }
        }
}
