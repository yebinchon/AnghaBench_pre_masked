
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int issuer_name; int subject_name; } ;
typedef TYPE_1__ X ;
typedef scalar_t__ UINT ;
typedef int LIST ;
typedef int K ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

X *FUNC_11(LIST *VAR_0, X *VAR_1)
{
 X *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = ((void*)0);

 FUNC_9(VAR_0);
 {
  UINT VAR_3;
  for (VAR_3 = 0;VAR_3 < FUNC_8(VAR_0);VAR_3++)
  {
   X *VAR_4 = FUNC_7(VAR_0, VAR_3);
   if (FUNC_1(VAR_4))
   {
    if (FUNC_3(VAR_4->subject_name, VAR_1->issuer_name))
    {
     K *VAR_5 = FUNC_6(VAR_4);
     if (VAR_5 != ((void*)0))
     {
      if (FUNC_0(VAR_1, VAR_5))
      {
       VAR_2 = FUNC_2(VAR_4);
      }
      FUNC_5(VAR_5);
     }
    }
    else if (FUNC_4(VAR_4, VAR_1))
    {
     VAR_2 = FUNC_2(VAR_4);
    }
   }

   if (VAR_2 != ((void*)0))
   {
    break;
   }
  }
 }
 FUNC_10(VAR_0);

 return VAR_2;
}
