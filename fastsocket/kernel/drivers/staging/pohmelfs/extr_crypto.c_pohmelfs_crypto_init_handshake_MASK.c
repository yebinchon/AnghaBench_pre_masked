
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_sb {int cipher_strlen; int hash_strlen; char* hash_string; char* cipher_string; int flags; int perform_crypto; int wait_on_page_timeout; int wait; int cipher_keysize; } ;
struct netfs_trans {struct pohmelfs_sb* private; int complete; } ;
struct netfs_crypto_capabilities {int hash_strlen; int cipher_strlen; int cipher_keysize; } ;
struct netfs_cmd {int size; scalar_t__ csize; scalar_t__ ext; scalar_t__ start; int id; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netfs_cmd*) ;
 int FUNC_1 (struct netfs_crypto_capabilities*) ;
 struct netfs_trans* FUNC_2 (struct pohmelfs_sb*,int,int ,int ) ;
 struct netfs_cmd* FUNC_3 (struct netfs_trans*) ;
 int FUNC_4 (struct netfs_trans*,struct pohmelfs_sb*) ;
 int FUNC_5 (struct netfs_cmd*,struct netfs_trans*,int) ;
 int VAR_4 ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct pohmelfs_sb *VAR_5)
{
 struct netfs_trans *VAR_6;
 struct netfs_crypto_capabilities *VAR_7;
 struct netfs_cmd *VAR_8;
 char *VAR_9;
 int VAR_10 = -VAR_0, VAR_11;

 VAR_11 = sizeof(struct netfs_crypto_capabilities) +
  VAR_5->cipher_strlen + VAR_5->hash_strlen + 2;

 VAR_6 = FUNC_2(VAR_5, VAR_11, 0, 0);
 if (!VAR_6)
  goto err_out_exit;

 VAR_6->complete = VAR_4;
 VAR_6->private = VAR_5;

 VAR_8 = FUNC_3(VAR_6);
 VAR_7 = (struct netfs_crypto_capabilities *)(VAR_8 + 1);
 VAR_9 = (char *)(VAR_7 + 1);

 VAR_8->cmd = VAR_2;
 VAR_8->id = VAR_3;
 VAR_8->size = VAR_11;
 VAR_8->start = 0;
 VAR_8->ext = 0;
 VAR_8->csize = 0;

 FUNC_0(VAR_8);
 FUNC_5(VAR_8, VAR_6, VAR_11);

 VAR_7->hash_strlen = VAR_5->hash_strlen;
 if (VAR_7->hash_strlen) {
  FUNC_6(VAR_9, "%s", VAR_5->hash_string);
  VAR_9 += VAR_7->hash_strlen;
 }

 VAR_7->cipher_strlen = VAR_5->cipher_strlen;
 VAR_7->cipher_keysize = VAR_5->cipher_keysize;
 if (VAR_7->cipher_strlen)
  FUNC_6(VAR_9, "%s", VAR_5->cipher_string);

 FUNC_1(VAR_7);

 VAR_5->flags = ~0;
 VAR_10 = FUNC_4(VAR_6, VAR_5);
 if (VAR_10)
  goto err_out_exit;

 VAR_10 = FUNC_7(VAR_5->wait, (VAR_5->flags != ~0),
   VAR_5->wait_on_page_timeout);
 if (!VAR_10)
  VAR_10 = -VAR_1;
 else if (VAR_10 > 0)
  VAR_10 = -VAR_5->flags;

 if (!VAR_10)
  VAR_5->perform_crypto = 1;
 VAR_5->flags = 0;
 if (VAR_10)
  goto err_out_exit;

 return 0;

err_out_exit:
 return VAR_10;
}
