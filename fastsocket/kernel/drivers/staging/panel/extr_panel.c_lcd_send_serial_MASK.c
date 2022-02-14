
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int da; int cl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_3)
{
 int VAR_4;




 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_2.cl = VAR_0;
  FUNC_0();
  VAR_2.da = VAR_3 & 1;
  FUNC_0();
  FUNC_1(2);
  VAR_2.cl = VAR_1;
  FUNC_0();
  FUNC_1(1);
  VAR_3 >>= 1;
 }
}
