
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp1600 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_7__ {TYPE_1__* Crypto; } ;
struct TYPE_6__ {TYPE_4__* Key; int NextIv; int Iv; } ;
struct TYPE_5__ {int BlockSize; } ;
typedef TYPE_2__ IKE_CRYPTO_PARAM ;
typedef int BUF ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_4__*,void*,void*,int,int ) ;
 void* FUNC_3 (int) ;
 int * FUNC_4 (void*,int) ;
 int FUNC_5 (int ,int) ;

BUF *FUNC_6(void *VAR_0, UINT VAR_1, IKE_CRYPTO_PARAM *VAR_2)
{
 void *VAR_3;
 BUF *VAR_4;
 UCHAR VAR_5[1600];
 bool VAR_6 = 0;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 if ((VAR_1 % VAR_2->Key->Crypto->BlockSize) != 0)
 {

  return ((void*)0);
 }

 if (VAR_1 > sizeof(VAR_5))
 {
  VAR_3 = FUNC_3(VAR_1);
 }
 else
 {
  VAR_3 = VAR_5;
  VAR_6 = 1;
 }

 FUNC_2(VAR_2->Key, VAR_3, VAR_0, VAR_1, VAR_2->Iv);

 if (VAR_1 >= VAR_2->Key->Crypto->BlockSize)
 {
  FUNC_0(VAR_2->NextIv, ((UCHAR *)VAR_3) + (VAR_1 - VAR_2->Key->Crypto->BlockSize), VAR_2->Key->Crypto->BlockSize);
 }
 else
 {
  FUNC_5(VAR_2->NextIv, VAR_2->Key->Crypto->BlockSize);
 }

 VAR_4 = FUNC_4(VAR_3, VAR_1);

 if (VAR_6 == 0)
 {
  FUNC_1(VAR_3);
 }

 return VAR_4;
}
