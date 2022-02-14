
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ wqp_wq_id; scalar_t__ wqp_next_id; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_5__ {struct waitq* wqp_wq_ptr; } ;
struct wq_prepost {TYPE_3__ wqp_post; TYPE_2__ wqp_prepostid; TYPE_1__ wqp_wq; } ;
struct waitq {scalar_t__ waitq_prepost_id; } ;
struct waitq_set {scalar_t__ wqset_prepost_id; int wqset_id; struct waitq wqset_q; } ;
struct TYPE_8__ {int npreposts; } ;


 scalar_t__ FUNC_0 (struct waitq*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_4__ VAR_2 ;
 scalar_t__ FUNC_2 (struct waitq*) ;
 int FUNC_3 (struct waitq_set*) ;
 struct wq_prepost* FUNC_4 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct waitq*,struct waitq_set*) ;
 struct wq_prepost* FUNC_6 (scalar_t__) ;
 struct wq_prepost* FUNC_7 (struct wq_prepost*) ;
 int FUNC_8 (struct wq_prepost*) ;
 int FUNC_9 (struct wq_prepost*) ;
 int FUNC_10 (struct wq_prepost*,struct wq_prepost*) ;
 int FUNC_11 (char*,void*,scalar_t__,...) ;
 int FUNC_12 (struct wq_prepost*) ;
 scalar_t__ FUNC_13 (struct wq_prepost*) ;

__attribute__((used)) static void FUNC_14(struct waitq_set *VAR_3,
          struct waitq *VAR_4,
          uint64_t *VAR_5)
{
 struct wq_prepost *VAR_6, *VAR_7, *VAR_8;

 FUNC_1(FUNC_2(VAR_4) && FUNC_2(&VAR_3->wqset_q));





 if (FUNC_5(VAR_4, VAR_3))
  return;

 FUNC_1(FUNC_3(VAR_3));






 if (VAR_4->waitq_prepost_id == 0) {
  struct wq_prepost *VAR_9;
  VAR_9 = FUNC_4(VAR_5, VAR_1);
  VAR_9->wqp_wq.wqp_wq_ptr = VAR_4;
  FUNC_12(VAR_9);
  VAR_4->waitq_prepost_id = VAR_9->wqp_prepostid.id;
  FUNC_8(VAR_9);
 }





 FUNC_11("preposting waitq %p (0x%llx) to set 0x%llx",
  (void *)FUNC_0(VAR_4),
  VAR_4->waitq_prepost_id, VAR_3->wqset_id);

 if (VAR_3->wqset_prepost_id == 0) {

  VAR_3->wqset_prepost_id = VAR_4->waitq_prepost_id;
  return;
 }

 VAR_7 = FUNC_6(VAR_3->wqset_prepost_id);
 if (!VAR_7) {

  VAR_3->wqset_prepost_id = VAR_4->waitq_prepost_id;
  return;
 }

 FUNC_1(VAR_7->wqp_prepostid.id == VAR_3->wqset_prepost_id);







 VAR_6 = FUNC_4(VAR_5, VAR_0);

 VAR_6->wqp_post.wqp_wq_id = VAR_4->waitq_prepost_id;
 FUNC_11("POST 0x%llx :: WQ 0x%llx", VAR_6->wqp_prepostid.id,
  VAR_4->waitq_prepost_id);

 if (FUNC_13(VAR_7) == VAR_1) {




  uint64_t VAR_10 = VAR_7->wqp_prepostid.id;
  FUNC_11("set 0x%llx previous had 1 WQ prepost (0x%llx): "
   "replacing with two POST preposts",
   VAR_3->wqset_id, VAR_10);


  FUNC_8(VAR_7);


  VAR_7 = FUNC_4(VAR_5, VAR_0);


  VAR_7->wqp_post.wqp_wq_id = VAR_10;
  FUNC_11("POST 0x%llx :: WQ 0x%llx",
   VAR_7->wqp_prepostid.id, VAR_10);


  VAR_7->wqp_post.wqp_next_id = VAR_6->wqp_prepostid.id;

  FUNC_10(VAR_7, VAR_6);






  VAR_6->wqp_post.wqp_next_id = VAR_7->wqp_prepostid.id;
  FUNC_10(VAR_6, VAR_7);


  FUNC_12(VAR_7);
  FUNC_12(VAR_6);
  VAR_3->wqset_prepost_id = VAR_7->wqp_prepostid.id;


  FUNC_8(VAR_7);
  FUNC_8(VAR_6);

  FUNC_11("set 0x%llx: 0x%llx/0x%llx -> 0x%llx/0x%llx -> 0x%llx",
   VAR_3->wqset_id, VAR_3->wqset_prepost_id,
   VAR_7->wqp_prepostid.id, VAR_7->wqp_post.wqp_next_id,
   VAR_6->wqp_prepostid.id,
   VAR_6->wqp_post.wqp_next_id);
  return;
 }

 FUNC_1(FUNC_13(VAR_7) == VAR_0);




 VAR_8 = FUNC_7(VAR_7);
 FUNC_1(VAR_8 != ((void*)0));
 FUNC_1(VAR_8->wqp_post.wqp_next_id == VAR_3->wqset_prepost_id);





 FUNC_9(VAR_7);
 FUNC_10(VAR_7, VAR_6);


 VAR_6->wqp_post.wqp_next_id = VAR_7->wqp_prepostid.id;
 FUNC_10(VAR_6, VAR_8);


 VAR_8->wqp_post.wqp_next_id = VAR_6->wqp_prepostid.id;

 FUNC_12(VAR_6);

 FUNC_8(VAR_7);
 FUNC_8(VAR_8);
 FUNC_8(VAR_6);

 FUNC_11("set 0x%llx (wqp:0x%llx) last_prepost:0x%llx, "
  "new_prepost:0x%llx->0x%llx", VAR_3->wqset_id,
  VAR_3->wqset_prepost_id, VAR_7->wqp_prepostid.id,
  VAR_6->wqp_prepostid.id, VAR_6->wqp_post.wqp_next_id);

 return;
}
