
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LineBreakPropertiesLang {struct LineBreakProperties* lbp; int namelen; int * lang; } ;
struct LineBreakProperties {int dummy; } ;


 struct LineBreakPropertiesLang* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *,int ) ;

__attribute__((used)) static struct LineBreakProperties *FUNC_1(const char *VAR_1)
{
 struct LineBreakPropertiesLang *VAR_2;
 if (VAR_1 != ((void*)0))
 {
  for (VAR_2 = VAR_0; VAR_2->lang != ((void*)0); ++VAR_2)
  {
   if (FUNC_0(VAR_1, VAR_2->lang, VAR_2->namelen) == 0)
   {
    return VAR_2->lbp;
   }
  }
 }
 return ((void*)0);
}
