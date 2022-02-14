
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mirror_set {int nr_mirrors; struct mirror* mirror; int io_client; } ;
struct mirror {int dummy; } ;
struct TYPE_5__ {int * addr; scalar_t__ bvec; } ;
struct TYPE_6__ {TYPE_2__ ptr; int type; } ;
struct TYPE_4__ {struct bio* context; int fn; } ;
struct dm_io_request {int bi_rw; TYPE_3__ mem; int client; TYPE_1__ notify; } ;
struct dm_io_region {int dummy; } ;
struct bio {int bi_rw; scalar_t__ bi_idx; scalar_t__ bi_io_vec; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct dm_io_request*,unsigned int,struct dm_io_region*,int *) ;
 int FUNC_3 (struct mirror_set*) ;
 int FUNC_4 (int ,struct mirror*,struct bio*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct mirror_set *VAR_6, struct bio *VAR_7)
{
 unsigned int VAR_8;
 struct dm_io_region VAR_9[VAR_6->nr_mirrors], *VAR_10 = VAR_9;
 struct mirror *VAR_11;
 struct dm_io_request VAR_12 = {
  .bi_rw = VAR_3 | (VAR_7->bi_rw & VAR_4),
  .mem.type = VAR_1,
  .mem.ptr.bvec = VAR_7->bi_io_vec + VAR_7->bi_idx,
  .notify.fn = VAR_5,
  .notify.context = VAR_7,
  .client = VAR_6->io_client,
 };

 if (VAR_7->bi_rw & VAR_0) {
  VAR_12.bi_rw |= VAR_0;
  VAR_12.mem.type = VAR_2;
  VAR_12.mem.ptr.addr = ((void*)0);
 }

 for (VAR_8 = 0, VAR_11 = VAR_6->mirror; VAR_8 < VAR_6->nr_mirrors; VAR_8++, VAR_11++)
  FUNC_4(VAR_10++, VAR_11, VAR_7);





 FUNC_1(VAR_7, FUNC_3(VAR_6));

 FUNC_0(FUNC_2(&VAR_12, VAR_6->nr_mirrors, VAR_9, ((void*)0)));
}
