
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {struct crypt_config* private; } ;
struct crypt_config {struct crypt_config* cipher_mode; struct crypt_config* cipher; scalar_t__ dev; scalar_t__ tfm; TYPE_1__* iv_gen_ops; scalar_t__ io_pool; scalar_t__ req_pool; scalar_t__ page_pool; scalar_t__ bs; scalar_t__ crypt_queue; scalar_t__ io_queue; } ;
struct TYPE_2__ {int (* dtr ) (struct crypt_config*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct dm_target*,scalar_t__) ;
 int FUNC_5 (struct crypt_config*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct crypt_config*) ;

__attribute__((used)) static void FUNC_8(struct dm_target *VAR_0)
{
 struct crypt_config *VAR_1 = VAR_0->private;

 VAR_0->private = ((void*)0);

 if (!VAR_1)
  return;

 if (VAR_1->io_queue)
  FUNC_3(VAR_1->io_queue);
 if (VAR_1->crypt_queue)
  FUNC_3(VAR_1->crypt_queue);

 if (VAR_1->bs)
  FUNC_1(VAR_1->bs);

 if (VAR_1->page_pool)
  FUNC_6(VAR_1->page_pool);
 if (VAR_1->req_pool)
  FUNC_6(VAR_1->req_pool);
 if (VAR_1->io_pool)
  FUNC_6(VAR_1->io_pool);

 if (VAR_1->iv_gen_ops && VAR_1->iv_gen_ops->dtr)
  VAR_1->iv_gen_ops->dtr(VAR_1);

 if (VAR_1->tfm && !FUNC_0(VAR_1->tfm))
  FUNC_2(VAR_1->tfm);

 if (VAR_1->dev)
  FUNC_4(VAR_0, VAR_1->dev);

 FUNC_5(VAR_1->cipher);
 FUNC_5(VAR_1->cipher_mode);


 FUNC_5(VAR_1);
}
