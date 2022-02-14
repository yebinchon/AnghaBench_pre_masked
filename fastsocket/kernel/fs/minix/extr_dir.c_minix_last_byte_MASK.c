
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned long i_size; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned
FUNC_0(struct inode *VAR_2, unsigned long VAR_3)
{
 unsigned VAR_4 = VAR_1;

 if (VAR_3 == (VAR_2->i_size >> VAR_0))
  VAR_4 = VAR_2->i_size & (VAR_1 - 1);
 return VAR_4;
}
