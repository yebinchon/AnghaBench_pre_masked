
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int * i_fop; int * i_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode * VAR_2)
{
 VAR_2->i_op = &VAR_0;
 VAR_2->i_fop = &VAR_1;


 FUNC_0(VAR_2);
 return 0;
}
