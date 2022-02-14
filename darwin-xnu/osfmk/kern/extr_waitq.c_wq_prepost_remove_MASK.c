
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ wqp_next_id; scalar_t__ wqp_wq_id; } ;
struct TYPE_5__ {scalar_t__ id; } ;
struct wq_prepost {TYPE_3__ wqp_post; TYPE_2__ wqp_prepostid; } ;
struct TYPE_4__ {int waitq_prepost; } ;
struct waitq_set {scalar_t__ wqset_prepost_id; TYPE_1__ wqset_q; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct wq_prepost* FUNC_1 (scalar_t__) ;
 struct wq_prepost* FUNC_2 (struct wq_prepost*) ;
 int FUNC_3 (struct wq_prepost*) ;
 int FUNC_4 (struct wq_prepost*) ;
 int FUNC_5 (struct wq_prepost*) ;
 int FUNC_6 (struct wq_prepost*,struct wq_prepost*) ;
 scalar_t__ FUNC_7 (struct wq_prepost*) ;

__attribute__((used)) static int FUNC_8(struct waitq_set *VAR_1,
        struct wq_prepost *VAR_2)
{
 int VAR_3 = 1;
 uint64_t VAR_4 = VAR_2->wqp_post.wqp_next_id;
 uint64_t VAR_5 = VAR_2->wqp_prepostid.id;
 struct wq_prepost *VAR_6, *VAR_7;

 FUNC_0(FUNC_7(VAR_2) == VAR_0);
 FUNC_0(VAR_1->wqset_q.waitq_prepost == 1);

 if (VAR_4 == VAR_5) {

  VAR_1->wqset_prepost_id = 0;
  VAR_3 = 0;
  goto out;
 }

 VAR_6 = FUNC_2(VAR_2);
 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(VAR_6->wqp_post.wqp_next_id == VAR_5);
 FUNC_0(VAR_6->wqp_prepostid.id != VAR_5);
 FUNC_0(FUNC_7(VAR_6) == VAR_0);

 if (VAR_6->wqp_prepostid.id == VAR_4) {




  VAR_1->wqset_prepost_id = VAR_6->wqp_post.wqp_wq_id;
  FUNC_3(VAR_6);
  FUNC_4(VAR_6);
  VAR_3 = 0;
  goto out;
 }


 VAR_6->wqp_post.wqp_next_id = VAR_4;


 VAR_7 = FUNC_1(VAR_4);
 FUNC_0(VAR_7 != ((void*)0));
 FUNC_0(VAR_7 != VAR_2);
 FUNC_0(VAR_7 != VAR_6);
 FUNC_0(FUNC_7(VAR_7) == VAR_0);

 FUNC_5(VAR_7);
 FUNC_6(VAR_7, VAR_6);


 if (VAR_5 == VAR_1->wqset_prepost_id)
  VAR_1->wqset_prepost_id = VAR_4;

 FUNC_4(VAR_6);
 FUNC_4(VAR_7);

out:
 FUNC_5(VAR_2);
 FUNC_3(VAR_2);
 return VAR_3;
}
