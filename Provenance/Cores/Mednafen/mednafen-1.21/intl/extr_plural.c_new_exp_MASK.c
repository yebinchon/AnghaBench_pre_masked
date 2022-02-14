
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct expression** args; } ;
struct expression {int nargs; int operation; TYPE_1__ val; } ;
typedef enum expression_operator { ____Placeholder_expression_operator } expression_operator ;


 int FUNC_0 (struct expression* const) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct expression *
FUNC_2 (int VAR_0, enum expression_operator VAR_1,
  struct expression * const *VAR_2)
{
  int VAR_3;
  struct expression *VAR_4;


  for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--)
    if (VAR_2[VAR_3] == ((void*)0))
      goto fail;


  VAR_4 = (struct expression *) FUNC_1 (sizeof (*VAR_4));
  if (VAR_4 != ((void*)0))
    {
      VAR_4->nargs = VAR_0;
      VAR_4->operation = VAR_1;
      for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--)
 VAR_4->val.args[VAR_3] = VAR_2[VAR_3];
      return VAR_4;
    }

 fail:
  for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--)
    FUNC_0 (VAR_2[VAR_3]);

  return ((void*)0);
}
