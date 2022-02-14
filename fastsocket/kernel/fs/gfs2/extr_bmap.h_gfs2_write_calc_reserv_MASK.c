
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int sb_bsize_shift; } ;
struct gfs2_sbd {int sd_max_height; unsigned int sd_diptrs; int sd_inptrs; TYPE_1__ sd_sb; } ;
struct gfs2_inode {int i_inode; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 struct gfs2_sbd* FUNC_2 (int *) ;
 int FUNC_3 (struct gfs2_inode const*) ;

__attribute__((used)) static inline void FUNC_4(const struct gfs2_inode *VAR_0,
       unsigned int VAR_1,
       unsigned int *VAR_2,
       unsigned int *VAR_3)
{
 const struct gfs2_sbd *VAR_4 = FUNC_2(&VAR_0->i_inode);
 unsigned int VAR_5;

 FUNC_0(FUNC_3(VAR_0));
 *VAR_2 = (VAR_1 >> VAR_4->sd_sb.sb_bsize_shift) + 3;
 *VAR_3 = 3 * (VAR_4->sd_max_height - 1);

 for (VAR_5 = *VAR_2; VAR_5 > VAR_4->sd_diptrs;) {
  VAR_5 = FUNC_1(VAR_5, VAR_4->sd_inptrs);
  *VAR_3 += VAR_5;
 }
}
