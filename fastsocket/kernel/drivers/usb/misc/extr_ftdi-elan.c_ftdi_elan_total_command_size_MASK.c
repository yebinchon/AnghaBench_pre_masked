
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ftdi {int command_head; struct u132_command* command; } ;
struct u132_command {scalar_t__ follows; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct usb_ftdi *VAR_1, int VAR_2)
{
        int VAR_3 = 0;
        int VAR_4 = VAR_2;
        int VAR_5 = VAR_1->command_head;
        while (VAR_4-- > 0) {
                struct u132_command *VAR_6 = &VAR_1->command[VAR_0 &
                        VAR_5++];
                VAR_3 += 5 + VAR_6->follows;
        } return VAR_3;
}
