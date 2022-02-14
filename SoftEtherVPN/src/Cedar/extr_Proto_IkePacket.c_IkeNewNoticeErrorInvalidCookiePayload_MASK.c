
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_5__ {int Size; int Buf; } ;
typedef int IKE_PACKET_PAYLOAD ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;

IKE_PACKET_PAYLOAD *FUNC_4(UINT64 VAR_2, UINT64 VAR_3)
{
 IKE_PACKET_PAYLOAD *VAR_4;
 BUF *VAR_5 = FUNC_2();

 FUNC_3(VAR_5, VAR_2);
 FUNC_3(VAR_5, VAR_3);

 VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_5->Buf, VAR_5->Size,
  VAR_5->Buf, VAR_5->Size);

 FUNC_0(VAR_5);

 return VAR_4;
}
