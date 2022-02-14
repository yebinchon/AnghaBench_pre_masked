
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct iv_essiv_private {int hash_tfm; int salt; int tfm; } ;
struct hash_desc {int flags; int tfm; } ;
struct TYPE_2__ {struct iv_essiv_private essiv; } ;
struct crypt_config {int key_size; int key; TYPE_1__ iv_gen_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct hash_desc*,struct scatterlist*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scatterlist*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct crypt_config *VAR_1)
{
 struct iv_essiv_private *VAR_2 = &VAR_1->iv_gen_private.essiv;
 struct hash_desc VAR_3;
 struct scatterlist VAR_4;
 int VAR_5;

 FUNC_3(&VAR_4, VAR_1->key, VAR_1->key_size);
 VAR_3.tfm = VAR_2->hash_tfm;
 VAR_3.flags = VAR_0;

 VAR_5 = FUNC_1(&VAR_3, &VAR_4, VAR_1->key_size, VAR_2->salt);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_2->tfm, VAR_2->salt,
        FUNC_2(VAR_2->hash_tfm));
}
