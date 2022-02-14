
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int sb_bsize; unsigned int sb_bsize_shift; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct TYPE_6__ {int i_blkbits; } ;
struct gfs2_inode {TYPE_2__ i_inode; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {int b_size; scalar_t__ b_state; } ;


 int FUNC_0 (int ) ;
 struct gfs2_sbd* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (TYPE_2__*,int,struct buffer_head*,int ) ;
 int FUNC_4 (struct gfs2_inode*) ;
 scalar_t__ FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (TYPE_2__*) ;

int FUNC_7(struct gfs2_inode *VAR_0, u64 VAR_1,
         unsigned int VAR_2, int *VAR_3)
{
 struct gfs2_sbd *VAR_4 = FUNC_1(&VAR_0->i_inode);
 struct buffer_head VAR_5;
 unsigned int VAR_6;
 u64 VAR_7, VAR_8, VAR_9;
 u64 VAR_10;

 *VAR_3 = 0;

 if (!VAR_2)
  return 0;

 if (FUNC_5(VAR_0)) {
  if (VAR_1 + VAR_2 >
      VAR_4->sd_sb.sb_bsize - sizeof(struct gfs2_dinode))
   *VAR_3 = 1;
  return 0;
 }

 *VAR_3 = 1;
 VAR_6 = VAR_4->sd_sb.sb_bsize_shift;
 FUNC_0(FUNC_4(VAR_0));
 VAR_10 = (FUNC_6(&VAR_0->i_inode) + VAR_4->sd_sb.sb_bsize - 1) >> VAR_6;
 VAR_7 = VAR_1 >> VAR_6;
 VAR_8 = (VAR_1 + VAR_2 + VAR_4->sd_sb.sb_bsize - 1) >> VAR_6;
 if (VAR_8 > VAR_10)
  return 0;

 VAR_9 = (VAR_8 - VAR_7) << VAR_6;
 do {
  VAR_5.b_state = 0;
  VAR_5.b_size = VAR_9;
  FUNC_3(&VAR_0->i_inode, VAR_7, &VAR_5, 0);
  if (!FUNC_2(&VAR_5))
   return 0;
  VAR_9 -= VAR_5.b_size;
  VAR_7 += (VAR_5.b_size >> VAR_0->i_inode.i_blkbits);
 } while(VAR_9 > 0);

 *VAR_3 = 0;
 return 0;
}
