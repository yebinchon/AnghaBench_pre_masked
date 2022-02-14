
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ data; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ ASN1_TIME ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_0 ;

bool FUNC_2(SYSTEMTIME *VAR_1, void *VAR_2)
{
 ASN1_TIME *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = (ASN1_TIME *)VAR_2;
 if (FUNC_1(VAR_1, (char *)VAR_3->data) == 0)
 {
  return 0;
 }

 if (VAR_3->type == VAR_0)
 {
  FUNC_0(VAR_1, VAR_1);
 }

 return 1;
}
