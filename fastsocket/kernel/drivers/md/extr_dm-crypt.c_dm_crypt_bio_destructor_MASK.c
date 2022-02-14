
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_crypt_io {TYPE_1__* target; } ;
struct crypt_config {int bs; } ;
struct bio {struct dm_crypt_io* bi_private; } ;
struct TYPE_2__ {struct crypt_config* private; } ;


 int FUNC_0 (struct bio*,int ) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0)
{
 struct dm_crypt_io *VAR_1 = VAR_0->bi_private;
 struct crypt_config *VAR_2 = VAR_1->target->private;

 FUNC_0(VAR_0, VAR_2->bs);
}
