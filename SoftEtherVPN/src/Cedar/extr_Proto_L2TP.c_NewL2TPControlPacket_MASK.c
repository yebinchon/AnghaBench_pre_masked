
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int Mandatory; int DataSize; int Data; int Type; } ;
struct TYPE_5__ {int IsControl; int HasLength; int HasSequence; int Ver; int AvpList; scalar_t__ MessageType; } ;
typedef TYPE_1__ L2TP_PACKET ;
typedef TYPE_2__ L2TP_AVP ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;

L2TP_PACKET *FUNC_5(UINT VAR_1, bool VAR_2)
{
 L2TP_PACKET *VAR_3 = FUNC_4(sizeof(L2TP_PACKET));

 VAR_3->IsControl = 1;
 VAR_3->HasLength = 1;
 VAR_3->HasSequence = 1;
 VAR_3->Ver = (VAR_2 ? 3 : 2);
 VAR_3->MessageType = VAR_1;

 VAR_3->AvpList = FUNC_3(((void*)0));

 if (VAR_1 != 0)
 {
  L2TP_AVP *VAR_4;
  USHORT VAR_5;

  VAR_4 = FUNC_4(sizeof(L2TP_AVP));

  VAR_4->Type = VAR_0;
  VAR_4->Mandatory = 1;

  VAR_5 = FUNC_2(VAR_1);
  VAR_4->Data = FUNC_1(&VAR_5, sizeof(USHORT));
  VAR_4->DataSize = sizeof(USHORT);

  FUNC_0(VAR_3->AvpList, VAR_4);
 }

 return VAR_3;
}
