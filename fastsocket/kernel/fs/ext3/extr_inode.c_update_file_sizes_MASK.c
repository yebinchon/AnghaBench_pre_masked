
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {unsigned int i_size; } ;
typedef unsigned int loff_t ;
struct TYPE_2__ {unsigned int i_disksize; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,unsigned int) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0, loff_t VAR_1, unsigned VAR_2)
{

 if (VAR_1 + VAR_2 > VAR_0->i_size)
  FUNC_1(VAR_0, VAR_1 + VAR_2);
 if (VAR_1 + VAR_2 > FUNC_0(VAR_0)->i_disksize) {
  FUNC_0(VAR_0)->i_disksize = VAR_1 + VAR_2;
  FUNC_2(VAR_0);
 }
}
