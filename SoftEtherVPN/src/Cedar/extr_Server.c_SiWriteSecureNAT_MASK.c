
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SecureNATOption; scalar_t__ EnableSecureNAT; } ;
typedef TYPE_1__ HUB ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(HUB *VAR_0, FOLDER *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1, "Disabled", VAR_0->EnableSecureNAT ? 0 : 1);

 FUNC_1(VAR_0->SecureNATOption, VAR_1);
}
