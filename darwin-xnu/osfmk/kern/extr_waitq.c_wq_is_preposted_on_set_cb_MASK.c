
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wq_prepost {int dummy; } ;
struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;
struct _is_posted_ctx {int did_prepost; struct waitq* posting_wq; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct waitq_set *VAR_1, void *VAR_2,
         struct wq_prepost *VAR_3, struct waitq *VAR_4)
{
 struct _is_posted_ctx *VAR_5 = (struct _is_posted_ctx *)VAR_2;

 (void)VAR_1;
 (void)VAR_3;





 if (VAR_5->posting_wq == VAR_4)
  VAR_5->did_prepost = 1;

 return VAR_0;
}
