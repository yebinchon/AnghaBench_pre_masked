
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp1600 ;
typedef int UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_8__ {TYPE_2__* Key; } ;
struct TYPE_7__ {TYPE_1__* Crypto; } ;
struct TYPE_6__ {int BlockSize; } ;
typedef TYPE_3__ IKE_CRYPTO_PARAM ;
typedef int BUF ;


 int FUNC_0 (scalar_t__*,void*,int) ;
 int FUNC_1 (scalar_t__*) ;
 int * FUNC_2 (scalar_t__*,int,TYPE_3__*) ;
 scalar_t__* FUNC_3 (int) ;

BUF *FUNC_4(void *VAR_0, UINT VAR_1, IKE_CRYPTO_PARAM *VAR_2)
{
 UINT VAR_3;
 UINT VAR_4;
 UCHAR VAR_5 = 0;
 UCHAR *VAR_6;
 BUF *VAR_7;
 UCHAR VAR_8[1600];
 bool VAR_9 = 0;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = ((VAR_1 / VAR_2->Key->Crypto->BlockSize) + ((VAR_1 % VAR_2->Key->Crypto->BlockSize) == 0 ? 0 : 1))
  * VAR_2->Key->Crypto->BlockSize;
 if (VAR_3 == 0)
 {
  VAR_3 = VAR_2->Key->Crypto->BlockSize;
 }

 if (VAR_3 > sizeof(VAR_8))
 {
  VAR_6 = FUNC_3(VAR_3);
 }
 else
 {
  VAR_6 = VAR_8;
  VAR_9 = 1;
 }

 FUNC_0(VAR_6, VAR_0, VAR_1);

 for (VAR_4 = VAR_1;VAR_4 < VAR_3;VAR_4++)
 {
  VAR_6[VAR_4] = ++VAR_5;
 }

 VAR_7 = FUNC_2(VAR_6, VAR_3, VAR_2);

 if (VAR_9 == 0)
 {
  FUNC_1(VAR_6);
 }

 return VAR_7;
}
