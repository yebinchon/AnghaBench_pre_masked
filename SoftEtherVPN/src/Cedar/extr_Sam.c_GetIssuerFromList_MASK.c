
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int issuer_name; int subject_name; } ;
typedef TYPE_1__ X ;
typedef scalar_t__ UINT ;
typedef int LIST ;
typedef int K ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;

X *FUNC_8(LIST *VAR_0, X *VAR_1)
{
 UINT VAR_2;
 X *VAR_3 = ((void*)0);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_7(VAR_0);VAR_2++)
 {
  X *VAR_4 = FUNC_6(VAR_0, VAR_2);

  if (FUNC_1(VAR_4))
  {
   if (FUNC_2(VAR_4->subject_name, VAR_1->issuer_name))
   {

    K *VAR_5 = FUNC_5(VAR_4);

    if (VAR_5 != ((void*)0))
    {

     if (FUNC_0(VAR_1, VAR_5))
     {
      VAR_3 = VAR_4;
     }
     FUNC_4(VAR_5);
    }
   }
  }
  if (FUNC_3(VAR_4, VAR_1))
  {

   VAR_3 = VAR_4;
  }
 }

 return VAR_3;
}
