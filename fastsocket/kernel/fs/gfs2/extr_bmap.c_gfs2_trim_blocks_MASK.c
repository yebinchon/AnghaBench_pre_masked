
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int i_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int ,int ) ;

void FUNC_2(struct inode *VAR_0)
{
 u64 VAR_1 = VAR_0->i_size;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_1);
 FUNC_0(VAR_2 != 0);
}
