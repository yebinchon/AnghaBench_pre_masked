
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int KeySize; int KeyValue; } ;
typedef int EVP_CIPHER_CTX ;
typedef TYPE_1__ AES_KEY_VALUE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,unsigned char*,int*) ;
 int FUNC_5 (int *,int ,int *,int ,void*) ;
 int FUNC_6 (int *,void*,int*,void*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_0 ;

void FUNC_10(void *VAR_1, void *VAR_2, UINT VAR_3, AES_KEY_VALUE *VAR_4, void *VAR_5)
{
 EVP_CIPHER_CTX *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;


 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0 || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }


 VAR_6 = FUNC_2();

 if (!VAR_6)
 {
  FUNC_0(VAR_0);
  return;
 }


 FUNC_3(VAR_6, 0);


 switch (VAR_4->KeySize)
 {
 case 16:
  VAR_9 = FUNC_5(VAR_6, FUNC_7(), ((void*)0), VAR_4->KeyValue, VAR_5);
  break;

 case 24:
  VAR_9 = FUNC_5(VAR_6, FUNC_8(), ((void*)0), VAR_4->KeyValue, VAR_5);
  break;

 case 32:
  VAR_9 = FUNC_5(VAR_6, FUNC_9(), ((void*)0), VAR_4->KeyValue, VAR_5);
  break;
 }

 if (VAR_9 != 1)
 {
  FUNC_0(VAR_0);
  FUNC_1(VAR_6);
  return;
 }


 VAR_9 = FUNC_6(VAR_6, VAR_1, &VAR_7, VAR_2, VAR_3);

 if (VAR_9 != 1)
 {
  FUNC_0(VAR_0);
  FUNC_1(VAR_6);
  return;
 }


 VAR_9 = FUNC_4(VAR_6, (unsigned char *) VAR_1 + VAR_7, &VAR_8);

 if (VAR_9 != 1)
 {
  FUNC_0(VAR_0);
  FUNC_1(VAR_6);
  return;
 }

 VAR_7 += VAR_8;


 FUNC_1(VAR_6);
}
