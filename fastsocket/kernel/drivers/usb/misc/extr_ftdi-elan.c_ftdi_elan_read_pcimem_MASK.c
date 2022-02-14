
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usb_ftdi {scalar_t__ disconnected; int command_next; int command_head; int respond_next; int respond_head; int u132_lock; struct u132_respond* respond; struct u132_command* command; } ;
struct u132_respond {int* result; int header; int address; int wait_completion; int * value; } ;
struct u132_command {int header; int length; int address; int width; int * buffer; scalar_t__ value; scalar_t__ follows; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usb_ftdi*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct usb_ftdi *VAR_6, int VAR_7,
        u8 VAR_8, u32 *VAR_9)
{
        u8 VAR_10 = VAR_7 / 4;
      wait:if (VAR_6->disconnected > 0) {
                return -VAR_2;
        } else {
                int VAR_11;
                int VAR_12;
                FUNC_3(&VAR_6->u132_lock);
                VAR_11 = VAR_6->command_next - VAR_6->command_head;
                VAR_12 = VAR_6->respond_next - VAR_6->respond_head;
                if (VAR_11 < VAR_1 && VAR_12 < VAR_4)
                        {
                        struct u132_command *VAR_13 = &VAR_6->command[
                                VAR_0 & VAR_6->command_next];
                        struct u132_respond *VAR_14 = &VAR_6->respond[
                                VAR_3 & VAR_6->respond_next];
                        int VAR_15 = -VAR_2;
                        VAR_14->result = &VAR_15;
                        VAR_14->header = VAR_13->header = 0x00 | (VAR_5 &
                                0x0F);
                        VAR_13->length = 0x04;
                        VAR_14->address = VAR_13->address = VAR_10;
                        VAR_13->width = 0x00 | (VAR_8 & 0x0F);
                        VAR_13->follows = 0;
                        VAR_13->value = 0;
                        VAR_13->buffer = ((void*)0);
                        VAR_14->value = VAR_9;
                        FUNC_1(&VAR_14->wait_completion);
                        VAR_6->command_next += 1;
                        VAR_6->respond_next += 1;
                        FUNC_0(VAR_6);
                        FUNC_4(&VAR_6->u132_lock);
                        FUNC_5(&VAR_14->wait_completion);
                        return VAR_15;
                } else {
                        FUNC_4(&VAR_6->u132_lock);
                        FUNC_2(100);
                        goto wait;
                }
        }
}
