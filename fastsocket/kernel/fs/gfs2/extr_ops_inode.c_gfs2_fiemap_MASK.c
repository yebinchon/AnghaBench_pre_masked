
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct inode {int i_blkbits; int i_mutex; } ;
struct gfs2_inode {int i_no_addr; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
struct fiemap_extent_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int FUNC_1 (struct inode*,struct fiemap_extent_info*,int,int,int ) ;
 int FUNC_2 (struct fiemap_extent_info*,int ) ;
 int FUNC_3 (struct fiemap_extent_info*,int,int,int,int) ;
 int VAR_5 ;
 int FUNC_4 (struct gfs2_holder*) ;
 int FUNC_5 (int ,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_6, struct fiemap_extent_info *VAR_7,
         u64 VAR_8, u64 VAR_9)
{
 struct gfs2_inode *VAR_10 = FUNC_0(VAR_6);
 struct gfs2_holder VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_7, VAR_3);
 if (VAR_12)
  return VAR_12;

 FUNC_8(&VAR_6->i_mutex);

 VAR_12 = FUNC_5(VAR_10->i_gl, VAR_4, 0, &VAR_11);
 if (VAR_12)
  goto out;

 if (FUNC_6(VAR_10)) {
  u64 VAR_13 = VAR_10->i_no_addr << VAR_6->i_blkbits;
  u64 VAR_14 = FUNC_7(VAR_6);
  u32 VAR_15 = VAR_1|VAR_2|
       VAR_0;
  VAR_13 += sizeof(struct gfs2_dinode);
  VAR_13 += VAR_8;
  if (VAR_8 + VAR_9 > VAR_14)
   VAR_9 = VAR_14 - VAR_8;
  if (VAR_8 < VAR_14)
   VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_13,
            VAR_9, VAR_15);
  if (VAR_12 == 1)
   VAR_12 = 0;
 } else {
  VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9,
          VAR_5);
 }

 FUNC_4(&VAR_11);
out:
 FUNC_9(&VAR_6->i_mutex);
 return VAR_12;
}
