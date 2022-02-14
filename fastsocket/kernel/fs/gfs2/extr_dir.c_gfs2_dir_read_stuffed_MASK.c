
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct gfs2_inode {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_2 (char*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_0, char *VAR_1,
     u64 VAR_2, unsigned int VAR_3)
{
 struct buffer_head *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, &VAR_4);
 if (!VAR_5) {
  VAR_2 += sizeof(struct gfs2_dinode);
  FUNC_2(VAR_1, VAR_4->b_data + VAR_2, VAR_3);
  FUNC_0(VAR_4);
 }

 return (VAR_5) ? VAR_5 : VAR_3;
}
