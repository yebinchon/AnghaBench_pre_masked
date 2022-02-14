
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dir; int use; int filesize; int wantsync; scalar_t__ syncrate; } ;
struct TYPE_4__ {TYPE_1__ wal; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,char*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void
FUNC_10()
{
    int VAR_2 = 0;
    int VAR_3;

    VAR_0 = 4096;
    VAR_1.wal.dir = FUNC_3();
    VAR_1.wal.use = 1;
    VAR_1.wal.filesize = VAR_0;
    VAR_1.wal.syncrate = 0;
    VAR_1.wal.wantsync = 1;

    int VAR_4 = FUNC_0();
    int VAR_5 = FUNC_8(VAR_4);
    char *VAR_6 = FUNC_6("%s/binlog.2", FUNC_3());
    while (!FUNC_4(VAR_6)) {
        char *VAR_7 = FUNC_6("INSERTED %d\r\n", ++VAR_2);
        FUNC_9(VAR_5, "put 0 0 100 50\r\n");
        FUNC_9(VAR_5, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\r\n");
        FUNC_2(VAR_5, VAR_7);
        FUNC_7(VAR_7);
    }

    char *VAR_8 = FUNC_6("%s/binlog.1", FUNC_3());
    VAR_3 = FUNC_5(VAR_8);
    FUNC_1(VAR_3 == VAR_0, "binlog.1 %d != %d", VAR_3, VAR_0);
    VAR_3 = FUNC_5(VAR_6);
    FUNC_1(VAR_3 == VAR_0, "binlog.2 %d != %d", VAR_3, VAR_0);
    FUNC_7(VAR_8);
    FUNC_7(VAR_6);
}
