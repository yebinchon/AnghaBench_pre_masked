
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_crypto_ctl {scalar_t__* cipher_algo; scalar_t__* hash_algo; } ;
struct dst_node {int cipher_key; int hash_key; int max_pages; struct dst_crypto_ctl crypto; } ;
struct dst_crypto_engine {int data; int * hash; int * cipher; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dst_crypto_engine*,int ) ;
 int FUNC_4 (struct dst_crypto_engine*) ;
 int * FUNC_5 (struct dst_crypto_ctl*,int ) ;
 int * FUNC_6 (struct dst_crypto_ctl*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct dst_crypto_engine *VAR_3, struct dst_node *VAR_4)
{
 int VAR_5;
 struct dst_crypto_ctl *VAR_6 = &VAR_4->crypto;

 VAR_5 = FUNC_3(VAR_3, VAR_4->max_pages);
 if (VAR_5)
  goto err_out_exit;

 VAR_3->size = VAR_2;
 VAR_3->data = FUNC_8(VAR_3->size, VAR_1);
 if (!VAR_3->data) {
  VAR_5 = -VAR_0;
  goto err_out_free_pages;
 }

 if (VAR_6->hash_algo[0]) {
  VAR_3->hash = FUNC_6(VAR_6, VAR_4->hash_key);
  if (FUNC_0(VAR_3->hash)) {
   VAR_5 = FUNC_1(VAR_3->hash);
   VAR_3->hash = ((void*)0);
   goto err_out_free;
  }
 }

 if (VAR_6->cipher_algo[0]) {
  VAR_3->cipher = FUNC_5(VAR_6, VAR_4->cipher_key);
  if (FUNC_0(VAR_3->cipher)) {
   VAR_5 = FUNC_1(VAR_3->cipher);
   VAR_3->cipher = ((void*)0);
   goto err_out_free_hash;
  }
 }

 return 0;

err_out_free_hash:
 FUNC_2(VAR_3->hash);
err_out_free:
 FUNC_7(VAR_3->data);
err_out_free_pages:
 FUNC_4(VAR_3);
err_out_exit:
 return VAR_5;
}
