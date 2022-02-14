
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct throtl_grp {TYPE_1__ blkg; int * iops; int * bps; } ;
struct throtl_data {int dummy; } ;
struct blkio_cgroup {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct throtl_data*,struct throtl_grp*) ;
 int FUNC_1 (struct blkio_cgroup*,int ) ;
 int FUNC_2 (struct blkio_cgroup*,int ) ;
 int FUNC_3 (struct blkio_cgroup*,int ) ;
 int FUNC_4 (struct blkio_cgroup*,int ) ;
 int FUNC_5 (struct blkio_cgroup*,TYPE_1__*,void*,int ,int ) ;
 int FUNC_6 (struct throtl_data*,struct throtl_grp*) ;

__attribute__((used)) static void FUNC_7(struct throtl_data *VAR_3,
   struct throtl_grp *VAR_4, struct blkio_cgroup *VAR_5)
{
 FUNC_0(VAR_3, VAR_4);


 FUNC_5(VAR_5, &VAR_4->blkg, (void *)VAR_3,
    VAR_4->blkg.dev, VAR_0);

 VAR_4->bps[VAR_1] = FUNC_1(VAR_5, VAR_4->blkg.dev);
 VAR_4->bps[VAR_2] = FUNC_3(VAR_5, VAR_4->blkg.dev);
 VAR_4->iops[VAR_1] = FUNC_2(VAR_5, VAR_4->blkg.dev);
 VAR_4->iops[VAR_2] = FUNC_4(VAR_5, VAR_4->blkg.dev);

 FUNC_6(VAR_3, VAR_4);
}
