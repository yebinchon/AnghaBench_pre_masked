
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct omap_board_config_kernel {scalar_t__ tag; void const* data; } ;


 struct omap_board_config_kernel* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const void *FUNC_0(u16 VAR_2, size_t VAR_3, int VAR_4, size_t *VAR_5)
{
 struct omap_board_config_kernel *VAR_6 = ((void*)0);
 int VAR_7;



 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_0[VAR_7].tag == VAR_2) {
   if (VAR_4 == 0) {
    VAR_6 = &VAR_0[VAR_7];
    break;
   } else {
    VAR_4--;
   }
  }
 }
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 return VAR_6->data;
}
