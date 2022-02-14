
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct aes_key_st {int dummy; } ;
typedef int UINT ;
struct TYPE_3__ {int KeySize; void* DecryptKey; void* EncryptKey; int KeyValue; } ;
typedef TYPE_1__ AES_KEY_VALUE ;


 int FUNC_0 (void*,int,void*) ;
 int FUNC_1 (void*,int,void*) ;
 int FUNC_2 (int ,void*,int) ;
 void* FUNC_3 (int) ;

AES_KEY_VALUE *FUNC_4(void *VAR_0, UINT VAR_1)
{
 AES_KEY_VALUE *VAR_2;

 if (VAR_0 == ((void*)0) || (!(VAR_1 == 16 || VAR_1 == 24 || VAR_1 == 32)))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_3(sizeof(AES_KEY_VALUE));

 VAR_2->EncryptKey = FUNC_3(sizeof(struct aes_key_st));
 VAR_2->DecryptKey = FUNC_3(sizeof(struct aes_key_st));

 VAR_2->KeySize = VAR_1;
 FUNC_2(VAR_2->KeyValue, VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_1 * 8, VAR_2->EncryptKey);
 FUNC_0(VAR_0, VAR_1 * 8, VAR_2->DecryptKey);

 return VAR_2;
}
