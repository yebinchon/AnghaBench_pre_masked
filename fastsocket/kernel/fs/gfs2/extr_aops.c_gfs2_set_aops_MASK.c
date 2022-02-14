
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_mapping; } ;
struct gfs2_inode {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int FUNC_0 () ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct gfs2_inode*) ;
 scalar_t__ FUNC_3 (struct gfs2_inode*) ;
 scalar_t__ FUNC_4 (struct gfs2_inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5(struct inode *VAR_3)
{
 struct gfs2_inode *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_4(VAR_4))
  VAR_3->i_mapping->a_ops = &VAR_2;
 else if (FUNC_3(VAR_4))
  VAR_3->i_mapping->a_ops = &VAR_1;
 else if (FUNC_2(VAR_4))
  VAR_3->i_mapping->a_ops = &VAR_0;
 else
  FUNC_0();
}
