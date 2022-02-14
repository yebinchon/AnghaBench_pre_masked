
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int nhlines; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;

u32 FUNC_3()
{
 u32 VAR_1,VAR_2 = 0;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_2();
 FUNC_1(VAR_1);

 if(VAR_2>=VAR_0->nhlines) VAR_2 -=VAR_0->nhlines;
 VAR_2 >>= 1;

 return VAR_2;
}
