
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ root_cert; } ;
typedef TYPE_1__ X ;
typedef int LIST ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*,int,int *) ;

bool FUNC_3(X *VAR_0)
{
 LIST *VAR_1;
 bool VAR_2 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->root_cert)
 {
  return 1;
 }

 VAR_1 = FUNC_1(1);

 VAR_2 = FUNC_2(VAR_1, VAR_0, 1, ((void*)0));

 FUNC_0(VAR_1);

 return VAR_2;
}
