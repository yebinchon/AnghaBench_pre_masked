
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct megasas_instance {struct fusion_context* ctrl_context; } ;
struct fusion_context {int fast_path_io; } ;


 scalar_t__ FUNC_0 (struct megasas_instance*) ;
 int FUNC_1 (struct megasas_instance*) ;

u8
FUNC_2(struct megasas_instance *VAR_0)
{
 struct fusion_context *VAR_1 = VAR_0->ctrl_context;

 VAR_1->fast_path_io = 0;
 if (!FUNC_1(VAR_0)) {
  if (FUNC_0(VAR_0)) {
   VAR_1->fast_path_io = 1;
   return 0;
  }
 }
 return 1;
}
