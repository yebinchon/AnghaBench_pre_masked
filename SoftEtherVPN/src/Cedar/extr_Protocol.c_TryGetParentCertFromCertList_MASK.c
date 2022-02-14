
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int issuer_url; scalar_t__ root_cert; } ;
typedef TYPE_1__ X ;
typedef int LIST ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;

bool FUNC_9(LIST *VAR_1, X *VAR_2, LIST *VAR_3)
{
 bool VAR_4 = 0;
 X *VAR_5;
 bool VAR_6 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_8(VAR_3) >= VAR_0)
 {
  return 0;
 }

 FUNC_0(VAR_3, FUNC_2(VAR_2));

 if (VAR_2->root_cert)
 {
  return 1;
 }

 VAR_5 = FUNC_5(VAR_1, VAR_2);

 if (VAR_5 == ((void*)0))
 {
  if (FUNC_7(VAR_2->issuer_url) == 0)
  {
   VAR_5 = FUNC_4(VAR_2->issuer_url);

   if (FUNC_1(VAR_2, VAR_5, 1, 1) && FUNC_3(VAR_2, VAR_5) == 0)
   {

    VAR_6 = 1;
   }
   else
   {

    FUNC_6(VAR_5);
    VAR_5 = ((void*)0);
   }
  }
 }

 if (VAR_5 != ((void*)0))
 {
  VAR_4 = FUNC_9(VAR_1, VAR_5, VAR_3);
 }

 if (VAR_6)
 {
  FUNC_6(VAR_5);
 }

 return VAR_4;
}
