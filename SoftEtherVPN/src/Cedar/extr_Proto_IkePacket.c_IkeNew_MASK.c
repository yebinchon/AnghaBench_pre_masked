
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int FlagEncrypted; int FlagCommit; int FlagAuthOnly; int * PayloadList; int MessageId; int ExchangeType; void* ResponderCookie; void* InitiatorCookie; } ;
typedef int LIST ;
typedef TYPE_1__ IKE_PACKET ;


 TYPE_1__* FUNC_0 (int) ;

IKE_PACKET *FUNC_1(UINT64 VAR_0, UINT64 VAR_1, UCHAR VAR_2,
       bool VAR_3, bool VAR_4, bool VAR_5, UINT VAR_6,
       LIST *VAR_7)
{
 IKE_PACKET *VAR_8 = FUNC_0(sizeof(IKE_PACKET));

 VAR_8->InitiatorCookie = VAR_0;
 VAR_8->ResponderCookie = VAR_1;
 VAR_8->ExchangeType = VAR_2;
 VAR_8->FlagEncrypted = VAR_3;
 VAR_8->FlagCommit = VAR_4;
 VAR_8->FlagAuthOnly = VAR_5;
 VAR_8->MessageId = VAR_6;
 VAR_8->PayloadList = VAR_7;

 return VAR_8;
}
