
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct fchs_s {int ox_id; void* s_id; void* d_id; int cat_info; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct fchs_s*,int *,int) ;

u16
FUNC_2(struct fchs_s *VAR_2, u32 VAR_3, u32 VAR_4, u16 VAR_5)
{
 FUNC_1(VAR_2, &VAR_1, sizeof(struct fchs_s));
 VAR_2->cat_info = VAR_0;
 VAR_2->d_id = (VAR_3);
 VAR_2->s_id = (VAR_4);
 VAR_2->ox_id = FUNC_0(VAR_5);

 return sizeof(struct fchs_s);
}
