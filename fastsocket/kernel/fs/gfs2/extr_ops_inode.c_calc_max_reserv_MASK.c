
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sb_bsize_shift; } ;
struct gfs2_sbd {int sd_max_height; unsigned int sd_diptrs; TYPE_3__ sd_sb; int sd_inptrs; } ;
struct gfs2_inode {TYPE_2__* i_res; TYPE_1__* i_rgd; int i_inode; } ;
typedef int loff_t ;
struct TYPE_5__ {unsigned int rs_free; } ;
struct TYPE_4__ {unsigned int rd_free_clone; unsigned int rd_reserved; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 struct gfs2_sbd* FUNC_1 (int *) ;
 int FUNC_2 (struct gfs2_inode*,int,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct gfs2_inode *VAR_0, loff_t VAR_1, loff_t *VAR_2,
       unsigned int *VAR_3, unsigned int *VAR_4)
{
 const struct gfs2_sbd *VAR_5 = FUNC_1(&VAR_0->i_inode);
 unsigned int VAR_6 = VAR_0->i_rgd->rd_free_clone -
  VAR_0->i_rgd->rd_reserved + (VAR_0->i_res ? VAR_0->i_res->rs_free : 0);
 unsigned int VAR_7, VAR_8 = VAR_6 - 3 * (VAR_5->sd_max_height - 1);

 for (VAR_7 = VAR_8; VAR_7 > VAR_5->sd_diptrs;) {
  VAR_7 = FUNC_0(VAR_7, VAR_5->sd_inptrs);
  VAR_8 -= VAR_7;
 }


 if (VAR_8 <= *VAR_3)
  return;
 *VAR_3 = VAR_8;
 *VAR_4 = VAR_6 - VAR_8;
 *VAR_2 = ((loff_t)VAR_8 - 3) << VAR_5->sd_sb.sb_bsize_shift;
 if (*VAR_2 > VAR_1) {
  *VAR_2 = VAR_1;
  FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4);
 }
}
