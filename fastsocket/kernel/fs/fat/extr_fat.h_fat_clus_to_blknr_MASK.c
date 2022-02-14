
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_sb_info {int sec_per_clus; int data_start; } ;
typedef int sector_t ;


 int VAR_0 ;

__attribute__((used)) static inline sector_t FUNC_0(struct msdos_sb_info *VAR_1, int VAR_2)
{
 return ((sector_t)VAR_2 - VAR_0) * VAR_1->sec_per_clus
  + VAR_1->data_start;
}
