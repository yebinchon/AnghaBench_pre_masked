
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct fchs_s {int cat_info; } ;
struct fc_ba_rjt_s {void* reason_expl; void* reason_code; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct fchs_s*,void*,void*,int ) ;

u16
FUNC_1(struct fchs_s *VAR_1, u32 VAR_2, u32 VAR_3, __be16 VAR_4,
  u32 VAR_5, u32 VAR_6)
{
 struct fc_ba_rjt_s *VAR_7 = (struct fc_ba_rjt_s *) (VAR_1 + 1);

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 VAR_1->cat_info = VAR_0;
 VAR_7->reason_code = VAR_5;
 VAR_7->reason_expl = VAR_6;
 return sizeof(struct fc_ba_rjt_s);
}
