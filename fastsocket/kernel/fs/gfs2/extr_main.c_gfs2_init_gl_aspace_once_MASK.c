
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {int dummy; } ;
struct address_space {int i_mmap_nonlinear; int i_mmap; int private_lock; int private_list; int i_mmap_lock; int tree_lock; int page_tree; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gfs2_glock*) ;
 int FUNC_4 (struct address_space*,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
 struct gfs2_glock *VAR_2 = VAR_1;
 struct address_space *VAR_3 = (struct address_space *)(VAR_2 + 1);

 FUNC_3(VAR_2);
 FUNC_4(VAR_3, 0, sizeof(*VAR_3));
 FUNC_1(&VAR_3->page_tree, VAR_0);
 FUNC_5(&VAR_3->tree_lock);
 FUNC_5(&VAR_3->i_mmap_lock);
 FUNC_0(&VAR_3->private_list);
 FUNC_5(&VAR_3->private_lock);
 FUNC_2(&VAR_3->i_mmap);
 FUNC_0(&VAR_3->i_mmap_nonlinear);
}
