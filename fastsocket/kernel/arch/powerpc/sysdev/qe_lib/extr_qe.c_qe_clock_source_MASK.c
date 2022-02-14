
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum qe_clock { ____Placeholder_qe_clock } qe_clock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (char const*,int *,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

enum qe_clock FUNC_3(const char *VAR_4)
{
 unsigned int VAR_5;

 if (FUNC_1(VAR_4, "none") == 0)
  return VAR_3;

 if (FUNC_2(VAR_4, "brg", 3) == 0) {
  VAR_5 = FUNC_0(VAR_4 + 3, ((void*)0), 10);
  if ((VAR_5 >= 1) && (VAR_5 <= 16))
   return (VAR_0 - 1) + VAR_5;
  else
   return VAR_2;
 }

 if (FUNC_2(VAR_4, "clk", 3) == 0) {
  VAR_5 = FUNC_0(VAR_4 + 3, ((void*)0), 10);
  if ((VAR_5 >= 1) && (VAR_5 <= 24))
   return (VAR_1 - 1) + VAR_5;
  else
   return VAR_2;
 }

 return VAR_2;
}
