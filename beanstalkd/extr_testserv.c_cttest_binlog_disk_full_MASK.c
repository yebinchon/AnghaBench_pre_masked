
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
 int * VAR_0 ;
 int* VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;

void
FUNC_5()
{
    VAR_2 = 1000;
    VAR_0 = &VAR_4;
    VAR_1[0] = 1;
    VAR_1[2] = 1;

    VAR_3.wal.dir = FUNC_2();
    VAR_3.wal.use = 1;
    VAR_3.wal.filesize = VAR_2;
    VAR_3.wal.syncrate = 0;
    VAR_3.wal.wantsync = 1;

    int VAR_5 = FUNC_0();
    int VAR_6 = FUNC_3(VAR_5);
    FUNC_4(VAR_6, "put 0 0 100 50\r\n");
    FUNC_4(VAR_6, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\r\n");
    FUNC_1(VAR_6, "INSERTED 1\r\n");
    FUNC_4(VAR_6, "put 0 0 100 50\r\n");
    FUNC_4(VAR_6, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\r\n");
    FUNC_1(VAR_6, "INSERTED 2\r\n");
    FUNC_4(VAR_6, "put 0 0 100 50\r\n");
    FUNC_4(VAR_6, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\r\n");
    FUNC_1(VAR_6, "INSERTED 3\r\n");
    FUNC_4(VAR_6, "put 0 0 100 50\r\n");
    FUNC_4(VAR_6, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\r\n");
    FUNC_1(VAR_6, "INSERTED 4\r\n");

    FUNC_4(VAR_6, "put 0 0 100 50\r\n");
    FUNC_4(VAR_6, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\r\n");
    FUNC_1(VAR_6, "OUT_OF_MEMORY\r\n");

    FUNC_4(VAR_6, "put 0 0 100 50\r\n");
    FUNC_4(VAR_6, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\r\n");
    FUNC_1(VAR_6, "INSERTED 6\r\n");
    FUNC_4(VAR_6, "put 0 0 100 50\r\n");
    FUNC_4(VAR_6, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\r\n");
    FUNC_1(VAR_6, "INSERTED 7\r\n");
    FUNC_4(VAR_6, "put 0 0 100 50\r\n");
    FUNC_4(VAR_6, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\r\n");
    FUNC_1(VAR_6, "INSERTED 8\r\n");
    FUNC_4(VAR_6, "put 0 0 100 50\r\n");
    FUNC_4(VAR_6, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\r\n");
    FUNC_1(VAR_6, "INSERTED 9\r\n");

    FUNC_4(VAR_6, "delete 1\r\n");
    FUNC_1(VAR_6, "DELETED\r\n");
    FUNC_4(VAR_6, "delete 2\r\n");
    FUNC_1(VAR_6, "DELETED\r\n");
    FUNC_4(VAR_6, "delete 3\r\n");
    FUNC_1(VAR_6, "DELETED\r\n");
    FUNC_4(VAR_6, "delete 4\r\n");
    FUNC_1(VAR_6, "DELETED\r\n");
    FUNC_4(VAR_6, "delete 6\r\n");
    FUNC_1(VAR_6, "DELETED\r\n");
    FUNC_4(VAR_6, "delete 7\r\n");
    FUNC_1(VAR_6, "DELETED\r\n");
    FUNC_4(VAR_6, "delete 8\r\n");
    FUNC_1(VAR_6, "DELETED\r\n");
    FUNC_4(VAR_6, "delete 9\r\n");
    FUNC_1(VAR_6, "DELETED\r\n");
}
