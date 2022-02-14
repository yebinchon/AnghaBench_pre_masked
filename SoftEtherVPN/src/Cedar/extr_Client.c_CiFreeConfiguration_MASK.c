
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UNIX_VLAN ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {int * UnixVLanList; int * AccountList; int CfgRw; } ;
typedef TYPE_1__ CLIENT ;
typedef int ACCOUNT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

void FUNC_8(CLIENT *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_1(VAR_0);


 FUNC_3(VAR_0->CfgRw);


 for (VAR_1 = 0;VAR_1 < FUNC_5(VAR_0->AccountList);VAR_1++)
 {
  ACCOUNT *VAR_2 = FUNC_4(VAR_0->AccountList, VAR_1);

  FUNC_0(VAR_2);
 }
 FUNC_6(VAR_0->AccountList);

 if (VAR_0->UnixVLanList != ((void*)0))
 {

  for (VAR_1 = 0;VAR_1 < FUNC_5(VAR_0->UnixVLanList);VAR_1++)
  {
   UNIX_VLAN *VAR_3 = FUNC_4(VAR_0->UnixVLanList, VAR_1);
   FUNC_2(VAR_3);
  }
  FUNC_6(VAR_0->UnixVLanList);
 }
 VAR_0->UnixVLanList = ((void*)0);





}
