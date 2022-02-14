
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct fuse_file {int polled_node; int kh; } ;
struct fuse_conn {int lock; int polled_files; } ;


 int FUNC_0 (struct rb_node*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct rb_node** FUNC_2 (struct fuse_conn*,int ,struct rb_node**) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,struct rb_node*,struct rb_node**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct fuse_conn *VAR_0,
          struct fuse_file *VAR_1)
{
 FUNC_5(&VAR_0->lock);
 if (FUNC_1(&VAR_1->polled_node)) {
  struct rb_node **VAR_2, *VAR_3;

  VAR_2 = FUNC_2(VAR_0, VAR_1->kh, &VAR_3);
  FUNC_0(*VAR_2);
  FUNC_4(&VAR_1->polled_node, VAR_3, VAR_2);
  FUNC_3(&VAR_1->polled_node, &VAR_0->polled_files);
 }
 FUNC_6(&VAR_0->lock);
}
