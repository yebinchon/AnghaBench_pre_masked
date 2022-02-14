
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int addr; } ;
typedef TYPE_1__ psw_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{
 psw_t VAR_2;

 FUNC_1();
 VAR_2.mask = VAR_0 | VAR_1;
 VAR_2.addr = 0xfff;
 FUNC_0(VAR_2);
}
