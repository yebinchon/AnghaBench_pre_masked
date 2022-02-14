
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int sort_bio_list; int deferred_bio_list; } ;
struct rb_node {int dummy; } ;
struct dm_thin_endio_hook {int rb_node; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (int *,int *) ;
 struct rb_node* FUNC_4 (int *) ;
 struct rb_node* FUNC_5 (struct rb_node*) ;
 struct bio* FUNC_6 (struct dm_thin_endio_hook*) ;
 struct dm_thin_endio_hook* FUNC_7 (struct rb_node*) ;

__attribute__((used)) static void FUNC_8(struct thin_c *VAR_0)
{
 struct rb_node *VAR_1;
 struct dm_thin_endio_hook *VAR_2;
 struct bio *VAR_3;

 for (VAR_1 = FUNC_4(&VAR_0->sort_bio_list); VAR_1; VAR_1 = FUNC_5(VAR_1)) {
  VAR_2 = FUNC_7(VAR_1);
  VAR_3 = FUNC_6(VAR_2);

  FUNC_2(&VAR_0->deferred_bio_list, VAR_3);
  FUNC_3(&VAR_2->rb_node, &VAR_0->sort_bio_list);
 }

 FUNC_1(!FUNC_0(&VAR_0->sort_bio_list));
}
