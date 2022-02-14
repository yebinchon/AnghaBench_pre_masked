
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
typedef int SStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;

void FUNC_1(SStream *VAR_2, int32_t VAR_3)
{
 if (VAR_3 >= 0) {
  if (VAR_3 > VAR_0)
   FUNC_0(VAR_2, "#0x%x", VAR_3);
  else
   FUNC_0(VAR_2, "#%u", VAR_3);
 } else {
  if (VAR_3 <- VAR_0) {
   if (VAR_3 == VAR_1)
    FUNC_0(VAR_2, "#-0x%x", (uint32_t)VAR_3);
   else
    FUNC_0(VAR_2, "#-0x%x", (uint32_t)-VAR_3);
  }
  else
   FUNC_0(VAR_2, "#-%u", -VAR_3);
 }
}
