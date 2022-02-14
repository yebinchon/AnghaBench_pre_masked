
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_rgrpd {int dummy; } ;
struct TYPE_2__ {int i_gid; int i_uid; } ;
struct gfs2_inode {int i_no_addr; TYPE_1__ i_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_rgrpd*,int ) ;
 int FUNC_1 (struct gfs2_inode*,int ,int) ;
 int FUNC_2 (struct gfs2_inode*,int,int ,int ) ;
 int FUNC_3 (struct gfs2_inode*,struct gfs2_rgrpd*,int ,int,int ) ;

void FUNC_4(struct gfs2_rgrpd *VAR_1, struct gfs2_inode *VAR_2)
{
 FUNC_0(VAR_1, VAR_2->i_no_addr);
 FUNC_3(VAR_2, VAR_1, VAR_2->i_no_addr, 1, VAR_0);
 FUNC_2(VAR_2, -1, VAR_2->i_inode.i_uid, VAR_2->i_inode.i_gid);
 FUNC_1(VAR_2, VAR_2->i_no_addr, 1);
}
