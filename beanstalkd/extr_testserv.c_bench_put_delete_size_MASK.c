
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int use; int filesize; int syncrate; int wantsync; int dir; } ;
struct TYPE_4__ {TYPE_1__ wal; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int FUNC_7 (char*,char,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (char*,char*,int) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_11(int VAR_3, int VAR_4, int VAR_5, int VAR_6, int64 VAR_7)
{
    if (VAR_5 > 0) {
        VAR_2.wal.dir = FUNC_3();
        VAR_2.wal.use = 1;
        VAR_2.wal.filesize = VAR_5;
        VAR_2.wal.syncrate = VAR_7 * 1000000;
        VAR_2.wal.wantsync = VAR_6;
    }

    VAR_1 = VAR_0;
    int VAR_8 = FUNC_0();
    int VAR_9 = FUNC_8(VAR_8);
    char VAR_10[50], VAR_11[50];
    char VAR_12[VAR_4+1];
    FUNC_7(VAR_12, 'a', VAR_4);
    VAR_12[VAR_4] = 0;
    FUNC_5(VAR_4);
    FUNC_10(VAR_11, "put 0 0 0 %d\r\n", VAR_4);
    FUNC_4();
    int VAR_13;
    for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
        FUNC_9(VAR_9, VAR_11);
        FUNC_9(VAR_9, VAR_12);
        FUNC_9(VAR_9, "\r\n");
        FUNC_2(VAR_9, "INSERTED ");
        FUNC_10(VAR_10, "delete %d\r\n", VAR_13 + 1);
        FUNC_9(VAR_9, VAR_10);
        FUNC_1(VAR_9, "DELETED\r\n");
    }
    FUNC_6();
}
