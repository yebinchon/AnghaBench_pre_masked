
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ type; char* string; } ;
typedef TYPE_1__ token_t ;
struct TYPE_18__ {int token; int defines; int definehash; scalar_t__ skip; } ;
typedef TYPE_2__ source_t ;
typedef int define_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int *) ;
 int * FUNC_3 (int ,char*) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;

int FUNC_13(source_t *VAR_6, token_t *VAR_7)
{
 define_t *VAR_8;

 while(1)
 {
  if (!FUNC_7(VAR_6, VAR_7)) return VAR_4;

  if (VAR_7->type == VAR_2 && *VAR_7->string == '#')
  {



   {

    if (!FUNC_5(VAR_6)) return VAR_4;
    continue;
   }
  }
  if (VAR_7->type == VAR_2 && *VAR_7->string == '$')
  {



   {

    if (!FUNC_6(VAR_6)) return VAR_4;
    continue;
   }
  }

  if (VAR_7->type == VAR_3)
  {
   token_t VAR_9;
   if (FUNC_13(VAR_6, &VAR_9))
   {
    if (VAR_9.type == VAR_3)
    {
     VAR_7->string[FUNC_12(VAR_7->string)-1] = '\0';
     if (FUNC_12(VAR_7->string) + FUNC_12(VAR_9.string+1) + 1 >= VAR_0)
     {
      FUNC_10(VAR_6, "string longer than MAX_TOKEN %d\n", VAR_0);
      return VAR_4;
     }
     FUNC_11(VAR_7->string, VAR_9.string+1);
    }
    else
    {
     FUNC_8(VAR_6, &VAR_9);
    }
   }
  }

  if (VAR_6->skip) continue;

  if (VAR_7->type == VAR_1)
  {




   VAR_8 = FUNC_3(VAR_6->defines, VAR_7->string);


   if (VAR_8)
   {

    if (!FUNC_2(VAR_6, VAR_7, VAR_8)) return VAR_4;
    continue;
   }
  }

  FUNC_1(&VAR_6->token, VAR_7, sizeof(token_t));

  return VAR_5;
 }
}
