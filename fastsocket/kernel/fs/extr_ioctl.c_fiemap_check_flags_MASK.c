
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fiemap_extent_info {int fi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct fiemap_extent_info *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_2->fi_flags & ~(VAR_1 & VAR_3);
 if (VAR_4) {
  VAR_2->fi_flags = VAR_4;
  return -VAR_0;
 }
 return 0;
}
