
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use; int dir; } ;
struct TYPE_4__ {TYPE_1__ wal; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;
 TYPE_2__ VAR_1 ;

void
FUNC_6()
{
    VAR_1.wal.dir = FUNC_2();
    VAR_1.wal.use = 1;
    VAR_0 = 10;

    int VAR_2 = FUNC_0();
    FUNC_3();

    VAR_2 = FUNC_0();
    int VAR_3 = FUNC_4(VAR_2);
    FUNC_5(VAR_3, "put 0 0 0 0\r\n");
    FUNC_5(VAR_3, "\r\n");
    FUNC_1(VAR_3, "INSERTED 1\r\n");
}
