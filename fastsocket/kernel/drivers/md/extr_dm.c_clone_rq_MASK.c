
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mapped_device {int dummy; } ;
struct dm_rq_target_io {struct request clone; int info; scalar_t__ error; struct request* orig; int * ti; struct mapped_device* md; } ;
typedef int gfp_t ;


 struct dm_rq_target_io* FUNC_0 (struct mapped_device*,int ) ;
 int FUNC_1 (struct dm_rq_target_io*) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (struct request*,struct request*,struct dm_rq_target_io*) ;

__attribute__((used)) static struct request *FUNC_4(struct request *VAR_0, struct mapped_device *VAR_1,
    gfp_t VAR_2)
{
 struct request *VAR_3;
 struct dm_rq_target_io *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->md = VAR_1;
 VAR_4->ti = ((void*)0);
 VAR_4->orig = VAR_0;
 VAR_4->error = 0;
 FUNC_2(&VAR_4->info, 0, sizeof(VAR_4->info));

 VAR_3 = &VAR_4->clone;
 if (FUNC_3(VAR_3, VAR_0, VAR_4)) {

  FUNC_1(VAR_4);
  return ((void*)0);
 }

 return VAR_3;
}
