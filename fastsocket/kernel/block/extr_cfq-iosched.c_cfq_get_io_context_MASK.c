
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_context {int cgroup_changed; int ioprio_changed; } ;
struct cfq_io_context {int dummy; } ;
struct cfq_data {TYPE_1__* queue; } ;
typedef int gfp_t ;
struct TYPE_2__ {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cfq_io_context* FUNC_0 (struct cfq_data*,int) ;
 int FUNC_1 (struct cfq_io_context*) ;
 int FUNC_2 (struct cfq_data*,struct io_context*,struct cfq_io_context*,int) ;
 struct cfq_io_context* FUNC_3 (struct cfq_data*,struct io_context*) ;
 int FUNC_4 (struct io_context*) ;
 int FUNC_5 (struct io_context*) ;
 struct io_context* FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct io_context*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static struct cfq_io_context *
FUNC_11(struct cfq_data *VAR_2, gfp_t VAR_3)
{
 struct io_context *VAR_4 = ((void*)0);
 struct cfq_io_context *VAR_5;
 int VAR_6;

 FUNC_7(VAR_3 & VAR_1);

 VAR_4 = FUNC_6(VAR_3, VAR_2->queue->node);
 if (!VAR_4)
  return ((void*)0);

retry:
 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  goto err;

 VAR_6 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_3);
 if (VAR_6 == -VAR_0) {

  FUNC_1(VAR_5);
  goto retry;
 } else if (VAR_6)
  goto err_free;

out:
 FUNC_9();
 if (FUNC_10(VAR_4->ioprio_changed))
  FUNC_5(VAR_4);





 return VAR_5;
err_free:
 FUNC_1(VAR_5);
err:
 FUNC_8(VAR_4);
 return ((void*)0);
}
