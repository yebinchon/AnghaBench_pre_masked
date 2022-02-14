
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct lguest {TYPE_1__* pgdirs; } ;
struct TYPE_2__ {scalar_t__ pgdir; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct lguest*,unsigned long) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct lguest *VAR_1, unsigned long VAR_2, u32 VAR_3)
{
 int VAR_4;

 if (VAR_3 >= VAR_0)
  return;


 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 < FUNC_0(VAR_1->pgdirs))

  FUNC_2(VAR_1->pgdirs[VAR_4].pgdir + VAR_3);
}
