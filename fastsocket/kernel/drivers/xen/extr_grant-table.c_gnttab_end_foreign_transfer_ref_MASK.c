
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
typedef size_t grant_ref_t ;
struct TYPE_2__ {int flags; unsigned long frame; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int*,int,int ) ;

unsigned long FUNC_4(grant_ref_t VAR_3)
{
 unsigned long VAR_4;
 u16 VAR_5;





 while (!((VAR_5 = VAR_2[VAR_3].flags) & VAR_0)) {
  if (FUNC_3(&VAR_2[VAR_3].flags, VAR_5, 0) == VAR_5)
   return 0;
  FUNC_1();
 }


 while (!(VAR_5 & VAR_1)) {
  VAR_5 = VAR_2[VAR_3].flags;
  FUNC_1();
 }

 FUNC_2();
 VAR_4 = VAR_2[VAR_3].frame;
 FUNC_0(VAR_4 == 0);

 return VAR_4;
}
