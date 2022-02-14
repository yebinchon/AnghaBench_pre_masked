
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ MPT_DRIVER_CLASS ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static u8
FUNC_0(MPT_DRIVER_CLASS VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = VAR_0-1; VAR_3; VAR_3--)
  if (VAR_1[VAR_3] == VAR_2)
   return VAR_3;
 return 0;
}
