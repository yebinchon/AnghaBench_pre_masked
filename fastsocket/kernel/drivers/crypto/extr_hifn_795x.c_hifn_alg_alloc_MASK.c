
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hifn_device {char* name; int alg_list; } ;
struct TYPE_3__ {int ablkcipher; } ;
struct TYPE_4__ {int cra_priority; int cra_flags; int cra_ctxsize; int cra_init; TYPE_1__ cra_u; int cra_module; int * cra_type; scalar_t__ cra_alignmask; int cra_blocksize; int cra_driver_name; int cra_name; } ;
struct hifn_crypto_alg {int entry; TYPE_2__ alg; struct hifn_device* dev; } ;
struct hifn_context {int dummy; } ;
struct hifn_alg_template {char* name; char* drv_name; int ablkcipher; int bsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_1 (struct hifn_crypto_alg*) ;
 struct hifn_crypto_alg* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,char*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct hifn_device *VAR_8, struct hifn_alg_template *VAR_9)
{
 struct hifn_crypto_alg *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(sizeof(struct hifn_crypto_alg), VAR_4);
 if (!VAR_10)
  return -VAR_3;

 FUNC_5(VAR_10->alg.cra_name, VAR_2, "%s", VAR_9->name);
 FUNC_5(VAR_10->alg.cra_driver_name, VAR_2, "%s-%s",
   VAR_9->drv_name, VAR_8->name);

 VAR_10->alg.cra_priority = 300;
 VAR_10->alg.cra_flags = VAR_1 | VAR_0;
 VAR_10->alg.cra_blocksize = VAR_9->bsize;
 VAR_10->alg.cra_ctxsize = sizeof(struct hifn_context);
 VAR_10->alg.cra_alignmask = 0;
 VAR_10->alg.cra_type = &VAR_6;
 VAR_10->alg.cra_module = VAR_5;
 VAR_10->alg.cra_u.ablkcipher = VAR_9->ablkcipher;
 VAR_10->alg.cra_init = VAR_7;

 VAR_10->dev = VAR_8;

 FUNC_3(&VAR_10->entry, &VAR_8->alg_list);

 VAR_11 = FUNC_0(&VAR_10->alg);
 if (VAR_11) {
  FUNC_4(&VAR_10->entry);
  FUNC_1(VAR_10);
 }

 return VAR_11;
}
