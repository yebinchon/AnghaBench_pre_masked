
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {TYPE_2__* CipherEncrypt; TYPE_1__* MdSend; } ;
struct TYPE_9__ {scalar_t__ Protocol; scalar_t__ Mode; int ClientIp; } ;
struct TYPE_8__ {int IsNullCipher; scalar_t__ BlockSize; scalar_t__ IvSize; } ;
struct TYPE_7__ {scalar_t__ Size; } ;
typedef TYPE_3__ OPENVPN_SESSION ;
typedef int OPENVPN_SERVER ;
typedef TYPE_4__ OPENVPN_CHANNEL ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

UINT FUNC_1(OPENVPN_SERVER *VAR_3, OPENVPN_SESSION *VAR_4, OPENVPN_CHANNEL *VAR_5)
{
 UINT VAR_6 = VAR_0;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 if (VAR_5->MdSend == ((void*)0) || VAR_5->CipherEncrypt == ((void*)0))
 {
  return 0;
 }

 if (VAR_4->Protocol == VAR_2)
 {

  return 0;
 }


 if (FUNC_0(&VAR_4->ClientIp))
 {
  VAR_6 -= 20;
 }
 else
 {
  VAR_6 -= 40;
 }


 VAR_6 -= 8;


 VAR_6 -= 1;


 VAR_6 -= VAR_5->MdSend->Size;


 VAR_6 -= VAR_5->CipherEncrypt->IvSize;


 VAR_6 -= 4;

 if (VAR_5->CipherEncrypt->IsNullCipher == 0)
 {

  VAR_6 -= VAR_5->CipherEncrypt->BlockSize;
 }

 if (VAR_4->Mode == VAR_1)
 {

  VAR_6 -= 14;
 }


 VAR_6 -= 20;


 VAR_6 -= 20;

 return VAR_6;
}
