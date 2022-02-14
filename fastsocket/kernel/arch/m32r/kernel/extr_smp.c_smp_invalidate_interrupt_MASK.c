
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* active_mm; } ;
struct TYPE_5__ {unsigned long* context; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
 int VAR_8 = FUNC_6();
 unsigned long *VAR_9 = &VAR_6->context[VAR_8];

 if (!FUNC_3(VAR_8, VAR_5))
  return;

 if (VAR_7 == VAR_0) {
  *VAR_9 = VAR_2;
  if (VAR_6 == VAR_4->active_mm)
   FUNC_1(VAR_6);
  else
   FUNC_4(VAR_8, FUNC_5(VAR_6));
 } else {
  unsigned long VAR_10 = VAR_7;

  if (*VAR_9 != VAR_2) {
   VAR_10 &= VAR_3;
   VAR_10 |= (*VAR_9 & VAR_1);
   FUNC_0(VAR_10);
  }
 }
 FUNC_2(VAR_8, VAR_5);
}
