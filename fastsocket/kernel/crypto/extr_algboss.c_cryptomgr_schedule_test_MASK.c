
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {int dummy; } ;
struct crypto_test_param {int type; int alg; int driver; } ;
struct TYPE_6__ {scalar_t__ ivsize; } ;
struct TYPE_5__ {scalar_t__ ivsize; } ;
struct TYPE_4__ {scalar_t__ ivsize; } ;
struct crypto_alg {int cra_flags; TYPE_3__ cra_aead; int * cra_type; TYPE_2__ cra_ablkcipher; TYPE_1__ cra_blkcipher; int cra_name; int cra_driver_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct crypto_test_param*) ;
 struct task_struct* FUNC_2 (int ,struct crypto_test_param*,char*) ;
 struct crypto_test_param* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct crypto_alg *VAR_12)
{
 struct task_struct *VAR_13;
 struct crypto_test_param *VAR_14;
 u32 VAR_15;

 if (!FUNC_6(VAR_9))
  goto err;

 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_6);
 if (!VAR_14)
  goto err_put_module;

 FUNC_4(VAR_14->driver, VAR_12->cra_driver_name, sizeof(VAR_14->driver));
 FUNC_4(VAR_14->alg, VAR_12->cra_name, sizeof(VAR_14->alg));
 VAR_15 = VAR_12->cra_flags;


 if ((!((VAR_15 ^ VAR_3) &
        VAR_4) && !(VAR_15 & VAR_0) &&
      ((VAR_12->cra_flags & VAR_5) ==
       VAR_3 ? VAR_12->cra_blkcipher.ivsize :
       VAR_12->cra_ablkcipher.ivsize)) ||
     (!((VAR_15 ^ VAR_2) & VAR_5) &&
      VAR_12->cra_type == &VAR_10 && VAR_12->cra_aead.ivsize))
  VAR_15 |= VAR_1;

 VAR_14->type = VAR_15;

 VAR_13 = FUNC_2(VAR_11, VAR_14, "cryptomgr_test");
 if (FUNC_0(VAR_13))
  goto err_free_param;

 return VAR_8;

err_free_param:
 FUNC_1(VAR_14);
err_put_module:
 FUNC_5(VAR_9);
err:
 return VAR_7;
}
