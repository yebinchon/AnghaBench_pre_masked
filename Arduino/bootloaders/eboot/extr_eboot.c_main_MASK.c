
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eboot_command {scalar_t__ action; scalar_t__* args; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct eboot_command*) ;
 int FUNC_3 (char) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;

int FUNC_8()
{
    int VAR_3 = 9;
    struct eboot_command VAR_4;

    FUNC_7(0);

    if (FUNC_2(&VAR_4) == 0) {

        FUNC_1();
        FUNC_3('@');
    } else {

        VAR_4.action = VAR_1;
        VAR_4.args[0] = 0;
        FUNC_3('~');
    }

    if (VAR_4.action == VAR_0) {
        FUNC_3('c'); FUNC_3('p'); FUNC_3(':');
        FUNC_4();
        VAR_3 = FUNC_0(VAR_4.args[0], VAR_4.args[1], VAR_4.args[2]);
        FUNC_5();
        FUNC_3('0'+VAR_3); FUNC_3('\n');
        if (VAR_3 == 0) {
            VAR_4.action = VAR_1;
            VAR_4.args[0] = VAR_4.args[1];
        }
    }

    if (VAR_4.action == VAR_1) {
        FUNC_3('l'); FUNC_3('d'); FUNC_3('\n');
        VAR_3 = FUNC_6(VAR_4.args[0]);

        FUNC_3('e'); FUNC_3(':'); FUNC_3('0'+VAR_3); FUNC_3('\n');
    }

    if (VAR_3) {
        VAR_2;
    }

    while(1){}
}
