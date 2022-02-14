
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {int dummy; } ;
struct i5400_error_info {int ferr_fat_fbd; } ;


 int VAR_0 ;
 int FUNC_0 (struct mem_ctl_info*,struct i5400_error_info*,int) ;
 int FUNC_1 (struct mem_ctl_info*,struct i5400_error_info*) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_1,
    struct i5400_error_info *VAR_2)
{ u32 VAR_3;


 VAR_3 = (VAR_2->ferr_fat_fbd & VAR_0);
 FUNC_0(VAR_1, VAR_2, VAR_3);


 FUNC_1(VAR_1, VAR_2);
}
