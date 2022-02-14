
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct exofs_i_info {scalar_t__* i_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct exofs_i_info* FUNC_1 (struct inode*) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_0)
{
 struct exofs_i_info *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0->i_mode) && (VAR_1->i_data[0] != 0);
}
