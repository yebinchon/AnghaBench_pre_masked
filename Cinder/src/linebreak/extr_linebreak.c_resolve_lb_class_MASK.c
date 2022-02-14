
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum LineBreakClass { ____Placeholder_LineBreakClass } LineBreakClass ;



 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static enum LineBreakClass FUNC_1(
  enum LineBreakClass VAR_2,
  const char *VAR_3)
{
 switch (VAR_2)
 {
 case 131:
  if (VAR_3 != ((void*)0) &&
    (FUNC_0(VAR_3, "zh", 2) == 0 ||
     FUNC_0(VAR_3, "ja", 2) == 0 ||
     FUNC_0(VAR_3, "ko", 2) == 0))
  {
   return VAR_1;
  }

 case 130:
 case 129:
 case 128:
  return VAR_0;
 default:
  return VAR_2;
 }
}
