
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct save_area_s390x {int clk_cmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int ,int *,int,int ) ;

__attribute__((used)) static void *FUNC_1(void *VAR_2, struct save_area_s390x *VAR_3)
{
 return FUNC_0(VAR_2, VAR_1, &VAR_3->clk_cmp,
         sizeof(VAR_3->clk_cmp), VAR_0);
}
