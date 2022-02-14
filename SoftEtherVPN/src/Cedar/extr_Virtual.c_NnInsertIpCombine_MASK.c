
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ UINT64 ;
typedef void* UINT ;
typedef void* UCHAR ;
struct TYPE_10__ {int SrcIsLocalMacAddr; int MacBroadcast; scalar_t__ DataReserved; int Data; void* Ttl; void* Protocol; int IpParts; scalar_t__ Size; scalar_t__ Expire; int Id; void* SrcIP; void* DestIP; } ;
struct TYPE_9__ {scalar_t__ CurrentIpQuota; int IpCombine; TYPE_1__* v; } ;
struct TYPE_8__ {scalar_t__ Now; } ;
typedef TYPE_2__ NATIVE_NAT ;
typedef TYPE_3__ IP_COMBINE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int) ;

IP_COMBINE *FUNC_4(NATIVE_NAT *VAR_3, UINT VAR_4, UINT VAR_5, USHORT VAR_6, UCHAR VAR_7, bool VAR_8, UCHAR VAR_9, bool VAR_10)
{
 IP_COMBINE *VAR_11;

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }


 if ((VAR_3->CurrentIpQuota + VAR_0) > VAR_2)
 {

  return ((void*)0);
 }

 VAR_11 = FUNC_3(sizeof(IP_COMBINE));
 VAR_11->SrcIsLocalMacAddr = VAR_10;
 VAR_11->DestIP = VAR_5;
 VAR_11->SrcIP = VAR_4;
 VAR_11->Id = VAR_6;
 VAR_11->Expire = VAR_3->v->Now + (UINT64)VAR_1;
 VAR_11->Size = 0;
 VAR_11->IpParts = FUNC_2(((void*)0));
 VAR_11->Protocol = VAR_7;
 VAR_11->MacBroadcast = VAR_8;
 VAR_11->Ttl = VAR_9;


 VAR_11->DataReserved = VAR_0;
 VAR_11->Data = FUNC_1(VAR_11->DataReserved);
 VAR_3->CurrentIpQuota += VAR_11->DataReserved;

 FUNC_0(VAR_3->IpCombine, VAR_11);

 return VAR_11;
}
