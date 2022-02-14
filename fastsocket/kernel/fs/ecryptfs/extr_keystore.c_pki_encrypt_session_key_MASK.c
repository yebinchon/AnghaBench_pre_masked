
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecryptfs_msg_ctx {int dummy; } ;
typedef char ecryptfs_message ;
struct ecryptfs_key_record {int dummy; } ;
struct ecryptfs_crypt_stat {int key_size; int cipher; } ;
struct TYPE_3__ {int signature; } ;
struct TYPE_4__ {TYPE_1__ private_key; } ;
struct ecryptfs_auth_tok {TYPE_2__ token; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,size_t,struct ecryptfs_msg_ctx**) ;
 int FUNC_3 (struct ecryptfs_msg_ctx*,char**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct ecryptfs_key_record*,char*) ;
 int FUNC_6 (int ,int ,struct ecryptfs_crypt_stat*,char**,size_t*) ;

__attribute__((used)) static int
FUNC_7(struct ecryptfs_auth_tok *VAR_2,
   struct ecryptfs_crypt_stat *VAR_3,
   struct ecryptfs_key_record *VAR_4)
{
 struct ecryptfs_msg_ctx *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 size_t VAR_7;
 struct ecryptfs_message *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_6(VAR_2->token.private_key.signature,
     FUNC_0(
      VAR_3->cipher,
      VAR_3->key_size),
     VAR_3, &VAR_6, &VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_1, "Error generating tag 66 packet\n");
  goto out;
 }
 VAR_9 = FUNC_2(VAR_6, VAR_7, &VAR_5);
 if (VAR_9) {
  FUNC_1(VAR_1, "Error sending message to "
    "ecryptfsd\n");
  goto out;
 }
 VAR_9 = FUNC_3(VAR_5, &VAR_8);
 if (VAR_9) {
  FUNC_1(VAR_1, "Failed to receive tag 67 packet "
    "from the user space daemon\n");
  VAR_9 = -VAR_0;
  goto out;
 }
 VAR_9 = FUNC_5(VAR_4, VAR_8);
 if (VAR_9)
  FUNC_1(VAR_1, "Error parsing tag 67 packet\n");
 FUNC_4(VAR_8);
out:
 FUNC_4(VAR_6);
 return VAR_9;
}
