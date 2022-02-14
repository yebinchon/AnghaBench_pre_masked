
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ Size; void* Buf; } ;
struct TYPE_7__ {int RawIp_HasError; int RawIcmp; int RawUdp; int RawTcp; int RawIpSendQueue; } ;
typedef TYPE_1__ ETH ;
typedef TYPE_2__ BUF ;


 scalar_t__ FUNC_0 (TYPE_1__*,void**,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

UINT FUNC_3(ETH *VAR_4, void **VAR_5)
{
 UINT VAR_6;
 BUF *VAR_7;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return VAR_0;
 }
 if (VAR_4->RawIp_HasError)
 {
  return VAR_0;
 }

 VAR_7 = FUNC_2(VAR_4->RawIpSendQueue);
 if (VAR_7 != ((void*)0))
 {
  UINT VAR_8;

  *VAR_5 = VAR_7->Buf;
  VAR_8 = VAR_7->Size;

  FUNC_1(VAR_7);

  return VAR_8;
 }

 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_4->RawTcp, VAR_2);
 if (VAR_6 == 0)
 {
  VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_4->RawUdp, VAR_3);
  if (VAR_6 == 0)
  {
   VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_4->RawIcmp, VAR_1);
  }
 }

 if (VAR_6 == VAR_0)
 {
  VAR_4->RawIp_HasError = 1;
 }

 return VAR_6;
}
