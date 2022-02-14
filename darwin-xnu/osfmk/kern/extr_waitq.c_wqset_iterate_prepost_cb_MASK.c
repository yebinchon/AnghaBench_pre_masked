
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int id; } ;
struct wq_prepost {TYPE_1__ wqp_prepostid; } ;
struct wq_it_ctx {int (* it ) (int ,struct waitq*,struct waitq_set*) ;int ctx; } ;
struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct waitq*,struct waitq_set*) ;
 int FUNC_3 (struct waitq*) ;
 scalar_t__ FUNC_4 (struct waitq*) ;
 int FUNC_5 (struct waitq_set*) ;
 int FUNC_6 (struct waitq_set*) ;
 int FUNC_7 (struct waitq*) ;
 struct wq_prepost* FUNC_8 (int ) ;
 int FUNC_9 (struct wq_prepost*) ;
 int FUNC_10 (char*,struct waitq_set*,struct wq_prepost*,int ,struct waitq*) ;
 int FUNC_11 (struct wq_prepost*) ;

__attribute__((used)) static int FUNC_12(struct waitq_set *VAR_4, void *VAR_5,
        struct wq_prepost *VAR_6, struct waitq *VAR_7)
{
 struct wq_it_ctx *VAR_8 = (struct wq_it_ctx *)(VAR_5);
 uint64_t VAR_9;
 int VAR_10;

 (void)VAR_6;
 FUNC_0(!FUNC_3(VAR_7));

 if (FUNC_4(VAR_7))
  goto call_iterator;

 if (!FUNC_11(VAR_6))
  return VAR_3;







 VAR_9 = VAR_6->wqp_prepostid.id;
 FUNC_9(VAR_6);
 FUNC_6(VAR_4);
 FUNC_10("dropped set:%p lock waiting for wqp:%p (0x%llx -> wq:%p)",
  VAR_4, VAR_6, VAR_6->wqp_prepostid.id, VAR_7);
 FUNC_1(1);
 FUNC_5(VAR_4);
 VAR_6 = FUNC_8(VAR_9);
 if (!VAR_6)

  return VAR_2;
 return VAR_3;

call_iterator:
 if (!FUNC_11(VAR_6)) {
  VAR_10 = VAR_3;
  goto out_unlock;
 }


 VAR_10 = VAR_8->it(VAR_8->ctx, VAR_7, VAR_4);

 if (VAR_10 == VAR_1) {
  VAR_10 = VAR_0;
  goto out;
 }

out_unlock:
 FUNC_7(VAR_7);
out:
 return VAR_10;
}
