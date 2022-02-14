
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pohmelfs_crypto_input_action_data {unsigned int size; int iv; struct pohmelfs_crypto_engine* e; struct page* page; } ;
struct pohmelfs_crypto_engine {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,struct pohmelfs_crypto_input_action_data*) ;

int FUNC_4(struct pohmelfs_crypto_engine *VAR_2,
  struct page *VAR_3, unsigned int VAR_4, u64 VAR_5)
{
 struct inode *VAR_6 = VAR_3->mapping->host;
 struct pohmelfs_crypto_input_action_data VAR_7;
 int VAR_8 = -VAR_0;

 VAR_7.page = VAR_3;
 VAR_7.e = VAR_2;
 VAR_7.size = VAR_4;
 VAR_7.iv = VAR_5;

 VAR_8 = FUNC_3(FUNC_0(VAR_6->i_sb),
   VAR_1, &VAR_7);
 if (VAR_8)
  goto err_out_exit;

 return 0;

err_out_exit:
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);

 return VAR_8;
}
