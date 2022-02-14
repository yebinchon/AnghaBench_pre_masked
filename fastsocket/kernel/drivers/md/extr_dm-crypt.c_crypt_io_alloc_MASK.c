
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct crypt_config* private; } ;
struct dm_crypt_io {int pending; int * base_io; scalar_t__ error; int sector; struct bio* base_bio; struct dm_target* target; } ;
struct crypt_config {int io_pool; } ;
struct bio {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct dm_crypt_io* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct dm_crypt_io *FUNC_2(struct dm_target *VAR_1,
       struct bio *VAR_2, sector_t VAR_3)
{
 struct crypt_config *VAR_4 = VAR_1->private;
 struct dm_crypt_io *VAR_5;

 VAR_5 = FUNC_1(VAR_4->io_pool, VAR_0);
 VAR_5->target = VAR_1;
 VAR_5->base_bio = VAR_2;
 VAR_5->sector = VAR_3;
 VAR_5->error = 0;
 VAR_5->base_io = ((void*)0);
 FUNC_0(&VAR_5->pending, 0);

 return VAR_5;
}
