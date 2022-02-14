
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct hpfs_sb_info {unsigned int sb_dirband_start; unsigned int sb_dirband_size; } ;
typedef int secno ;


 int FUNC_0 (struct super_block*,int,int,int ) ;
 int FUNC_1 (struct super_block*) ;
 struct hpfs_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;

__attribute__((used)) static secno FUNC_4(struct super_block *VAR_0, secno VAR_1, int VAR_2)
{
 unsigned VAR_3 = VAR_1;
 secno VAR_4;
 struct hpfs_sb_info *VAR_5 = FUNC_2(VAR_0);
 if (VAR_3 < VAR_5->sb_dirband_start)
  VAR_3 = VAR_5->sb_dirband_start;
 if (VAR_3 >= VAR_5->sb_dirband_start + VAR_5->sb_dirband_size)
  VAR_3 = VAR_5->sb_dirband_start + VAR_5->sb_dirband_size - 4;
 VAR_3 -= VAR_5->sb_dirband_start;
 VAR_3 >>= 2;
 if (VAR_2) FUNC_1(VAR_0);
 VAR_4 = FUNC_0(VAR_0, (~0x3fff) | VAR_3, 1, 0);
 if (VAR_2) FUNC_3(VAR_0);
 if (!VAR_4) return 0;
 return ((VAR_4 & 0x3fff) << 2) + VAR_5->sb_dirband_start;
}
