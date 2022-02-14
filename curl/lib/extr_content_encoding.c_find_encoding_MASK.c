
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * alias; int * name; } ;
typedef TYPE_1__ content_encoding ;


 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *,size_t) ;

__attribute__((used)) static const content_encoding *FUNC_1(const char *VAR_1, size_t VAR_2)
{
  const content_encoding * const *VAR_3;

  for(VAR_3 = VAR_0; *VAR_3; VAR_3++) {
    const content_encoding *VAR_4 = *VAR_3;
    if((FUNC_0(VAR_1, VAR_4->name, VAR_2) && !VAR_4->name[VAR_2]) ||
       (VAR_4->alias && FUNC_0(VAR_1, VAR_4->alias, VAR_2) && !VAR_4->alias[VAR_2]))
      return VAR_4;
  }
  return ((void*)0);
}
