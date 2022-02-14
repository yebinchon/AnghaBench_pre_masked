
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_2__ {int i_ino; } ;
struct gfs2_inode {int i_no_addr; int i_goal; TYPE_1__ i_inode; int i_generation; int i_no_formal_ino; } ;
struct gfs2_alloc_parms {int aflags; int target; } ;


 struct gfs2_sbd* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct gfs2_inode*,int *,int*,int,int *) ;
 int FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_4 (struct gfs2_inode*) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_7 (struct gfs2_sbd*) ;

__attribute__((used)) static int FUNC_8(struct gfs2_inode *VAR_4, u32 VAR_5)
{
 struct gfs2_sbd *VAR_6 = FUNC_0(&VAR_4->i_inode);
 struct gfs2_alloc_parms VAR_7 = { .target = VAR_0, .aflags = VAR_5, };
 int VAR_8;
 int VAR_9 = 1;

 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_3(VAR_4, &VAR_7);
 if (VAR_8)
  goto out_quota;

 VAR_8 = FUNC_6(VAR_6, VAR_2 + VAR_3 + VAR_1, 0);
 if (VAR_8)
  goto out_ipreserv;

 VAR_8 = FUNC_1(VAR_4, &VAR_4->i_no_addr, &VAR_9, 1, &VAR_4->i_generation);
 VAR_4->i_no_formal_ino = VAR_4->i_generation;
 VAR_4->i_inode.i_ino = VAR_4->i_no_addr;
 VAR_4->i_goal = VAR_4->i_no_addr;

 FUNC_7(VAR_6);

out_ipreserv:
 FUNC_2(VAR_4);
out_quota:
 FUNC_5(VAR_4);
out:
 return VAR_8;
}
