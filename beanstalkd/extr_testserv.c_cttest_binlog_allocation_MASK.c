
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use; int filesize; int wantsync; scalar_t__ syncrate; int dir; } ;
struct TYPE_4__ {TYPE_1__ wal; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void
FUNC_7()
{
    int VAR_2 = 0;

    VAR_0 = 601;
    VAR_1.wal.dir = FUNC_2();
    VAR_1.wal.use = 1;
    VAR_1.wal.filesize = VAR_0;
    VAR_1.wal.syncrate = 0;
    VAR_1.wal.wantsync = 1;

    int VAR_3 = FUNC_0();
    int VAR_4 = FUNC_5(VAR_3);
    for (VAR_2 = 1; VAR_2 <= 96; VAR_2++) {
        char *VAR_5 = FUNC_3("INSERTED %d\r\n", VAR_2);
        FUNC_6(VAR_4, "put 0 0 120 22\r\n");
        FUNC_6(VAR_4, "job payload xxxxxxxxxx\r\n");
        FUNC_1(VAR_4, VAR_5);
        FUNC_4(VAR_5);
    }
    for (VAR_2 = 1; VAR_2 <= 96; VAR_2++) {
        char *VAR_6 = FUNC_3("delete %d\r\n", VAR_2);
        FUNC_6(VAR_4, VAR_6);
        FUNC_1(VAR_4, "DELETED\r\n");
        FUNC_4(VAR_6);
    }
}
