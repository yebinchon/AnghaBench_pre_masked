
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {struct gfs2_glock* i_gl; } ;
struct gfs2_glock {int gl_spin; int gl_flags; int gl_sbd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (struct gfs2_glock*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct gfs2_inode *VAR_1)
{
 struct gfs2_glock *VAR_2 = VAR_1->i_gl;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 FUNC_1(VAR_2->gl_sbd, VAR_3 == 0);

 FUNC_4(&VAR_2->gl_spin);
 FUNC_0(VAR_0, &VAR_2->gl_flags);
 FUNC_3(VAR_2, 1);
 FUNC_5(&VAR_2->gl_spin);
}
