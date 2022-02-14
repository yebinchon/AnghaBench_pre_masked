
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpages {int dummy; } ;
struct TYPE_2__ {int context; int fn; } ;
struct dm_io_request {TYPE_1__ notify; int bi_rw; int client; } ;
struct dm_io_region {int dummy; } ;


 int FUNC_0 (int ,unsigned int,struct dm_io_region*,int ,struct dpages*,int ,int ) ;
 int FUNC_1 (struct dm_io_request*,struct dpages*) ;
 int FUNC_2 (int ,unsigned int,struct dm_io_region*,int ,struct dpages*,unsigned long*) ;

int FUNC_3(struct dm_io_request *VAR_0, unsigned VAR_1,
   struct dm_io_region *VAR_2, unsigned long *VAR_3)
{
 int VAR_4;
 struct dpages VAR_5;

 VAR_4 = FUNC_1(VAR_0, &VAR_5);
 if (VAR_4)
  return VAR_4;

 if (!VAR_0->notify.fn)
  return FUNC_2(VAR_0->client, VAR_1, VAR_2,
          VAR_0->bi_rw, &VAR_5, VAR_3);

 return FUNC_0(VAR_0->client, VAR_1, VAR_2, VAR_0->bi_rw,
   &VAR_5, VAR_0->notify.fn, VAR_0->notify.context);
}
