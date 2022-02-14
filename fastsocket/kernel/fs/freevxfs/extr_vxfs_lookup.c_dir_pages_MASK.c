
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct inode {int i_size; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u_long
FUNC_0(struct inode *VAR_2)
{
 return (VAR_2->i_size + VAR_1 - 1) >> VAR_0;
}
