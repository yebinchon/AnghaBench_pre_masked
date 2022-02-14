
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ipath_devdata {int ibcs_ls_shift; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline u32 FUNC_0(struct ipath_devdata *VAR_3, u64 VAR_4)
{
 u32 VAR_5 = (u32)(VAR_4 >> VAR_3->ibcs_ls_shift) &
  VAR_0;
 if (VAR_5 == VAR_2)
  VAR_5 = VAR_1;
 return VAR_5;
}
