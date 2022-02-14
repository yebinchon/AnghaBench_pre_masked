
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
typedef int handle_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int * FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static handle_t *FUNC_5(struct inode *VAR_0)
{
 handle_t *VAR_1;

 VAR_1 = FUNC_3(VAR_0, FUNC_2(VAR_0));
 if (!FUNC_0(VAR_1))
  return VAR_1;

 FUNC_4(VAR_0->i_sb, FUNC_1(VAR_1));
 return VAR_1;
}
