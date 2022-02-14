
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct strip_mine {int sm_first; unsigned int sm_height; } ;
struct metapath {int dummy; } ;
struct TYPE_2__ {int sb_bsize_shift; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct gfs2_inode {unsigned int i_height; int i_inode; } ;


 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct gfs2_sbd*,int,struct metapath*,unsigned int) ;
 int FUNC_2 (struct gfs2_inode*,int ,int ) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_sbd*) ;
 int FUNC_5 (struct gfs2_inode*,int *,struct metapath*,int ,int ,int,struct strip_mine*) ;

__attribute__((used)) static int FUNC_6(struct gfs2_inode *VAR_1, u64 VAR_2)
{
 struct gfs2_sbd *VAR_3 = FUNC_0(&VAR_1->i_inode);
 unsigned int VAR_4 = VAR_1->i_height;
 u64 VAR_5;
 struct metapath VAR_6;
 int VAR_7;

 if (!VAR_2)
  VAR_5 = 0;
 else
  VAR_5 = (VAR_2 - 1) >> VAR_3->sd_sb.sb_bsize_shift;

 FUNC_1(VAR_3, VAR_5, &VAR_6, VAR_1->i_height);
 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_0, VAR_0);
 if (VAR_7)
  return VAR_7;

 while (VAR_4--) {
  struct strip_mine VAR_8;
  VAR_8.sm_first = !!VAR_2;
  VAR_8.sm_height = VAR_4;

  VAR_7 = FUNC_5(VAR_1, ((void*)0), &VAR_6, 0, 0, 1, &VAR_8);
  if (VAR_7)
   break;
 }

 FUNC_3(VAR_1);

 return VAR_7;
}
