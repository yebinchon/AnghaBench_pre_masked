
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_8__ {TYPE_2__* context; } ;
struct TYPE_6__ {int write; int read; int ds; } ;
struct bts_tracer {TYPE_3__ ds; TYPE_1__ trace; scalar_t__ ovfl; } ;
typedef scalar_t__ bts_ovfl_callback_t ;
struct TYPE_7__ {struct bts_tracer* bts_master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bts_tracer* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,void*,size_t,size_t,unsigned int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int *,int ,struct task_struct*,int,void*,size_t,size_t) ;
 int FUNC_5 (struct bts_tracer*) ;
 int FUNC_6 (TYPE_2__*,int *,int ) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct bts_tracer*) ;
 struct bts_tracer* FUNC_9 (int,int ) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct bts_tracer *FUNC_13(struct task_struct *VAR_8, int VAR_9,
      void *VAR_10, size_t VAR_11,
      bts_ovfl_callback_t VAR_12, size_t VAR_13,
      unsigned int VAR_14)
{
 struct bts_tracer *VAR_15;
 int VAR_16;


 VAR_16 = -VAR_1;
 if (VAR_12)
  goto out;

 VAR_16 = FUNC_7(VAR_8);
 if (VAR_16 < 0)
  goto out;

 VAR_16 = -VAR_0;
 VAR_15 = FUNC_9(sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  goto out_put_tracer;
 VAR_15->ovfl = VAR_12;


 VAR_16 = FUNC_4(&VAR_15->ds, &VAR_15->trace.ds,
      VAR_6, VAR_8, VAR_9, VAR_10, VAR_11, VAR_13);
 if (VAR_16 < 0)
  goto out_tracer;


 FUNC_11(&VAR_7);

 VAR_16 = -VAR_2;
 if (VAR_15->ds.context->bts_master)
  goto out_unlock;
 VAR_15->ds.context->bts_master = VAR_15;

 FUNC_12(&VAR_7);





 FUNC_1(&VAR_15->trace.ds, VAR_6, VAR_10, VAR_11, VAR_13, VAR_14);
 FUNC_6(VAR_15->ds.context, &VAR_15->trace.ds, VAR_6);
 FUNC_2(VAR_15->ds.context);

 VAR_15->trace.read = VAR_4;
 VAR_15->trace.write = VAR_5;


 FUNC_5(VAR_15);

 return VAR_15;

 out_unlock:
 FUNC_12(&VAR_7);
 FUNC_3(VAR_15->ds.context);
 out_tracer:
 FUNC_8(VAR_15);
 out_put_tracer:
 FUNC_10(VAR_8);
 out:
 return FUNC_0(VAR_16);
}
