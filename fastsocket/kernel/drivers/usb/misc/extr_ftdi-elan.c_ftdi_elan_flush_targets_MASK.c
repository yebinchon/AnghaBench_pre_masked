
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ftdi {int command_next; int command_head; int expected; int u132_lock; scalar_t__ ed_found; scalar_t__ recieved; struct u132_command* command; struct u132_target* target; } ;
struct u132_target {int abandoning; int active; } ;
struct u132_command {int header; int length; int address; int width; scalar_t__ value; scalar_t__* buffer; scalar_t__ follows; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_ftdi*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usb_ftdi *VAR_2)
{
        int VAR_3 = 4;
        FUNC_2(&VAR_2->u132_lock);
        while (VAR_3-- > 0) {
                struct u132_target *VAR_4 = &VAR_2->target[VAR_3];
                VAR_4->abandoning = 1;
              wait_1:if (VAR_4->active == 1) {
                        int VAR_5 = VAR_2->command_next -
                                VAR_2->command_head;
                        if (VAR_5 < VAR_1) {
                                struct u132_command *VAR_6 = &VAR_2->command[
                                        VAR_0 & VAR_2->command_next];
                                VAR_6->header = 0x80 | (VAR_3 << 5) | 0x4;
                                VAR_6->length = 0x00;
                                VAR_6->address = 0x00;
                                VAR_6->width = 0x00;
                                VAR_6->follows = 0;
                                VAR_6->value = 0;
                                VAR_6->buffer = &VAR_6->value;
                                VAR_2->command_next += 1;
                                FUNC_0(VAR_2);
                        } else {
                                FUNC_3(&VAR_2->u132_lock);
                                FUNC_1(100);
                                FUNC_2(&VAR_2->u132_lock);
                                goto wait_1;
                        }
                }
              wait_2:if (VAR_4->active == 1) {
                        int VAR_7 = VAR_2->command_next -
                                VAR_2->command_head;
                        if (VAR_7 < VAR_1) {
                                struct u132_command *VAR_8 = &VAR_2->command[
                                        VAR_0 & VAR_2->command_next];
                                VAR_8->header = 0x90 | (VAR_3 << 5);
                                VAR_8->length = 0x00;
                                VAR_8->address = 0x00;
                                VAR_8->width = 0x00;
                                VAR_8->follows = 0;
                                VAR_8->value = 0;
                                VAR_8->buffer = &VAR_8->value;
                                VAR_2->command_next += 1;
                                FUNC_0(VAR_2);
                        } else {
                                FUNC_3(&VAR_2->u132_lock);
                                FUNC_1(100);
                                FUNC_2(&VAR_2->u132_lock);
                                goto wait_2;
                        }
                }
        }
        VAR_2->recieved = 0;
        VAR_2->expected = 4;
        VAR_2->ed_found = 0;
        FUNC_3(&VAR_2->u132_lock);
}
