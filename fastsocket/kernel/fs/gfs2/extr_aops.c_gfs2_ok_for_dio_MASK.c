
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_inode; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct gfs2_inode*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct gfs2_inode *VAR_0, int VAR_1, loff_t VAR_2)
{





 if (FUNC_0(VAR_0))
  return 0;

 if (VAR_2 >= FUNC_1(&VAR_0->i_inode))
  return 0;
 return 1;
}
