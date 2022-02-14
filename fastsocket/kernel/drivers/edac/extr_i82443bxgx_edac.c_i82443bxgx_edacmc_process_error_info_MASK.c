
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {int ctl_name; } ;
struct i82443bxgx_edacmc_error_info {int eap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mem_ctl_info*,int) ;
 int FUNC_1 (struct mem_ctl_info*,int,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct mem_ctl_info*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mem_ctl_info *VAR_3,
      struct
      i82443bxgx_edacmc_error_info
      *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7, VAR_8, VAR_9;



 VAR_7 = (VAR_4->eap & 0xfffff000);
 VAR_8 = VAR_7 >> VAR_2;
 VAR_9 = VAR_7 - (VAR_8 << VAR_2);

 if (VAR_4->eap & VAR_1) {
  VAR_6 = 1;
  if (VAR_5)
   FUNC_1(VAR_3, VAR_8, VAR_9,


    0, FUNC_0(VAR_3, VAR_8), 0,
    VAR_3->ctl_name);
 }

 if (VAR_4->eap & VAR_0) {
  VAR_6 = 1;
  if (VAR_5)
   FUNC_2(VAR_3, VAR_8, VAR_9,
     FUNC_0(VAR_3, VAR_8),
     VAR_3->ctl_name);
 }

 return VAR_6;
}
