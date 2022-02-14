
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int i_size; int i_ctime; int i_mtime; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_gl; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct gfs2_inode*,scalar_t__) ;
 int FUNC_2 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_3 (int ,struct buffer_head*) ;
 int FUNC_4 (TYPE_1__*,unsigned int) ;
 int FUNC_5 (scalar_t__,char const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct gfs2_inode *VAR_1, const char *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 struct buffer_head *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_3(VAR_1->i_gl, VAR_5);
 FUNC_5(VAR_5->b_data + VAR_3 + sizeof(struct gfs2_dinode), VAR_2, VAR_4);
 if (VAR_1->i_inode.i_size < VAR_3 + VAR_4)
  FUNC_4(&VAR_1->i_inode, VAR_3 + VAR_4);
 VAR_1->i_inode.i_mtime = VAR_1->i_inode.i_ctime = VAR_0;
 FUNC_1(VAR_1, VAR_5->b_data);

 FUNC_0(VAR_5);

 return VAR_4;
}
