
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x509; } ;
typedef TYPE_1__ X ;
struct TYPE_6__ {int pkey; } ;
typedef TYPE_2__ K ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;

bool FUNC_3(X *VAR_1, K *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_0);
 {
  if (FUNC_2(VAR_1->x509, VAR_2->pkey) == 0)
  {
   FUNC_1(VAR_0);
   return 0;
  }
 }
 FUNC_1(VAR_0);
 return 1;
}
