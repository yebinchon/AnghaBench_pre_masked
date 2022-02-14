
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {int Enabled; int MacAddress; } ;
typedef TYPE_1__ UNIX_VLAN ;
typedef int FOLDER ;
typedef int CLIENT ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int ) ;

void FUNC_3(CLIENT *VAR_1, FOLDER *VAR_2, UNIX_VLAN *VAR_3)
{
 char VAR_4[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_4, sizeof(VAR_4), VAR_3->MacAddress);
 FUNC_1(VAR_2, "MacAddress", VAR_4);
 FUNC_0(VAR_2, "Enabled", VAR_3->Enabled);
}
