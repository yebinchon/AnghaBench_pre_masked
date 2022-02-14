
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct inode *FUNC_3(struct inode *VAR_4)
{
 FUNC_1(&VAR_3);
 if (!(VAR_4->i_state & (VAR_1|VAR_0|VAR_2)))
  FUNC_0(VAR_4);
 else





  VAR_4 = ((void*)0);
 FUNC_2(&VAR_3);
 return VAR_4;
}
