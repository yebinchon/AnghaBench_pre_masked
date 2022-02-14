
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct block_device {int dummy; } ;
struct TYPE_7__ {struct block_device* j_dev; TYPE_2__* j_inode; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_6__ {TYPE_1__* i_sb; } ;
struct TYPE_5__ {struct block_device* s_bdev; } ;


 char const* FUNC_0 (struct block_device*,char*) ;

__attribute__((used)) static const char *FUNC_1(journal_t *VAR_0, char *VAR_1)
{
 struct block_device *VAR_2;

 if (VAR_0->j_inode)
  VAR_2 = VAR_0->j_inode->i_sb->s_bdev;
 else
  VAR_2 = VAR_0->j_dev;

 return FUNC_0(VAR_2, VAR_1);
}
