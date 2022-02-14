
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ utf32_t ;
struct LineBreakProperties {scalar_t__ prop; scalar_t__ start; scalar_t__ end; } ;
typedef enum LineBreakClass { ____Placeholder_LineBreakClass } LineBreakClass ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum LineBreakClass FUNC_0(
  utf32_t VAR_2,
  struct LineBreakProperties *VAR_3)
{
 while (VAR_3->prop != VAR_0 && VAR_2 >= VAR_3->start)
 {
  if (VAR_2 <= VAR_3->end)
   return VAR_3->prop;
  ++VAR_3;
 }
 return VAR_1;
}
