
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backref_node {int rb_node; int lower; int upper; int list; } ;
struct backref_cache {int nr_nodes; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct backref_node* FUNC_2 (int,int ) ;

__attribute__((used)) static struct backref_node *FUNC_3(struct backref_cache *VAR_1)
{
 struct backref_node *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_2->list);
  FUNC_0(&VAR_2->upper);
  FUNC_0(&VAR_2->lower);
  FUNC_1(&VAR_2->rb_node);
  VAR_1->nr_nodes++;
 }
 return VAR_2;
}
