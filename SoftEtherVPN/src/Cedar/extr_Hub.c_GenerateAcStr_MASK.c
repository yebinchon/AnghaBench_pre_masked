
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
typedef int mask ;
typedef int ip ;
struct TYPE_3__ {int Masked; int SubnetMask; int IpAddress; } ;
typedef TYPE_1__ AC ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*,...) ;
 int FUNC_2 (char*,int,int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,int *) ;

char *FUNC_4(AC *VAR_1)
{
 char VAR_2[VAR_0];
 char VAR_3[64], VAR_4[64];

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_2(VAR_3, sizeof(VAR_3), &VAR_1->IpAddress);
 FUNC_3(VAR_4, sizeof(VAR_4), &VAR_1->SubnetMask);

 if (VAR_1->Masked == 0)
 {
  FUNC_1(VAR_2, sizeof(VAR_2), "%s", VAR_3);
 }
 else
 {
  FUNC_1(VAR_2, sizeof(VAR_2), "%s/%s", VAR_3, VAR_4);
 }

 return FUNC_0(VAR_2);
}
