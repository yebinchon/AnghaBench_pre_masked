
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int bytes; int dur; int dir; int (* f ) (int) ;} ;
typedef TYPE_1__ Benchmark ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (int,int ,char*) ;
 int FUNC_5 (int,int) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ,int ) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char) ;
 int FUNC_14 (int,int *,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int,int) ;
 int VAR_7 ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 () ;
 int FUNC_20 (int,int*,int ) ;
 int FUNC_21 (int,int *,int) ;

__attribute__((used)) static void
FUNC_22(Benchmark *VAR_8, int VAR_9)
{
    int VAR_10 = FUNC_19();
    int VAR_11 = FUNC_19();
    FUNC_17(VAR_8->dir, VAR_2);
    if (FUNC_11(VAR_8->dir) == ((void*)0)) {
 FUNC_4(1, VAR_6, "mkdtemp");
    }
    FUNC_7(((void*)0));
    int VAR_12 = FUNC_8();
    if (VAR_12 < 0) {
        FUNC_4(1, VAR_6, "fork");
    } else if (!VAR_12) {
        FUNC_16(0, 0);
        if (FUNC_5(VAR_10, 1) == -1) {
            FUNC_4(3, VAR_6, "dup2");
        }
        if (FUNC_0(VAR_10) == -1) {
            FUNC_4(3, VAR_6, "fclose");
        }
        if (FUNC_5(1, 2) == -1) {
            FUNC_4(3, VAR_6, "dup2");
        }
        VAR_5 = VAR_8->dir;
        FUNC_2();
        VAR_8->f(VAR_9);
        FUNC_3();
        if (FUNC_21(VAR_11, &VAR_4, sizeof VAR_4) != sizeof VAR_4) {
            FUNC_4(3, VAR_6, "write");
        }
        if (FUNC_21(VAR_11, &VAR_3, sizeof VAR_3) != sizeof VAR_3) {
            FUNC_4(3, VAR_6, "write");
        }
        FUNC_6(0);
    }
    FUNC_16(VAR_12, VAR_12);

    VAR_12 = FUNC_20(VAR_12, &VAR_8->status, 0);
    if (VAR_12 == -1) {
        FUNC_4(3, VAR_6, "wait");
    }
    FUNC_9(VAR_12, VAR_1);
    FUNC_15(VAR_8->dir);
    if (VAR_8->status != 0) {
        FUNC_13('\n');
        FUNC_10(VAR_10, 0, VAR_0);
        FUNC_1(VAR_7, VAR_10);
        return;
    }

    FUNC_10(VAR_11, 0, VAR_0);
    int VAR_13 = FUNC_14(VAR_11, &VAR_8->dur, sizeof VAR_8->dur);
    if (VAR_13 != sizeof VAR_8->dur) {
        FUNC_12("read");
        VAR_8->status = 1;
    }
    VAR_13 = FUNC_14(VAR_11, &VAR_8->bytes, sizeof VAR_8->bytes);
    if (VAR_13 != sizeof VAR_8->bytes) {
        FUNC_12("read");
        VAR_8->status = 1;
    }
}
