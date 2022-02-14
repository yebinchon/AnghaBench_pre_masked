
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int loopback; } ;
struct TYPE_4__ {TYPE_1__ conf0; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(int *VAR_2, int *VAR_3)
{
    FUNC_4();

    FUNC_5();
    VAR_1 = 1;

    *VAR_2 = FUNC_2("/dev/uart/1", VAR_0);
    FUNC_0(*VAR_2, -1, "Cannot open UART");

    FUNC_1(1);

    *VAR_3 = FUNC_3();
}
