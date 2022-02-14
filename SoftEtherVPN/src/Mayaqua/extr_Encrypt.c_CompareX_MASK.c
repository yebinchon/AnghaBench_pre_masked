
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x509; } ;
typedef TYPE_1__ X ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;

bool FUNC_3(X *VAR_1, X *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_0);
 if (FUNC_2(VAR_1->x509, VAR_2->x509) == 0)
 {
  FUNC_1(VAR_0);
  return 1;
 }
 else
 {
  FUNC_1(VAR_0);
  return 0;
 }
}
