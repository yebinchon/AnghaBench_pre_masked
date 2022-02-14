
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct edid {int extensions; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

u8 *FUNC_0(struct edid *VAR_2)
{
 u8 *VAR_3 = ((void*)0);
 int VAR_4;


 if (VAR_2 == ((void*)0) || VAR_2->extensions == 0)
  return ((void*)0);


 for (VAR_4 = 0; VAR_4 < VAR_2->extensions; VAR_4++) {
  VAR_3 = (u8 *)VAR_2 + VAR_1 * (VAR_4 + 1);
  if (VAR_3[0] == VAR_0)
   break;
 }

 if (VAR_4 == VAR_2->extensions)
  return ((void*)0);

 return VAR_3;
}
