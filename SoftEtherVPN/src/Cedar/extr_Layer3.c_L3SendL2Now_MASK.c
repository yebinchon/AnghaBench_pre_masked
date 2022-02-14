
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
typedef void UCHAR ;
struct TYPE_9__ {int SendQueue; } ;
struct TYPE_8__ {void* DestAddress; void* SrcAddress; int Protocol; } ;
struct TYPE_7__ {int PacketSize; void* PacketData; } ;
typedef TYPE_1__ PKT ;
typedef TYPE_2__ MAC_HEADER ;
typedef TYPE_3__ L3IF ;


 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (int) ;

void FUNC_5(L3IF *VAR_1, UCHAR *VAR_2, UCHAR *VAR_3, USHORT VAR_4, void *VAR_5, UINT VAR_6)
{
 UCHAR *VAR_7;
 MAC_HEADER *VAR_8;
 PKT *VAR_9;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }


 VAR_7 = FUNC_3(VAR_0 + VAR_6);


 VAR_8 = (MAC_HEADER *)&VAR_7[0];
 FUNC_0(VAR_8->DestAddress, VAR_2, 6);
 FUNC_0(VAR_8->SrcAddress, VAR_3, 6);
 VAR_8->Protocol = FUNC_1(VAR_4);


 FUNC_0(&VAR_7[sizeof(MAC_HEADER)], VAR_5, VAR_6);


 VAR_6 += sizeof(MAC_HEADER);


 VAR_9 = FUNC_4(sizeof(PKT));
 VAR_9->PacketData = VAR_7;
 VAR_9->PacketSize = VAR_6;


 FUNC_2(VAR_1->SendQueue, VAR_9);
}
