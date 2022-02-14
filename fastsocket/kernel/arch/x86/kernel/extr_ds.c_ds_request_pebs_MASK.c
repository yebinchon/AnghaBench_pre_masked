
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_8__ {TYPE_2__* context; } ;
struct TYPE_6__ {int ds; } ;
struct pebs_tracer {TYPE_3__ ds; TYPE_1__ trace; scalar_t__ ovfl; } ;
typedef scalar_t__ pebs_ovfl_callback_t ;
struct TYPE_7__ {struct pebs_tracer* pebs_master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pebs_tracer* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,void*,size_t,size_t,unsigned int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int *,int ,struct task_struct*,int,void*,size_t,size_t) ;
 int FUNC_5 (struct pebs_tracer*) ;
 int FUNC_6 (TYPE_2__*,int *,int ) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct pebs_tracer*) ;
 struct pebs_tracer* FUNC_9 (int,int ) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct pebs_tracer *FUNC_13(struct task_struct *VAR_6, int VAR_7,
        void *VAR_8, size_t VAR_9,
        pebs_ovfl_callback_t VAR_10, size_t VAR_11,
        unsigned int VAR_12)
{
 struct pebs_tracer *VAR_13;
 int VAR_14;


 VAR_14 = -VAR_1;
 if (VAR_10)
  goto out;

 VAR_14 = FUNC_7(VAR_6);
 if (VAR_14 < 0)
  goto out;

 VAR_14 = -VAR_0;
 VAR_13 = FUNC_9(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  goto out_put_tracer;
 VAR_13->ovfl = VAR_10;


 VAR_14 = FUNC_4(&VAR_13->ds, &VAR_13->trace.ds,
      VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_11);
 if (VAR_14 < 0)
  goto out_tracer;


 FUNC_11(&VAR_4);

 VAR_14 = -VAR_2;
 if (VAR_13->ds.context->pebs_master)
  goto out_unlock;
 VAR_13->ds.context->pebs_master = VAR_13;

 FUNC_12(&VAR_4);





 FUNC_1(&VAR_13->trace.ds, VAR_5, VAR_8, VAR_9, VAR_11, VAR_12);
 FUNC_6(VAR_13->ds.context, &VAR_13->trace.ds, VAR_5);
 FUNC_2(VAR_13->ds.context);


 FUNC_5(VAR_13);

 return VAR_13;

 out_unlock:
 FUNC_12(&VAR_4);
 FUNC_3(VAR_13->ds.context);
 out_tracer:
 FUNC_8(VAR_13);
 out_put_tracer:
 FUNC_10(VAR_6);
 out:
 return FUNC_0(VAR_14);
}
