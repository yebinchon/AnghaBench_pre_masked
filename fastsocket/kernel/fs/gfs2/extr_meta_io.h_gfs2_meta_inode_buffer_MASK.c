
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_no_addr; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct gfs2_inode*,int ,int ,struct buffer_head**) ;

__attribute__((used)) static inline int FUNC_1(struct gfs2_inode *VAR_0,
      struct buffer_head **VAR_1)
{
 return FUNC_0(VAR_0, 0, VAR_0->i_no_addr, VAR_1);
}
