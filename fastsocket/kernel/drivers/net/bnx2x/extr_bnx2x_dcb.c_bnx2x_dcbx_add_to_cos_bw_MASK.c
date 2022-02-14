
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cos_entry_help_data {scalar_t__ cos_bw; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct bnx2x *VAR_1,
         struct cos_entry_help_data *VAR_2,
         u8 VAR_3)
{
 if (VAR_2->cos_bw == VAR_0)
  VAR_2->cos_bw = VAR_3;
 else
  VAR_2->cos_bw += VAR_3;
}
