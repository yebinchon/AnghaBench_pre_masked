
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct address_space* i_mapping; int i_mode; } ;
struct gfs2_inode {TYPE_3__ i_inode; int i_flags; } ;
struct gfs2_glock {TYPE_1__* gl_sbd; int gl_ail_count; struct gfs2_inode* gl_object; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {scalar_t__ sd_rindex_uptodate; int sd_rindex; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct gfs2_inode*) ;
 struct address_space* FUNC_6 (struct gfs2_glock*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct address_space*,int ) ;

__attribute__((used)) static void FUNC_10(struct gfs2_glock *VAR_2, int VAR_3)
{
 struct gfs2_inode *VAR_4 = VAR_2->gl_object;

 FUNC_4(VAR_2->gl_sbd, !FUNC_2(&VAR_2->gl_ail_count));

 if (VAR_3 & VAR_0) {
  struct address_space *VAR_5 = FUNC_6(VAR_2);
  FUNC_9(VAR_5, 0);
  if (VAR_4) {
   FUNC_8(VAR_1, &VAR_4->i_flags);
   FUNC_3(&VAR_4->i_inode);
   FUNC_5(VAR_4);
  }
 }

 if (VAR_4 == FUNC_0(VAR_2->gl_sbd->sd_rindex)) {
  FUNC_7(VAR_2->gl_sbd, ((void*)0));
  VAR_2->gl_sbd->sd_rindex_uptodate = 0;
 }
 if (VAR_4 && FUNC_1(VAR_4->i_inode.i_mode))
  FUNC_9(VAR_4->i_inode.i_mapping, 0);
}
