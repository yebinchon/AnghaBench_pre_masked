
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_gcm_setkey_result {int err; int completion; } ;
struct crypto_async_request {struct crypto_gcm_setkey_result* data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct crypto_async_request *VAR_1, int VAR_2)
{
 struct crypto_gcm_setkey_result *VAR_3 = VAR_1->data;

 if (VAR_2 == -VAR_0)
  return;

 VAR_3->err = VAR_2;
 FUNC_0(&VAR_3->completion);
}
