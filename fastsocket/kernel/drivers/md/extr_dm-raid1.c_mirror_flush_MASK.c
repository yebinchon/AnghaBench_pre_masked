
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mirror_set {int nr_mirrors; struct mirror* mirror; int io_client; } ;
struct mirror {TYPE_3__* dev; } ;
struct dm_target {struct mirror_set* private; } ;
struct TYPE_4__ {int * addr; } ;
struct TYPE_5__ {TYPE_1__ ptr; int type; } ;
struct dm_io_request {int client; TYPE_2__ mem; int bi_rw; } ;
struct dm_io_region {scalar_t__ count; scalar_t__ sector; int bdev; } ;
struct TYPE_6__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dm_io_request*,unsigned int,struct dm_io_region*,unsigned long*) ;
 int FUNC_1 (struct mirror*,int ) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned long*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dm_target *VAR_4)
{
 struct mirror_set *VAR_5 = VAR_4->private;
 unsigned long VAR_6;

 unsigned int VAR_7;
 struct dm_io_region VAR_8[VAR_5->nr_mirrors];
 struct mirror *VAR_9;
 struct dm_io_request VAR_10 = {
  .bi_rw = VAR_3,
  .mem.type = VAR_0,
  .mem.ptr.addr = ((void*)0),
  .client = VAR_5->io_client,
 };

 for (VAR_7 = 0, VAR_9 = VAR_5->mirror; VAR_7 < VAR_5->nr_mirrors; VAR_7++, VAR_9++) {
  VAR_8[VAR_7].bdev = VAR_9->dev->bdev;
  VAR_8[VAR_7].sector = 0;
  VAR_8[VAR_7].count = 0;
 }

 VAR_6 = -1;
 FUNC_0(&VAR_10, VAR_5->nr_mirrors, VAR_8, &VAR_6);
 if (FUNC_3(VAR_6 != 0)) {
  for (VAR_7 = 0; VAR_7 < VAR_5->nr_mirrors; VAR_7++)
   if (FUNC_2(VAR_7, &VAR_6))
    FUNC_1(VAR_5->mirror + VAR_7,
         VAR_1);
  return -VAR_2;
 }

 return 0;
}
