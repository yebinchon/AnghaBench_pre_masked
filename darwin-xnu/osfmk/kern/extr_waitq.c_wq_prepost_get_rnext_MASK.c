
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_5__ {scalar_t__ wqp_next_id; } ;
struct wq_prepost {TYPE_3__ wqp_prepostid; TYPE_2__ wqp_post; int wqte; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct lt_elem {TYPE_1__ lt_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lt_elem* FUNC_0 (int *,int *) ;
 struct lt_elem* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,struct lt_elem*) ;
 scalar_t__ FUNC_3 (struct wq_prepost*) ;

__attribute__((used)) static struct wq_prepost *FUNC_4(struct wq_prepost *VAR_2)
{
 struct lt_elem *VAR_3;
 struct wq_prepost *VAR_4;
 uint64_t VAR_5;

 VAR_3 = FUNC_0(&VAR_1, &VAR_2->wqte);
 if (!VAR_3)
  return ((void*)0);
 VAR_5 = VAR_3->lt_id.id;
 VAR_3 = FUNC_1(&VAR_1, VAR_5);

 if (!VAR_3)
  return ((void*)0);
 VAR_4 = (struct wq_prepost *)VAR_3;
 if (VAR_3->lt_id.id != VAR_5 ||
     FUNC_3(VAR_4) != VAR_0 ||
     VAR_4->wqp_post.wqp_next_id != VAR_2->wqp_prepostid.id) {
  FUNC_2(&VAR_1, VAR_3);
  return ((void*)0);
 }

 return VAR_4;
}
