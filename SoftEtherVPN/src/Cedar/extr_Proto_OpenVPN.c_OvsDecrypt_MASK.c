
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_9__ {int BlockSize; int IvSize; scalar_t__ IsAeadCipher; } ;
struct TYPE_8__ {int Size; } ;
typedef TYPE_1__ MD ;
typedef TYPE_2__ CIPHER ;


 int FUNC_0 (TYPE_2__*,int *,int *,int *,int) ;
 int FUNC_1 (TYPE_2__*,int *,int *,int,int *,int *,int,int *,int) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,int *,int) ;
 int VAR_0 ;

UINT FUNC_6(CIPHER *VAR_1, MD *VAR_2, UCHAR *VAR_3, UCHAR *VAR_4, UCHAR *VAR_5, UINT VAR_6)
{

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1->IsAeadCipher)
 {
  UCHAR *VAR_7 = VAR_5;

  if (VAR_3 == ((void*)0) || VAR_6 <= VAR_0)
  {
   return 0;
  }

  VAR_5 += VAR_0;
  VAR_6 -= VAR_0;


  if (VAR_6 >= 1 && (VAR_1->BlockSize == 0 || (VAR_6 % VAR_1->BlockSize) == 0))
  {

   UINT VAR_8 = FUNC_1(VAR_1, VAR_3, VAR_7, VAR_0, VAR_4, VAR_5, VAR_6, VAR_3, sizeof(UINT));
   if (VAR_8 == 0)
   {
    FUNC_4("OvsDecrypt(): CipherProcessAead() failed!\n");
   }

   return VAR_8;
  }
 }
 else
 {
  UCHAR *VAR_9;
  UCHAR VAR_10[128];

  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_6 < (VAR_2->Size + VAR_1->IvSize + sizeof(UINT)))
  {
   return 0;
  }


  VAR_9 = VAR_5;
  VAR_5 += VAR_2->Size;
  VAR_6 -= VAR_2->Size;

  if (FUNC_5(VAR_2, VAR_10, VAR_5, VAR_6) == 0)
  {
   FUNC_4("OvsDecrypt(): MdProcess() failed!\n");
   return 0;
  }

  if (FUNC_2(VAR_10, VAR_9, VAR_2->Size) != 0)
  {
   FUNC_4("OvsDecrypt(): HMAC verification failed!\n");
   return 0;
  }


  FUNC_3(VAR_3, VAR_5, VAR_1->IvSize);
  VAR_5 += VAR_1->IvSize;
  VAR_6 -= VAR_1->IvSize;


  if (VAR_6 >= 1 && (VAR_1->BlockSize == 0 || (VAR_6 % VAR_1->BlockSize) == 0))
  {

   UINT VAR_11 = FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6);
   if (VAR_11 == 0)
   {
    FUNC_4("OvsDecrypt(): CipherProcess() failed!\n");
   }

   return VAR_11;
  }
 }

 return 0;
}
