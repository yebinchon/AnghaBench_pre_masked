
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;

int FUNC_1(void)
{
 u32 VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_2->base + VAR_1);
 VAR_3 = ((VAR_3 & VAR_0) >> 27);
 return (int)VAR_3;

}
