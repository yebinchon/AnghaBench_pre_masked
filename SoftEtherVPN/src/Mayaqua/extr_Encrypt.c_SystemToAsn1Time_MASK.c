
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_2__ {int length; int type; int * data; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ ASN1_TIME ;


 int * FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int *) ;
 int VAR_0 ;

bool FUNC_4(void *VAR_1, SYSTEMTIME *VAR_2)
{
 char VAR_3[20];
 ASN1_TIME *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_3(VAR_3, sizeof(VAR_3), VAR_2) == 0)
 {
  return 0;
 }
 VAR_4 = (ASN1_TIME *)VAR_1;
 if (VAR_4->data == ((void*)0) || VAR_4->length < sizeof(VAR_3))
 {
  VAR_4->data = FUNC_0(sizeof(VAR_3));
 }
 FUNC_1((char *)VAR_4->data, VAR_4->length, VAR_3);
 VAR_4->length = FUNC_2(VAR_3);
 VAR_4->type = VAR_0;

 return 1;
}
