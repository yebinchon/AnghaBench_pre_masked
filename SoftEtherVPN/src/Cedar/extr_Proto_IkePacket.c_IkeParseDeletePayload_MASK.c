
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int h ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ SpiSize; int NumSpis; int ProtocolId; int DoI; } ;
struct TYPE_6__ {int SpiList; int ProtocolId; } ;
typedef TYPE_1__ IKE_PACKET_DELETE_PAYLOAD ;
typedef TYPE_2__ IKE_DELETE_HEADER ;
typedef int BUF ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_2__*,int) ;
 int * FUNC_7 (int *,scalar_t__) ;

bool FUNC_8(IKE_PACKET_DELETE_PAYLOAD *VAR_1, BUF *VAR_2)
{
 IKE_DELETE_HEADER VAR_3;
 UINT VAR_4;
 UINT VAR_5;
 UINT VAR_6;
 bool VAR_7 = 1;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_6(VAR_2, &VAR_3, sizeof(VAR_3)) != sizeof(VAR_3))
 {
  return 0;
 }

 if (FUNC_3(VAR_3.DoI) != VAR_0)
 {
  FUNC_1("ISAKMP: Invalid DoI Value: 0x%x\n", FUNC_3(VAR_3.DoI));
  return 0;
 }

 VAR_1->ProtocolId = VAR_3.ProtocolId;
 VAR_1->SpiList = FUNC_5(((void*)0));
 VAR_4 = FUNC_2(VAR_3.NumSpis);
 VAR_5 = VAR_3.SpiSize;

 for (VAR_6 = 0;VAR_6 < VAR_4;VAR_6++)
 {
  BUF *VAR_8 = FUNC_7(VAR_2, VAR_5);

  if (VAR_8 == ((void*)0))
  {
   VAR_7 = 0;
   break;
  }

  FUNC_0(VAR_1->SpiList, VAR_8);
 }

 if (VAR_7 == 0)
 {
  FUNC_4(VAR_1);
  return 0;
 }

 return 1;
}
