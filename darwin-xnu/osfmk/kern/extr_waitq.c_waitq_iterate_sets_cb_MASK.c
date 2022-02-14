
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wq_it_ctx {int (* it ) (int ,struct waitq*,struct waitq_set*) ;scalar_t__ input; int ctx; } ;
struct waitq {int dummy; } ;
struct waitq_set {struct waitq wqset_q; } ;
struct TYPE_2__ {struct waitq_set* wql_set; } ;
struct waitq_link {TYPE_1__ wql_wqs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct waitq*,struct waitq_set*) ;
 int FUNC_2 (struct waitq*) ;
 int FUNC_3 (struct waitq_set*) ;
 int FUNC_4 (struct waitq_set*) ;
 scalar_t__ FUNC_5 (struct waitq_link*) ;

__attribute__((used)) static int FUNC_6(struct waitq *VAR_1, void *VAR_2,
     struct waitq_link *VAR_3)
{
 struct wq_it_ctx *VAR_4 = (struct wq_it_ctx *)(VAR_2);
 struct waitq_set *VAR_5;
 int VAR_6;

 (void)VAR_1;
 FUNC_0(!FUNC_2(VAR_1));
 FUNC_0(FUNC_5(VAR_3) == VAR_0);





 VAR_5 = VAR_3->wql_wqs.wql_set;
 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(!FUNC_2(&VAR_5->wqset_q));
 FUNC_3(VAR_5);

 VAR_6 = VAR_4->it(VAR_4->ctx, (struct waitq *)VAR_4->input, VAR_5);

 FUNC_4(VAR_5);
 return VAR_6;
}
