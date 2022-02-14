
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_9__ {int IsAeadCipher; int IvSize; } ;
struct TYPE_8__ {int Size; } ;
typedef TYPE_1__ MD ;
typedef TYPE_2__ CIPHER ;


 scalar_t__ FUNC_0 (TYPE_2__*,int *,int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int *,int,int *,int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int *,scalar_t__) ;

UINT FUNC_5(CIPHER *VAR_0, MD *VAR_1, UCHAR *VAR_2, UCHAR *VAR_3, UCHAR *VAR_4, UCHAR *VAR_5, UINT VAR_6, UCHAR *VAR_7, UINT VAR_8)
{

 if (VAR_0 == ((void*)0) || (VAR_0->IsAeadCipher == 0 && VAR_1 == ((void*)0)))
 {
  return 0;
 }

 if (VAR_0->IsAeadCipher)
 {

  UINT VAR_9 = FUNC_1(VAR_0, VAR_2, VAR_3, 16, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_9 == 0)
  {
   FUNC_3("OvsEncrypt(): CipherProcessAead() failed!\n");
   return 0;
  }

  return VAR_9;
 }
 else
 {

  UINT VAR_10;
  UINT VAR_11 = FUNC_0(VAR_0, VAR_2, VAR_4 + VAR_1->Size + VAR_0->IvSize, VAR_5, VAR_6);
  if (VAR_11 == 0)
  {
   FUNC_3("OvsEncrypt(): CipherProcess() failed!\n");
   return 0;
  }


  FUNC_2(VAR_4 + VAR_1->Size, VAR_2, VAR_0->IvSize);
  VAR_11 += VAR_0->IvSize;


  VAR_10 = FUNC_4(VAR_1, VAR_4, VAR_4 + VAR_1->Size, VAR_11);
  if (VAR_10 == 0)
  {
   FUNC_3("OvsEncrypt(): MdProcess() failed!\n");
   return 0;
  }

  return VAR_11 + VAR_10;
 }
}
