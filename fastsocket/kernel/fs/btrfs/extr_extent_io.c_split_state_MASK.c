
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct rb_node {int dummy; } ;
struct extent_state {struct extent_io_tree* tree; int rb_node; void* end; void* start; int state; } ;
struct extent_io_tree {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct extent_state*) ;
 int FUNC_1 (struct extent_io_tree*,struct extent_state*,void*) ;
 struct rb_node* FUNC_2 (int *,void*,int *) ;

__attribute__((used)) static int FUNC_3(struct extent_io_tree *VAR_1, struct extent_state *VAR_2,
         struct extent_state *VAR_3, u64 VAR_4)
{
 struct rb_node *VAR_5;

 FUNC_1(VAR_1, VAR_2, VAR_4);

 VAR_3->start = VAR_2->start;
 VAR_3->end = VAR_4 - 1;
 VAR_3->state = VAR_2->state;
 VAR_2->start = VAR_4;

 VAR_5 = FUNC_2(&VAR_1->state, VAR_3->end, &VAR_3->rb_node);
 if (VAR_5) {
  FUNC_0(VAR_3);
  return -VAR_0;
 }
 VAR_3->tree = VAR_1;
 return 0;
}
