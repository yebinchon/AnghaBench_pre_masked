
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct hpt_info {size_t clock; TYPE_1__* timings; } ;
struct TYPE_2__ {int ** clock_table; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static u32 FUNC_1(u8 VAR_1, struct hpt_info *VAR_2)
{
 int VAR_3;







 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0) - 1; VAR_3++)
  if (VAR_0[VAR_3] == VAR_1)
   break;

 return VAR_2->timings->clock_table[VAR_2->clock][VAR_3];
}
