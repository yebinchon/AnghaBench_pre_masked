
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nlm_file {TYPE_3__* f_file; } ;
struct TYPE_5__ {TYPE_1__* mnt; } ;
struct TYPE_6__ {TYPE_2__ f_path; } ;
struct TYPE_4__ {struct super_block* mnt_sb; } ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, struct nlm_file *VAR_1)
{
 struct super_block *VAR_2 = VAR_0;

 return VAR_2 == VAR_1->f_file->f_path.mnt->mnt_sb;
}
