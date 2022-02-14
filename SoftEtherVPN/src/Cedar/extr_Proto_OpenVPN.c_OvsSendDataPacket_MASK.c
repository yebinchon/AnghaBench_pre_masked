
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tag ;
typedef int op ;
typedef int data_packet_id ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_7__ {int Size; } ;
struct TYPE_6__ {scalar_t__ IvSize; scalar_t__ IsAeadCipher; } ;
struct TYPE_5__ {int* IvSend; int Session; int Server; TYPE_3__* CipherEncrypt; TYPE_4__* MdSend; } ;
typedef TYPE_1__ OPENVPN_CHANNEL ;


 int FUNC_0 (int*,...) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_4__*,int*,int*,int*,int*,scalar_t__,int*,int) ;
 int FUNC_4 (int ,int ,int*,scalar_t__) ;
 int FUNC_5 (int*,scalar_t__) ;
 int* FUNC_6 (scalar_t__) ;

void FUNC_7(OPENVPN_CHANNEL *VAR_1, UCHAR VAR_2, UINT VAR_3, void *VAR_4, UINT VAR_5)
{
 const UCHAR VAR_6 = ((VAR_0 << 3) & 0xF8) | (VAR_2 & 0x07);
 UCHAR *VAR_7;
 UINT VAR_8;

 if (VAR_1 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == 0)
 {
  return;
 }





 if (VAR_1->CipherEncrypt->IsAeadCipher)
 {

  UCHAR VAR_9[16];


  FUNC_5(VAR_1->IvSend, VAR_3);


  VAR_7 = FUNC_2(sizeof(VAR_6) + sizeof(VAR_3) + sizeof(VAR_9) + VAR_5 + 256);


  VAR_8 = sizeof(VAR_6) + sizeof(VAR_3) + sizeof(VAR_9);


  VAR_7[0] = VAR_6;


  FUNC_5(VAR_7 + sizeof(VAR_6), VAR_3);


  VAR_8 += FUNC_3(VAR_1->CipherEncrypt, ((void*)0), VAR_1->IvSend, VAR_9, VAR_7 + VAR_8, VAR_4, VAR_5, VAR_1->IvSend, sizeof(VAR_3));


  FUNC_0(VAR_7 + sizeof(VAR_6) + sizeof(VAR_3), VAR_9, sizeof(VAR_9));
 }
 else
 {

  UINT VAR_10 = sizeof(VAR_3) + VAR_5;
  UCHAR *VAR_11 = FUNC_6(VAR_10);
  FUNC_5(VAR_11, VAR_3);
  FUNC_0(VAR_11 + sizeof(VAR_3), VAR_4, VAR_5);


  VAR_7 = FUNC_2(sizeof(VAR_6) + VAR_1->MdSend->Size + VAR_1->CipherEncrypt->IvSize + VAR_10 + 256);


  VAR_8 = sizeof(VAR_6);


  VAR_7[0] = VAR_6;


  VAR_8 += FUNC_3(VAR_1->CipherEncrypt, VAR_1->MdSend, VAR_1->IvSend, ((void*)0), VAR_7 + sizeof(VAR_6), VAR_11, VAR_10, ((void*)0), 0);

  FUNC_1(VAR_11);


  FUNC_0(VAR_1->IvSend, VAR_7 + VAR_8 - VAR_1->CipherEncrypt->IvSize, VAR_1->CipherEncrypt->IvSize);
 }

 FUNC_4(VAR_1->Server, VAR_1->Session, VAR_7, VAR_8);
}
