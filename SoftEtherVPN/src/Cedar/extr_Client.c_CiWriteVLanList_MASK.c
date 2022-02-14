
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int Name; } ;
typedef TYPE_1__ UNIX_VLAN ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int UnixVLanList; } ;
typedef int FOLDER ;
typedef TYPE_2__ CLIENT ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(CLIENT *VAR_0, FOLDER *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0->UnixVLanList);
 {
  UINT VAR_2;
  for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0->UnixVLanList);VAR_2++)
  {
   UNIX_VLAN *VAR_3 = FUNC_2(VAR_0->UnixVLanList, VAR_2);
   FUNC_1(VAR_0, FUNC_0(VAR_1, VAR_3->Name), VAR_3);
  }
 }
 FUNC_5(VAR_0->UnixVLanList);
}
