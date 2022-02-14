
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct address_space* i_mapping; int i_mode; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_flags; } ;
struct gfs2_glock {scalar_t__ gl_state; int gl_flags; int gl_sbd; struct gfs2_inode* gl_object; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct address_space*) ;
 int FUNC_5 (struct gfs2_glock*) ;
 struct address_space* FUNC_6 (struct gfs2_glock*) ;
 int FUNC_7 (int ,struct gfs2_glock*) ;
 int FUNC_8 (struct address_space*,int) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct address_space*,int ,int ) ;

__attribute__((used)) static void FUNC_12(struct gfs2_glock *VAR_3)
{
 struct gfs2_inode *VAR_4 = VAR_3->gl_object;
 struct address_space *VAR_5 = FUNC_6(VAR_3);
 int VAR_6;

 if (VAR_4 && !FUNC_1(VAR_4->i_inode.i_mode))
  VAR_4 = ((void*)0);
 if (VAR_4 && FUNC_10(VAR_0, &VAR_4->i_flags))
  FUNC_11(VAR_4->i_inode.i_mapping, 0, 0);
 if (!FUNC_10(VAR_1, &VAR_3->gl_flags))
  return;

 FUNC_0(VAR_3->gl_state != VAR_2);

 FUNC_7(VAR_3->gl_sbd, VAR_3);
 FUNC_4(VAR_5);
 if (VAR_4) {
  struct address_space *VAR_7 = VAR_4->i_inode.i_mapping;
  FUNC_4(VAR_7);
  VAR_6 = FUNC_3(VAR_7);
  FUNC_8(VAR_7, VAR_6);
 }
 VAR_6 = FUNC_3(VAR_5);
 FUNC_8(VAR_5, VAR_6);
 FUNC_5(VAR_3);




 FUNC_9();
 FUNC_2(VAR_1, &VAR_3->gl_flags);
}
