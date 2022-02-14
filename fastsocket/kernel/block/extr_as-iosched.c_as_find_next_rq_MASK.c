
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct request {struct rb_node rb_node; } ;
struct as_data {int * sort_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rb_node*) ;
 struct request* FUNC_2 (struct as_data*,struct request*,struct request*) ;
 struct request* FUNC_3 (struct rb_node*) ;
 struct rb_node* FUNC_4 (int *) ;
 struct rb_node* FUNC_5 (struct rb_node*) ;
 struct rb_node* FUNC_6 (struct rb_node*) ;
 int FUNC_7 (struct request*) ;

__attribute__((used)) static struct request *
FUNC_8(struct as_data *VAR_0, struct request *VAR_1)
{
 struct rb_node *VAR_2 = FUNC_5(&VAR_1->rb_node);
 struct rb_node *VAR_3 = FUNC_6(&VAR_1->rb_node);
 struct request *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 FUNC_0(FUNC_1(&VAR_1->rb_node));

 if (VAR_3)
  VAR_5 = FUNC_3(VAR_3);

 if (VAR_2)
  VAR_4 = FUNC_3(VAR_2);
 else {
  const int VAR_6 = FUNC_7(VAR_1);

  VAR_2 = FUNC_4(&VAR_0->sort_list[VAR_6]);
  if (VAR_2 && VAR_2 != &VAR_1->rb_node)
   VAR_4 = FUNC_3(VAR_2);
 }

 return FUNC_2(VAR_0, VAR_4, VAR_5);
}
