
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ProxyType; int ProxyHostName; } ;
typedef int IP ;
typedef TYPE_1__ INTERNET_SETTING ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;

bool FUNC_4(INTERNET_SETTING *VAR_1)
{
 IP VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1->ProxyType == VAR_0)
 {
  return 0;
 }

 if (FUNC_0(&VAR_2, VAR_1->ProxyHostName) == 0)
 {
  return 0;
 }

 if (FUNC_2(&VAR_2))
 {
  return 1;
 }

 if (FUNC_1(&VAR_2))
 {
  return 1;
 }

 if (FUNC_3(&VAR_2))
 {
  return 1;
 }

 return 0;
}
