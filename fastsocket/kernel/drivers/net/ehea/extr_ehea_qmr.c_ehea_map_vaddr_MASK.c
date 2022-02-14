
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u64 ;
struct TYPE_6__ {TYPE_2__** top; } ;
struct TYPE_5__ {TYPE_1__** dir; } ;
struct TYPE_4__ {unsigned long* ent; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 TYPE_3__* VAR_6 ;
 unsigned long FUNC_0 (void*) ;

u64 FUNC_1(void *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12;

 if (!VAR_6)
  return VAR_2;

 VAR_11 = FUNC_0(VAR_7) >> VAR_5;
 VAR_8 = (VAR_11 >> VAR_4) & VAR_1;
 if (!VAR_6->top[VAR_8])
  return VAR_2;

 VAR_9 = (VAR_11 >> VAR_0) & VAR_1;
 if (!VAR_6->top[VAR_8]->dir[VAR_9])
  return VAR_2;

 VAR_10 = VAR_11 & VAR_1;
 if (!VAR_6->top[VAR_8]->dir[VAR_9]->ent[VAR_10])
  return VAR_2;

 VAR_12 = (unsigned long)VAR_7 & (VAR_3 - 1);
 return VAR_6->top[VAR_8]->dir[VAR_9]->ent[VAR_10] | VAR_12;
}
