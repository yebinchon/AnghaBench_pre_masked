
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct cos_help_data {struct cos_entry_help_data* data; } ;
struct cos_entry_help_data {size_t pri_join_mask; int pausable; int strict; int cos_bw; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*,size_t) ;
 scalar_t__ FUNC_1 (struct bnx2x*,struct cos_help_data*,size_t,size_t,size_t) ;

__attribute__((used)) static u8 FUNC_2(struct bnx2x *VAR_2,
      struct cos_help_data *VAR_3,
      u8 VAR_4,
      u8 VAR_5,
      u8 VAR_6)
{
 if (FUNC_1(VAR_2, VAR_3, VAR_4,
      VAR_5,
      VAR_6)) {
  struct cos_entry_help_data *VAR_7 = &VAR_3->
          data[VAR_4];

  VAR_7->cos_bw = VAR_1;
  VAR_7->strict = VAR_0;
  VAR_7->pri_join_mask = VAR_6;
  VAR_7->pausable = FUNC_0(VAR_2,
     VAR_7->pri_join_mask);
  return 1;
 }

 return VAR_5;
}
