
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minix_sb_info {unsigned long s_log_zone_size; scalar_t__ s_firstdatazone; scalar_t__ s_nzones; int s_zmap_blocks; int s_zmap; } ;


 unsigned long FUNC_0 (int ,int ,scalar_t__) ;

unsigned long FUNC_1(struct minix_sb_info *VAR_0)
{
 return (FUNC_0(VAR_0->s_zmap, VAR_0->s_zmap_blocks,
  VAR_0->s_nzones - VAR_0->s_firstdatazone + 1)
  << VAR_0->s_log_zone_size);
}
