
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {int dirparent; } ;
struct TYPE_4__ {TYPE_1__ new; } ;
struct adfs_dir {TYPE_2__ dirtail; int parent_id; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,unsigned int,unsigned int,struct adfs_dir*) ;
 int FUNC_1 (struct super_block*,char*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct super_block *VAR_2, unsigned int VAR_3, unsigned int VAR_4, struct adfs_dir *VAR_5)
{
 int VAR_6;

 if (VAR_4 != VAR_0)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  FUNC_1(VAR_2, "unable to read directory");
 else
  VAR_5->parent_id = FUNC_2(VAR_5->dirtail.new.dirparent, 3);

 return VAR_6;
}
