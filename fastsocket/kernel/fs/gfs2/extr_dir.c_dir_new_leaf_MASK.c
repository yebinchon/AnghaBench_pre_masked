
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qstr {int hash; } ;
struct inode {int dummy; } ;
struct gfs2_leaf {int lf_next; int lf_depth; } ;
struct gfs2_inode {int i_depth; int i_inode; int i_gl; } ;
struct buffer_head {scalar_t__ b_data; int b_blocknr; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct gfs2_inode*,int,struct buffer_head**) ;
 int FUNC_6 (struct gfs2_inode*,int ,struct buffer_head**) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct gfs2_inode*,scalar_t__) ;
 int FUNC_9 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_10 (int ,struct buffer_head*) ;
 struct gfs2_leaf* FUNC_11 (struct inode*,struct buffer_head**,int ) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_1, const struct qstr *VAR_2)
{
 struct buffer_head *VAR_3, *VAR_4;
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_1);
 struct gfs2_leaf *VAR_6, *VAR_7;
 int VAR_8;
 u32 VAR_9;
 u64 VAR_10;

 VAR_9 = VAR_2->hash >> (32 - VAR_5->i_depth);
 VAR_8 = FUNC_5(VAR_5, VAR_9, &VAR_4);
 if (VAR_8)
  return VAR_8;
 do {
  VAR_7 = (struct gfs2_leaf *)VAR_4->b_data;
  VAR_10 = FUNC_2(VAR_7->lf_next);
  if (!VAR_10)
   break;
  FUNC_3(VAR_4);
  VAR_8 = FUNC_6(VAR_5, VAR_10, &VAR_4);
  if (VAR_8)
   return VAR_8;
 } while(1);

 FUNC_10(VAR_5->i_gl, VAR_4);

 VAR_6 = FUNC_11(VAR_1, &VAR_3, FUNC_1(VAR_7->lf_depth));
 if (!VAR_6) {
  FUNC_3(VAR_4);
  return -VAR_0;
 }
 VAR_7->lf_next = FUNC_4(VAR_3->b_blocknr);
 FUNC_3(VAR_3);
 FUNC_3(VAR_4);

 VAR_8 = FUNC_9(VAR_5, &VAR_3);
 if (VAR_8)
  return VAR_8;
 FUNC_10(VAR_5->i_gl, VAR_3);
 FUNC_7(&VAR_5->i_inode, 1);
 FUNC_8(VAR_5, VAR_3->b_data);
 FUNC_3(VAR_3);
 return 0;
}
