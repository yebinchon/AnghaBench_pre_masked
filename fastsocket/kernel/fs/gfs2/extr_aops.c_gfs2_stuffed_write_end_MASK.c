
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct page {int dummy; } ;
struct inode {unsigned int i_size; } ;
struct gfs2_sbd {struct inode* sd_rindex; scalar_t__ sd_rindex_uptodate; struct inode* sd_statfs_inode; } ;
struct gfs2_inode {int i_gh; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {unsigned char* b_data; int b_size; } ;
typedef unsigned int loff_t ;


 int FUNC_0 (int) ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 struct gfs2_sbd* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct gfs2_sbd*) ;
 int FUNC_11 (struct inode*,unsigned int) ;
 void* FUNC_12 (struct page*,int ) ;
 int FUNC_13 (void*,int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (unsigned char*,void*,unsigned int) ;
 int FUNC_16 (void*,int ,unsigned int) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_1, struct buffer_head *VAR_2,
      loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
      struct page *VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_1(VAR_1);
 struct gfs2_sbd *VAR_8 = FUNC_2(VAR_1);
 struct gfs2_inode *VAR_9 = FUNC_1(VAR_8->sd_statfs_inode);
 u64 VAR_10 = VAR_3 + VAR_5;
 void *VAR_11;
 unsigned char *VAR_12 = VAR_2->b_data + sizeof(struct gfs2_dinode);

 FUNC_0((VAR_3 + VAR_4) > (VAR_2->b_size - sizeof(struct gfs2_dinode)));
 VAR_11 = FUNC_12(VAR_6, VAR_0);
 FUNC_15(VAR_12 + VAR_3, VAR_11 + VAR_3, VAR_5);
 FUNC_16(VAR_11 + VAR_3 + VAR_5, 0, VAR_4 - VAR_5);
 FUNC_7(VAR_6);
 FUNC_13(VAR_11, VAR_0);

 if (!FUNC_3(VAR_6))
  FUNC_4(VAR_6);
 FUNC_18(VAR_6);
 FUNC_17(VAR_6);

 if (VAR_5) {
  if (VAR_1->i_size < VAR_10)
   FUNC_11(VAR_1, VAR_10);
  FUNC_14(VAR_1);
 }

 if (VAR_1 == VAR_8->sd_rindex) {
  FUNC_5(VAR_1);
  VAR_8->sd_rindex_uptodate = 0;
 }

 FUNC_6(VAR_2);
 FUNC_10(VAR_8);
 if (VAR_1 == VAR_8->sd_rindex) {
  FUNC_8(&VAR_9->i_gh);
  FUNC_9(&VAR_9->i_gh);
 }
 FUNC_8(&VAR_7->i_gh);
 FUNC_9(&VAR_7->i_gh);
 return VAR_5;
}
