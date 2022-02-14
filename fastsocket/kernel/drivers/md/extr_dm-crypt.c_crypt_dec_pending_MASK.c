
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_crypt_io {int error; int pending; struct dm_crypt_io* base_io; struct bio* base_bio; TYPE_1__* target; } ;
struct crypt_config {int io_pool; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct crypt_config* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct dm_crypt_io*,int ) ;

__attribute__((used)) static void FUNC_4(struct dm_crypt_io *VAR_0)
{
 struct crypt_config *VAR_1 = VAR_0->target->private;
 struct bio *VAR_2 = VAR_0->base_bio;
 struct dm_crypt_io *VAR_3 = VAR_0->base_io;
 int VAR_4 = VAR_0->error;

 if (!FUNC_0(&VAR_0->pending))
  return;

 FUNC_3(VAR_0, VAR_1->io_pool);

 if (FUNC_2(!VAR_3))
  FUNC_1(VAR_2, VAR_4);
 else {
  if (VAR_4 && !VAR_3->error)
   VAR_3->error = VAR_4;
  FUNC_4(VAR_3);
 }
}
