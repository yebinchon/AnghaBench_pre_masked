
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {TYPE_3__* s_bdev; } ;
struct inode {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_5__ {int flush; } ;
struct TYPE_8__ {TYPE_1__ options; } ;
struct TYPE_7__ {TYPE_2__* bd_inode; } ;
struct TYPE_6__ {struct address_space* i_mapping; } ;


 TYPE_4__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct address_space*) ;
 int FUNC_2 (struct inode*) ;

int FUNC_3(struct super_block *VAR_0, struct inode *VAR_1, struct inode *VAR_2)
{
 int VAR_3 = 0;
 if (!FUNC_0(VAR_0)->options.flush)
  return 0;
 if (VAR_1)
  VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3 && VAR_2)
  VAR_3 = FUNC_2(VAR_2);
 if (!VAR_3) {
  struct address_space *VAR_4 = VAR_0->s_bdev->bd_inode->i_mapping;
  VAR_3 = FUNC_1(VAR_4);
 }
 return VAR_3;
}
