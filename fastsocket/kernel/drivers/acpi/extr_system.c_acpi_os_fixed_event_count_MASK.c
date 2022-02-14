
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int count; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

void FUNC_0(u32 VAR_4)
{
 if (!VAR_2)
  return;

 if (VAR_4 < VAR_0)
  VAR_2[VAR_3 + VAR_4].count++;
 else
  VAR_2[VAR_3 + VAR_0 + VAR_1].
    count++;

 return;
}
