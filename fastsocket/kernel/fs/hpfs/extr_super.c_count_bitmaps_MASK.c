
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int sb_fs_size; int * sb_bmp_dir; } ;


 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;

__attribute__((used)) static unsigned FUNC_2(struct super_block *VAR_0)
{
 unsigned VAR_1, VAR_2, VAR_3;
 VAR_3 = (FUNC_1(VAR_0)->sb_fs_size + 0x3fff) >> 14;
 VAR_2 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++)
  VAR_2 += FUNC_0(VAR_0, FUNC_1(VAR_0)->sb_bmp_dir[VAR_1]);
 return VAR_2;
}
