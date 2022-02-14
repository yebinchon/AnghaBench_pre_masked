
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int index; } ;
struct gfs2_inode {int i_inode; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {int b_size; scalar_t__ b_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (struct page*,int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (void*,scalar_t__,int) ;
 int FUNC_8 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct page*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct gfs2_inode *VAR_2, struct page *VAR_3)
{
 struct buffer_head *VAR_4;
 u64 VAR_5 = FUNC_4(&VAR_2->i_inode);
 void *VAR_6;
 int VAR_7;






 if (FUNC_9(VAR_3->index)) {
  FUNC_10(VAR_3, 0, VAR_1);
  FUNC_0(VAR_3);
  return 0;
 }

 VAR_7 = FUNC_3(VAR_2, &VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_5(VAR_3, VAR_0);
 if (VAR_5 > (VAR_4->b_size - sizeof(struct gfs2_dinode)))
  VAR_5 = (VAR_4->b_size - sizeof(struct gfs2_dinode));
 FUNC_7(VAR_6, VAR_4->b_data + sizeof(struct gfs2_dinode), VAR_5);
 FUNC_8(VAR_6 + VAR_5, 0, VAR_1 - VAR_5);
 FUNC_6(VAR_6, VAR_0);
 FUNC_2(VAR_3);
 FUNC_1(VAR_4);
 FUNC_0(VAR_3);

 return 0;
}
