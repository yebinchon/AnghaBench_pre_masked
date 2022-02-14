
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {TYPE_2__* s_bdev; } ;
struct ext4_sb_info {scalar_t__ s_kbytes_written; TYPE_1__* s_buddy_cache; } ;
struct ext4_attr {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int s_sectors_written_start; } ;
struct TYPE_5__ {int bd_part; } ;
struct TYPE_4__ {struct super_block* i_sb; } ;


 TYPE_3__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_2 (char*,int ,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_3(struct ext4_attr *VAR_2,
       struct ext4_sb_info *VAR_3, char *VAR_4)
{
 struct super_block *VAR_5 = VAR_3->s_buddy_cache->i_sb;

 return FUNC_2(VAR_4, VAR_0, "%llu\n",
   VAR_3->s_kbytes_written +
   ((FUNC_1(VAR_5->s_bdev->bd_part, VAR_1[1]) -
     FUNC_0(VAR_5)->s_sectors_written_start) >> 1));
}
