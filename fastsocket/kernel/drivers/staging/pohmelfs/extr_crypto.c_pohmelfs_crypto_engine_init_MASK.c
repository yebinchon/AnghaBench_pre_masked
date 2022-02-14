
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_sb {scalar_t__ cipher_string; scalar_t__ hash_string; } ;
struct pohmelfs_crypto_engine {int data; int * hash; int * cipher; int size; scalar_t__ page_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (struct pohmelfs_sb*) ;
 int * FUNC_6 (struct pohmelfs_sb*) ;

int FUNC_7(struct pohmelfs_crypto_engine *VAR_3, struct pohmelfs_sb *VAR_4)
{
 int VAR_5;

 VAR_3->page_num = 0;

 VAR_3->size = VAR_2;
 VAR_3->data = FUNC_4(VAR_3->size, VAR_1);
 if (!VAR_3->data) {
  VAR_5 = -VAR_0;
  goto err_out_exit;
 }

 if (VAR_4->hash_string) {
  VAR_3->hash = FUNC_6(VAR_4);
  if (FUNC_0(VAR_3->hash)) {
   VAR_5 = FUNC_1(VAR_3->hash);
   VAR_3->hash = ((void*)0);
   goto err_out_free;
  }
 }

 if (VAR_4->cipher_string) {
  VAR_3->cipher = FUNC_5(VAR_4);
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
 FUNC_3(VAR_3->data);
err_out_exit:
 return VAR_5;
}
