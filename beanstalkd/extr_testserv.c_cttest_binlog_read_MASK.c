
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use; int wantsync; scalar_t__ syncrate; int dir; } ;
struct TYPE_4__ {TYPE_1__ wal; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;
 TYPE_2__ VAR_0 ;

void
FUNC_6()
{
    VAR_0.wal.dir = FUNC_2();
    VAR_0.wal.use = 1;
    VAR_0.wal.syncrate = 0;
    VAR_0.wal.wantsync = 1;

    int VAR_1 = FUNC_0();
    int VAR_2 = FUNC_4(VAR_1);
    FUNC_5(VAR_2, "use test\r\n");
    FUNC_1(VAR_2, "USING test\r\n");
    FUNC_5(VAR_2, "put 0 0 120 4\r\n");
    FUNC_5(VAR_2, "test\r\n");
    FUNC_1(VAR_2, "INSERTED 1\r\n");
    FUNC_5(VAR_2, "put 0 0 120 4\r\n");
    FUNC_5(VAR_2, "tes1\r\n");
    FUNC_1(VAR_2, "INSERTED 2\r\n");
    FUNC_5(VAR_2, "watch test\r\n");
    FUNC_1(VAR_2, "WATCHING 2\r\n");
    FUNC_5(VAR_2, "reserve\r\n");
    FUNC_1(VAR_2, "RESERVED 1 4\r\n");
    FUNC_1(VAR_2, "test\r\n");
    FUNC_5(VAR_2, "release 1 1 1\r\n");
    FUNC_1(VAR_2, "RELEASED\r\n");
    FUNC_5(VAR_2, "reserve\r\n");
    FUNC_1(VAR_2, "RESERVED 2 4\r\n");
    FUNC_1(VAR_2, "tes1\r\n");
    FUNC_5(VAR_2, "delete 2\r\n");
    FUNC_1(VAR_2, "DELETED\r\n");

    FUNC_3();

    VAR_1 = FUNC_0();
    VAR_2 = FUNC_4(VAR_1);
    FUNC_5(VAR_2, "watch test\r\n");
    FUNC_1(VAR_2, "WATCHING 2\r\n");
    FUNC_5(VAR_2, "reserve\r\n");
    FUNC_1(VAR_2, "RESERVED 1 4\r\n");
    FUNC_1(VAR_2, "test\r\n");
    FUNC_5(VAR_2, "delete 1\r\n");
    FUNC_1(VAR_2, "DELETED\r\n");
    FUNC_5(VAR_2, "delete 2\r\n");
    FUNC_1(VAR_2, "NOT_FOUND\r\n");
}
