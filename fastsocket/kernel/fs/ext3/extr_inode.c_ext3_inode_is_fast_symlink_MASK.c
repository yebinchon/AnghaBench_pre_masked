
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_blocks; int i_mode; TYPE_1__* i_sb; } ;
struct TYPE_4__ {scalar_t__ i_file_acl; } ;
struct TYPE_3__ {int s_blocksize; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0)->i_file_acl ?
  (VAR_0->i_sb->s_blocksize >> 9) : 0;

 return (FUNC_1(VAR_0->i_mode) && VAR_0->i_blocks - VAR_1 == 0);
}
