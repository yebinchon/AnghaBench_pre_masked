
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*,int) ;
 struct buffer_head* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct buffer_head*,int ,int ) ;
 int FUNC_3 (int ,struct buffer_head*) ;

int FUNC_4(struct gfs2_inode *VAR_2, u64 VAR_3,
       struct buffer_head **VAR_4)
{
 struct buffer_head *VAR_5;

 VAR_5 = FUNC_1(VAR_2->i_gl, VAR_3);
 FUNC_3(VAR_2->i_gl, VAR_5);
 FUNC_2(VAR_5, VAR_1, VAR_0);
 FUNC_0(VAR_5, sizeof(struct gfs2_meta_header));
 *VAR_4 = VAR_5;
 return 0;
}
