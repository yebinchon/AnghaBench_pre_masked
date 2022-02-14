
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_15__ {int * MacAddress; int Name; int Enabled; } ;
typedef TYPE_2__ UNIX_VLAN ;
typedef int UCHAR ;
struct TYPE_18__ {int Size; int * Buf; } ;
struct TYPE_14__ {int NicDownOnDisconnect; } ;
struct TYPE_17__ {TYPE_1__ Config; int UnixVLanList; } ;
struct TYPE_16__ {int Name; } ;
typedef TYPE_3__ FOLDER ;
typedef TYPE_4__ CLIENT ;
typedef TYPE_5__ BUF ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,char*,char*,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int VAR_0 ;
 int FUNC_6 (int ,int,int ) ;
 TYPE_5__* FUNC_7 (char*) ;
 int FUNC_8 (int ,int *,int) ;
 TYPE_2__* FUNC_9 (int) ;

void FUNC_10(CLIENT *VAR_1, FOLDER *VAR_2)
{
 char VAR_3[VAR_0];
 UCHAR VAR_4[6];
 BUF *VAR_5;
 UNIX_VLAN *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (FUNC_2(VAR_2, "MacAddress", VAR_3, sizeof(VAR_3)) == 0)
 {
  return;
 }

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5 == ((void*)0))
 {
  return;
 }

 if (VAR_5->Size != 6)
 {
  FUNC_4(VAR_5);
  return;
 }

 FUNC_3(VAR_4, VAR_5->Buf, 6);

 FUNC_4(VAR_5);

 if (FUNC_5(VAR_4, 6))
 {
  return;
 }

 VAR_6 = FUNC_9(sizeof(UNIX_VLAN));
 FUNC_3(VAR_6->MacAddress, VAR_4, 6);
 FUNC_6(VAR_6->Name, sizeof(VAR_6->Name), VAR_2->Name);
 VAR_6->Enabled = FUNC_1(VAR_2, "Enabled");

 FUNC_0(VAR_1->UnixVLanList, VAR_6);




}
