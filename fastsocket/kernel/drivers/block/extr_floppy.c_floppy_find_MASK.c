
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
typedef int dev_t ;
struct TYPE_2__ {scalar_t__ version; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 struct kobject* FUNC_2 (int ) ;

__attribute__((used)) static struct kobject *FUNC_3(dev_t VAR_6, int *VAR_7, void *VAR_8)
{
 int VAR_9 = (*VAR_7 & 3) | ((*VAR_7 & 0x80) >> 5);
 if (VAR_9 >= VAR_1 ||
     !(VAR_2 & (1 << VAR_9)) ||
     VAR_4[FUNC_1(VAR_9)].version == VAR_0)
  return ((void*)0);
 if (((*VAR_7 >> 2) & 0x1f) >= FUNC_0(VAR_5))
  return ((void*)0);
 *VAR_7 = 0;
 return FUNC_2(VAR_3[VAR_9]);
}
