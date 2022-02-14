
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct fchs_s {int ox_id; void* s_id; void* d_id; int f_ctl; int type; int cat_info; int routing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fchs_s*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct fchs_s *VAR_8, u32 VAR_9, u32 VAR_10, u16 VAR_11)
{
 FUNC_1(VAR_8, 0, sizeof(struct fchs_s));

 VAR_8->routing = VAR_6;
 VAR_8->cat_info = VAR_5;
 VAR_8->type = VAR_7;
 VAR_8->f_ctl =
  FUNC_0(VAR_0 | VAR_3 | VAR_2 |
      VAR_1 | VAR_4);
 VAR_8->d_id = VAR_9;
 VAR_8->s_id = VAR_10;
 VAR_8->ox_id = VAR_11;
}
