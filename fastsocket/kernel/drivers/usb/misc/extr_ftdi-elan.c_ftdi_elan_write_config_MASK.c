
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usb_ftdi {scalar_t__ disconnected; int command_next; int command_head; int u132_lock; struct u132_command* command; } ;
struct u132_command {int header; int length; int address; int width; int follows; int value; int * buffer; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_ftdi*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct usb_ftdi *VAR_4, int VAR_5,
        u8 VAR_6, u32 VAR_7)
{
        u8 VAR_8 = VAR_5 / 4;
      wait:if (VAR_4->disconnected > 0) {
                return -VAR_2;
        } else {
                int VAR_9;
                FUNC_2(&VAR_4->u132_lock);
                VAR_9 = VAR_4->command_next - VAR_4->command_head;
                if (VAR_9 < VAR_1) {
                        struct u132_command *VAR_10 = &VAR_4->command[
                                VAR_0 & VAR_4->command_next];
                        VAR_10->header = 0x00 | (VAR_3 & 0x0F);
                        VAR_10->length = 0x04;
                        VAR_10->address = VAR_8;
                        VAR_10->width = 0x00 | (VAR_6 & 0x0F);
                        VAR_10->follows = 4;
                        VAR_10->value = VAR_7;
                        VAR_10->buffer = &VAR_10->value;
                        VAR_4->command_next += 1;
                        FUNC_0(VAR_4);
                        FUNC_3(&VAR_4->u132_lock);
                        return 0;
                } else {
                        FUNC_3(&VAR_4->u132_lock);
                        FUNC_1(100);
                        goto wait;
                }
        }
}
