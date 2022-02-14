
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int h ;
struct TYPE_7__ {int ProtocolId; int Port; int IdType; } ;
struct TYPE_6__ {int IdData; int ProtocolId; int Port; int Type; } ;
typedef TYPE_1__ IKE_PACKET_ID_PAYLOAD ;
typedef TYPE_2__ IKE_ID_HEADER ;
typedef int BUF ;


 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;

BUF *FUNC_5(IKE_PACKET_ID_PAYLOAD *VAR_0)
{
 IKE_ID_HEADER VAR_1;
 BUF *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_4(&VAR_1, sizeof(VAR_1));
 VAR_1.IdType = VAR_0->Type;
 VAR_1.Port = FUNC_0(VAR_0->Port);
 VAR_1.ProtocolId = VAR_0->ProtocolId;

 VAR_2 = FUNC_1();
 FUNC_2(VAR_2, &VAR_1, sizeof(VAR_1));

 FUNC_3(VAR_2, VAR_0->IdData);

 return VAR_2;
}
