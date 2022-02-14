
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ prio; scalar_t__ state; } ;
typedef TYPE_1__ dsptask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;

dsptask_t* FUNC_2(dsptask_t *VAR_10)
{
 u32 VAR_11;
 dsptask_t *VAR_12 = ((void*)0);

 FUNC_0(VAR_11);
 if(VAR_10==VAR_6) {
  VAR_7 = VAR_10;
  VAR_8 = VAR_5;
  VAR_12 = VAR_10;
 } else {
  if(VAR_10->prio<VAR_6->prio) {
   VAR_7 = VAR_10;
   VAR_8 = VAR_5;
   if(VAR_6->state==VAR_4)
    VAR_9[5] = ((VAR_9[5]&~(VAR_2|VAR_1|VAR_0))|VAR_3);

   VAR_12 = VAR_10;
  }
 }
 FUNC_1(VAR_11);

 return VAR_12;
}
