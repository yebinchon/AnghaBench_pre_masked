
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_8__ {int Size; scalar_t__ Buf; } ;
struct TYPE_7__ {int PayloadList; } ;
struct TYPE_6__ {int Situation; int DoI; } ;
typedef TYPE_1__ IKE_SA_HEADER ;
typedef TYPE_2__ IKE_PACKET_SA_PAYLOAD ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int,int ) ;

bool FUNC_3(IKE_PACKET_SA_PAYLOAD *VAR_3, BUF *VAR_4)
{
 IKE_SA_HEADER *VAR_5;
 UCHAR *VAR_6;
 UINT VAR_7;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 if (VAR_4->Size < sizeof(IKE_SA_HEADER))
 {
  return 0;
 }

 VAR_5 = (IKE_SA_HEADER *)VAR_4->Buf;
 VAR_6 = (UCHAR *)VAR_4->Buf;
 VAR_6 += sizeof(IKE_SA_HEADER);
 VAR_7 = VAR_4->Size - sizeof(IKE_SA_HEADER);

 if (FUNC_1(VAR_5->DoI) != VAR_1)
 {
  FUNC_0("ISAKMP: Invalid DoI Value: 0x%x\n", FUNC_1(VAR_5->DoI));
  return 0;
 }

 if (FUNC_1(VAR_5->Situation) != VAR_2)
 {
  FUNC_0("ISAKMP: Invalid Situation Value: 0x%x\n", FUNC_1(VAR_5->Situation));
  return 0;
 }

 VAR_3->PayloadList = FUNC_2(VAR_6, VAR_7, VAR_0);

 return 1;
}
