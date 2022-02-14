
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_bytes; } ;


 TYPE_1__* VAR_0 ;

unsigned long FUNC_0(void)
{
 unsigned long VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].num_bytes; VAR_2++)
  VAR_1 += VAR_0[VAR_2].num_bytes;

 return VAR_1;
}
