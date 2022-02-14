
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int high; scalar_t__ low; } ;
union DWunion {int ll; TYPE_1__ s; } ;
typedef scalar_t__ u32 ;
typedef int s64 ;



s64 FUNC_0(s64 VAR_0)
{
 union DWunion VAR_1;
 union DWunion VAR_2;

 VAR_2.ll = VAR_0;

 VAR_1.s.low = -VAR_2.s.low;
 VAR_1.s.high = -VAR_2.s.high - ((u32) VAR_1.s.low > 0);

 return VAR_1.ll;
}
