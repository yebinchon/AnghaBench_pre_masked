
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {TYPE_1__* rd_bits; int rd_gl; } ;
struct gfs2_inode {int i_no_addr; } ;
struct TYPE_4__ {int b_data; } ;
struct TYPE_3__ {TYPE_2__* bi_bh; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct gfs2_rgrpd*,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 struct gfs2_rgrpd* FUNC_4 (struct gfs2_sbd*,int ,int,int ) ;
 int FUNC_5 (struct gfs2_inode*,struct gfs2_rgrpd*,int ,int,int ) ;

void FUNC_6(struct inode *VAR_1)
{
 struct gfs2_inode *VAR_2 = FUNC_0(VAR_1);
 struct gfs2_sbd *VAR_3 = FUNC_1(VAR_1);
 struct gfs2_rgrpd *VAR_4;
 u64 VAR_5 = VAR_2->i_no_addr;

 VAR_4 = FUNC_4(VAR_3, VAR_5, 1, VAR_0);
 if (!VAR_4)
  return;
 FUNC_5(VAR_2, VAR_4, VAR_5, 1, VAR_0);
 FUNC_3(VAR_4->rd_gl, VAR_4->rd_bits[0].bi_bh);
 FUNC_2(VAR_4, VAR_4->rd_bits[0].bi_bh->b_data);
}
