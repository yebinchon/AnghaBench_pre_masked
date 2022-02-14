
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf32_t ;
struct LineBreakProperties {int dummy; } ;
typedef enum LineBreakClass { ____Placeholder_LineBreakClass } LineBreakClass ;


 int VAR_0 ;
 int FUNC_0 (int ,struct LineBreakProperties*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static enum LineBreakClass FUNC_2(
  utf32_t VAR_1,
  struct LineBreakProperties *VAR_2)
{
 enum LineBreakClass VAR_3;


 if (VAR_2)
 {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 != VAR_0)
   return VAR_3;
 }




 return FUNC_1(VAR_1);
}
