
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ipath_devdata {int ibcs_lts_mask; int ibcs_ls_shift; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u32 FUNC_0(struct ipath_devdata *VAR_2, u64 VAR_3)
{
 u32 VAR_4;
 VAR_4 = (u32)(VAR_3 >> VAR_1) &
  VAR_2->ibcs_lts_mask;
 VAR_4 |= (u32)(VAR_3 &
  (VAR_0 << VAR_2->ibcs_ls_shift));
 return VAR_4;
}
