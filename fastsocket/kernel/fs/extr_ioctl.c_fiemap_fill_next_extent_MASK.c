
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef int u32 ;
struct fiemap_extent_info {scalar_t__ fi_extents_max; scalar_t__ fi_extents_mapped; struct fiemap_extent* fi_extents_start; } ;
struct fiemap_extent {int fe_flags; void* fe_length; void* fe_physical; void* fe_logical; } ;
typedef int extent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct fiemap_extent*,struct fiemap_extent*,int) ;
 int FUNC_1 (struct fiemap_extent*,int ,int) ;

int FUNC_2(struct fiemap_extent_info *VAR_8, u64 VAR_9,
       u64 VAR_10, u64 VAR_11, u32 VAR_12)
{
 struct fiemap_extent VAR_13;
 struct fiemap_extent *VAR_14 = VAR_8->fi_extents_start;


 if (VAR_8->fi_extents_max == 0) {
  VAR_8->fi_extents_mapped++;
  return (VAR_12 & VAR_2) ? 1 : 0;
 }

 if (VAR_8->fi_extents_mapped >= VAR_8->fi_extents_max)
  return 1;

 if (VAR_12 & VAR_7)
  VAR_12 |= VAR_4;
 if (VAR_12 & VAR_6)
  VAR_12 |= VAR_1;
 if (VAR_12 & VAR_5)
  VAR_12 |= VAR_3;

 FUNC_1(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.fe_logical = VAR_9;
 VAR_13.fe_physical = VAR_10;
 VAR_13.fe_length = VAR_11;
 VAR_13.fe_flags = VAR_12;

 VAR_14 += VAR_8->fi_extents_mapped;
 if (FUNC_0(VAR_14, &VAR_13, sizeof(VAR_13)))
  return -VAR_0;

 VAR_8->fi_extents_mapped++;
 if (VAR_8->fi_extents_mapped == VAR_8->fi_extents_max)
  return 1;
 return (VAR_12 & VAR_2) ? 1 : 0;
}
