
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct ds_tracer {size_t size; struct ds_context* context; void* buffer; } ;
struct ds_trace {int dummy; } ;
struct ds_context {int dummy; } ;
typedef enum ds_qualifier { ____Placeholder_ds_qualifier } ds_qualifier ;
struct TYPE_2__ {size_t* sizeof_rec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 TYPE_1__ VAR_4 ;
 struct ds_context* FUNC_1 (struct task_struct*,int) ;

__attribute__((used)) static int FUNC_2(struct ds_tracer *VAR_5, struct ds_trace *VAR_6,
        enum ds_qualifier VAR_7, struct task_struct *VAR_8,
        int VAR_9, void *VAR_10, size_t VAR_11, size_t VAR_12)
{
 struct ds_context *VAR_13;
 int VAR_14;
 size_t VAR_15;

 VAR_14 = -VAR_3;
 if (!VAR_4.sizeof_rec[VAR_7])
  goto out;

 VAR_14 = -VAR_1;
 if (!VAR_10)
  goto out;

 VAR_15 = VAR_4.sizeof_rec[VAR_7];

 if (!FUNC_0((unsigned long)VAR_10, VAR_0))
  VAR_15 += VAR_0;

 VAR_14 = -VAR_1;
 if (VAR_11 < VAR_15)
  goto out;

 if (VAR_12 != (size_t)-1) {
  VAR_12 *= VAR_4.sizeof_rec[VAR_7];

  VAR_14 = -VAR_1;
  if (VAR_11 <= VAR_12)
   goto out;
 }

 VAR_5->buffer = VAR_10;
 VAR_5->size = VAR_11;

 VAR_14 = -VAR_2;
 VAR_13 = FUNC_1(VAR_8, VAR_9);
 if (!VAR_13)
  goto out;
 VAR_5->context = VAR_13;






 VAR_14 = 0;
 out:
 return VAR_14;
}
