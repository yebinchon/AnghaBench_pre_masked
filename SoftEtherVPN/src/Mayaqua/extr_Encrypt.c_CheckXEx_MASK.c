
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int subject_name; int issuer_name; } ;
typedef TYPE_1__ X ;
typedef int K ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*) ;

bool FUNC_5(X *VAR_0, X *VAR_1, bool VAR_2, bool VAR_3)
{
 K *VAR_4;
 bool VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = FUNC_0(VAR_0, VAR_4);

 if (VAR_5)
 {
  if (VAR_2)
  {
   if (FUNC_2(VAR_0->issuer_name, VAR_1->subject_name) == 0)
   {
    VAR_5 = 0;
   }
  }

  if (VAR_3)
  {
   if (FUNC_1(VAR_1) == 0)
   {
    VAR_5 = 0;
   }
  }
 }

 FUNC_3(VAR_4);

 return VAR_5;
}
