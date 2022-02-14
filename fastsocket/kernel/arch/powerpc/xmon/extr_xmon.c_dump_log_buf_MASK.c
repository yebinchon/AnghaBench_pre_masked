
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (char*) ;
 int FUNC_2 (unsigned long,unsigned char*,unsigned long const) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 unsigned long const FUNC_5 (unsigned char*) ;
 int FUNC_6 () ;

void
FUNC_7(void)
{
        const unsigned long VAR_3 = 128;
        unsigned long VAR_4, VAR_5;
        unsigned char VAR_6[VAR_3 + 1];

        VAR_5 = 0;
        VAR_6[VAR_3] = '\0';

        if (FUNC_4(VAR_1) != 0) {
                FUNC_3("Unable to lookup symbol __log_buf!\n");
                return;
        }

        VAR_2 = 1;
        FUNC_6();
        VAR_5 = FUNC_1("__log_buf");

        if (! VAR_5)
                FUNC_3("Symbol __log_buf not found!\n");
        else {
                VAR_4 = VAR_5 + (1 << VAR_0);
                while (VAR_5 < VAR_4) {
                        if (! FUNC_2(VAR_5, VAR_6, VAR_3)) {
                                FUNC_3("Can't read memory at address 0x%lx\n", VAR_5);
                                break;
                        }

                        FUNC_3("%s", VAR_6);

                        if (FUNC_5(VAR_6) < VAR_3)
                                break;

                        VAR_5 += VAR_3;
                }
        }

        FUNC_6();

        FUNC_0(200);
        VAR_2 = 0;
}
