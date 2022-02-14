
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
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int ,int ,int *,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;

IKE_PACKET_PAYLOAD *FUNC_4(bool VAR_3, UINT64 VAR_4, UINT64 VAR_5)
{
 BUF *VAR_6 = FUNC_2();
 IKE_PACKET_PAYLOAD *VAR_7;

 FUNC_3(VAR_6, VAR_4);
 FUNC_3(VAR_6, VAR_5);

 VAR_7 = FUNC_1((VAR_3 ? VAR_2 : VAR_1),
  VAR_0, VAR_6->Buf, VAR_6->Size,
  ((void*)0), 0);

 FUNC_0(VAR_6);

 return VAR_7;
}
