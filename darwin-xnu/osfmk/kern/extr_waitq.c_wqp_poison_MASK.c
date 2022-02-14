
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* wqp_wq_id; void* wqp_next_id; } ;
struct wq_prepost {TYPE_1__ wqp_post; } ;
struct lt_elem {int dummy; } ;
struct link_table {int dummy; } ;



 void* VAR_0 ;

 int FUNC_0 (struct wq_prepost*) ;

__attribute__((used)) static void FUNC_1(struct link_table *VAR_1, struct lt_elem *VAR_2)
{
 struct wq_prepost *VAR_3 = (struct wq_prepost *)VAR_2;
 (void)VAR_1;

 switch (FUNC_0(VAR_3)) {
 case 128:
  break;
 case 129:
  VAR_3->wqp_post.wqp_next_id = VAR_0;
  VAR_3->wqp_post.wqp_wq_id = VAR_0;
  break;
 default:
  break;
 }
}
