
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ utf32_t ;
typedef enum LineBreakClass { ____Placeholder_LineBreakClass } LineBreakClass ;
struct TYPE_2__ {scalar_t__ end; int lbp; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static enum LineBreakClass FUNC_2(
  utf32_t VAR_2)
{
 size_t VAR_3 = 0;
 while (VAR_2 > VAR_1[VAR_3].end)
  ++VAR_3;
 FUNC_0(VAR_3 < VAR_0);
 return FUNC_1(VAR_2, VAR_1[VAR_3].lbp);
}
