
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__** punctuationtable; } ;
typedef TYPE_1__ script_t ;
struct TYPE_7__ {scalar_t__* p; struct TYPE_7__* next; } ;
typedef TYPE_2__ punctuation_t ;


 int FUNC_0 (TYPE_2__**,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;

void FUNC_3(script_t *VAR_0, punctuation_t *VAR_1)
{
 int VAR_2;
 punctuation_t *VAR_3, *VAR_4, *VAR_5;


 if (!VAR_0->punctuationtable) VAR_0->punctuationtable = (punctuation_t **)
            FUNC_1(256 * sizeof(punctuation_t *));
 FUNC_0(VAR_0->punctuationtable, 0, 256 * sizeof(punctuation_t *));

 for (VAR_2 = 0; VAR_1[VAR_2].p; VAR_2++)
 {
  VAR_5 = &VAR_1[VAR_2];
  VAR_4 = ((void*)0);

  for (VAR_3 = VAR_0->punctuationtable[(unsigned int) VAR_5->p[0]]; VAR_3; VAR_3 = VAR_3->next)
  {
   if (FUNC_2(VAR_3->p) < FUNC_2(VAR_5->p))
   {
    VAR_5->next = VAR_3;
    if (VAR_4) VAR_4->next = VAR_5;
    else VAR_0->punctuationtable[(unsigned int) VAR_5->p[0]] = VAR_5;
    break;
   }
   VAR_4 = VAR_3;
  }
  if (!VAR_3)
  {
   VAR_5->next = ((void*)0);
   if (VAR_4) VAR_4->next = VAR_5;
   else VAR_0->punctuationtable[(unsigned int) VAR_5->p[0]] = VAR_5;
  }
 }
}
