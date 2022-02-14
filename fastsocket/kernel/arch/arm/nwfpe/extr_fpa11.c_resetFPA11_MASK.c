
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fpsr; int * fType; } ;
typedef TYPE_1__ FPA11 ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_3;
 FPA11 *VAR_4 = FUNC_0();


 for (VAR_3 = 0; VAR_3 <= 7; VAR_3++) {
  VAR_4->fType[VAR_3] = VAR_2;
 }


 VAR_4->fpsr = VAR_1 | VAR_0;
}
