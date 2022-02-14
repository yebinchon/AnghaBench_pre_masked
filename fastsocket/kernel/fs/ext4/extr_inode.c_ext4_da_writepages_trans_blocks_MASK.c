
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int i_reserved_data_blocks; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2)->i_reserved_data_blocks;







 if (!(FUNC_2(VAR_2, VAR_0)) &&
     (VAR_3 > VAR_1))
  VAR_3 = VAR_1;

 return FUNC_1(VAR_2, VAR_3);
}
