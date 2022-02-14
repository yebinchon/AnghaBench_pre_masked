
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (int,int,char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int,char*,int) ;
 int * VAR_3 ;
 int FUNC_9 (int *,int ,int *,int *,int *,int ) ;
 int FUNC_10 (int ,int*,int ) ;

void *FUNC_11(void *VAR_4)
{
    int VAR_5 = (int)(intptr_t)VAR_4;
    int VAR_6;
    int VAR_7;
    pid_t VAR_8;

    for (VAR_6=0; VAR_6 < VAR_5; VAR_6++) {
        VAR_7 = FUNC_9(&VAR_8, VAR_3[0], ((void*)0), ((void*)0), VAR_3, VAR_1);
        if (VAR_7 != 0) {
            FUNC_7(1, VAR_7, "posix_spawn(%s)", VAR_3[0]);
        }

        while (-1 == FUNC_10(VAR_8, &VAR_7, 0)) {
            if (VAR_2 != VAR_0) {
                FUNC_6(1, "waitpid(%d)", VAR_8);
            }
        }

        if (FUNC_2(VAR_7)) {
            FUNC_8(1, "process exited with signal %d", FUNC_5(VAR_7));
        } else if (FUNC_3(VAR_7)) {
            FUNC_8(1, "process stopped with signal %d", FUNC_4(VAR_7));
        } else if (FUNC_1(VAR_7)) {
            if (FUNC_0(VAR_7) != 42) {
                FUNC_8(1, "process exited with unexpected exit code %d", FUNC_0(VAR_7));
            }
        } else {
            FUNC_8(1, "unknown exit condition %x", VAR_7);
        }
    }

    return ((void*)0);
}
