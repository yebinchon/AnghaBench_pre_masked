
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct request {struct rb_node rb_node; } ;
struct cfq_queue {int sort_list; } ;
struct cfq_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rb_node*) ;
 int FUNC_2 (struct request*) ;
 struct request* FUNC_3 (struct cfq_data*,struct request*,struct request*,int ) ;
 struct request* FUNC_4 (struct rb_node*) ;
 struct rb_node* FUNC_5 (int *) ;
 struct rb_node* FUNC_6 (struct rb_node*) ;
 struct rb_node* FUNC_7 (struct rb_node*) ;

__attribute__((used)) static struct request *
FUNC_8(struct cfq_data *VAR_0, struct cfq_queue *VAR_1,
    struct request *VAR_2)
{
 struct rb_node *VAR_3 = FUNC_6(&VAR_2->rb_node);
 struct rb_node *VAR_4 = FUNC_7(&VAR_2->rb_node);
 struct request *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

 FUNC_0(FUNC_1(&VAR_2->rb_node));

 if (VAR_4)
  VAR_6 = FUNC_4(VAR_4);

 if (VAR_3)
  VAR_5 = FUNC_4(VAR_3);
 else {
  VAR_3 = FUNC_5(&VAR_1->sort_list);
  if (VAR_3 && VAR_3 != &VAR_2->rb_node)
   VAR_5 = FUNC_4(VAR_3);
 }

 return FUNC_3(VAR_0, VAR_5, VAR_6, FUNC_2(VAR_2));
}
