
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pending; } ;
struct dm_crypt_io {TYPE_2__ ctx; int sector; int base_bio; TYPE_1__* target; } ;
struct crypt_config {int dummy; } ;
struct TYPE_4__ {struct crypt_config* private; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct crypt_config*,TYPE_2__*) ;
 int FUNC_2 (struct crypt_config*,TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (struct dm_crypt_io*) ;
 int FUNC_4 (struct dm_crypt_io*) ;
 int FUNC_5 (struct dm_crypt_io*,int) ;

__attribute__((used)) static void FUNC_6(struct dm_crypt_io *VAR_0)
{
 struct crypt_config *VAR_1 = VAR_0->target->private;
 int VAR_2 = 0;

 FUNC_4(VAR_0);

 FUNC_2(VAR_1, &VAR_0->ctx, VAR_0->base_bio, VAR_0->base_bio,
      VAR_0->sector);

 VAR_2 = FUNC_1(VAR_1, &VAR_0->ctx);

 if (FUNC_0(&VAR_0->ctx.pending))
  FUNC_5(VAR_0, VAR_2);

 FUNC_3(VAR_0);
}
