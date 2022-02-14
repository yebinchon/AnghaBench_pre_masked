
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char const*,int,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct inode *VAR_1, const char *VAR_2, int VAR_3)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3,
   !(FUNC_1(VAR_1->i_mapping) & VAR_0));
}
