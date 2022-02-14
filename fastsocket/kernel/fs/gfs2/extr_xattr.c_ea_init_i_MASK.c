
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_eattr; } ;
struct gfs2_ea_request {int dummy; } ;
struct buffer_head {int b_blocknr; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_3 (struct gfs2_inode*,int ,struct gfs2_ea_request*) ;

__attribute__((used)) static int FUNC_4(struct gfs2_inode *VAR_0, struct gfs2_ea_request *VAR_1,
       void *VAR_2)
{
 struct buffer_head *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_0->i_eattr = VAR_3->b_blocknr;
 VAR_4 = FUNC_3(VAR_0, FUNC_0(VAR_3), VAR_1);

 FUNC_1(VAR_3);

 return VAR_4;
}
