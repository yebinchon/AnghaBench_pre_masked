
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ipath_devdata {int ibcs_lts_mask; } ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct ipath_devdata *VAR_1, u64 VAR_2)
{
 return (u32)(VAR_2 >> VAR_0) &
  VAR_1->ibcs_lts_mask;
}
