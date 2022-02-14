
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT ;
struct TYPE_5__ {int Size; int Buf; } ;
typedef int IKE_PACKET_PAYLOAD ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ,int ,int ,int ,int *,int) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ) ;

IKE_PACKET_PAYLOAD *FUNC_5(bool VAR_3, UINT64 VAR_4, UINT64 VAR_5, UINT VAR_6)
{
 IKE_PACKET_PAYLOAD *VAR_7;
 BUF *VAR_8 = FUNC_3();

 VAR_6 = FUNC_0(VAR_6);

 FUNC_4(VAR_8, VAR_4);
 FUNC_4(VAR_8, VAR_5);

 VAR_7 = FUNC_2(VAR_2, (VAR_3 ? VAR_1 : VAR_0),
  VAR_8->Buf, VAR_8->Size,
  &VAR_6, sizeof(UINT));

 FUNC_1(VAR_8);

 return VAR_7;
}
