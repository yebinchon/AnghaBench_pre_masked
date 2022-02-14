
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int data; } ;
typedef TYPE_1__ ASN1_IA5STRING ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static char *FUNC_2(ASN1_IA5STRING *VAR_0)
{
  char *VAR_1;
  if(!VAR_0 || !VAR_0->length)
    return ((void*)0);
  VAR_1 = FUNC_0(VAR_0->length + 1);
  FUNC_1(VAR_1, VAR_0->data, VAR_0->length);
  VAR_1[VAR_0->length] = 0;
  return VAR_1;
}
