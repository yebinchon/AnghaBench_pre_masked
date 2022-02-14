
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int,int ,...) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 unsigned long FUNC_4 (char const*,char**,int) ;
 int FUNC_5 (char*) ;

int FUNC_6(int VAR_6) {





        int VAR_7, VAR_8;
        const char *VAR_9;
        char *VAR_10 = ((void*)0);
        unsigned long VAR_11;

        if (!(VAR_9 = FUNC_2("LISTEN_PID"))) {
                VAR_7 = 0;
                goto finish;
        }

        VAR_5 = 0;
        VAR_11 = FUNC_4(VAR_9, &VAR_10, 10);

        if (VAR_5 != 0) {
                VAR_7 = -VAR_5;
                goto finish;
        }

        if (!VAR_10 || *VAR_10 || VAR_11 <= 0) {
                VAR_7 = -VAR_0;
                goto finish;
        }


        if (FUNC_3() != (pid_t) VAR_11) {
                VAR_7 = 0;
                goto finish;
        }

        if (!(VAR_9 = FUNC_2("LISTEN_FDS"))) {
                VAR_7 = 0;
                goto finish;
        }

        VAR_5 = 0;
        VAR_11 = FUNC_4(VAR_9, &VAR_10, 10);

        if (VAR_5 != 0) {
                VAR_7 = -VAR_5;
                goto finish;
        }

        if (!VAR_10 || *VAR_10) {
                VAR_7 = -VAR_0;
                goto finish;
        }

        for (VAR_8 = VAR_4; VAR_8 < VAR_4 + (int) VAR_11; VAR_8 ++) {
                int VAR_12;

                if ((VAR_12 = FUNC_1(VAR_8, VAR_2)) < 0) {
                        VAR_7 = -VAR_5;
                        goto finish;
                }

                if (VAR_12 & VAR_1)
                        continue;

                if (FUNC_1(VAR_8, VAR_3, VAR_12 | VAR_1) < 0) {
                        VAR_7 = -VAR_5;
                        goto finish;
                }
        }

        VAR_7 = (int) VAR_11;

finish:
        if (VAR_6) {
                FUNC_5("LISTEN_PID");
                FUNC_5("LISTEN_FDS");
        }

        return VAR_7;

}
