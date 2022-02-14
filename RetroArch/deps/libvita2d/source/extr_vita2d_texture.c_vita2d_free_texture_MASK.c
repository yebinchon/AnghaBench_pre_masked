
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data_UID; scalar_t__ palette_UID; scalar_t__ depth_UID; scalar_t__ gxm_rtgt; } ;
typedef TYPE_1__ vita2d_texture ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(vita2d_texture *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->gxm_rtgt) {
   FUNC_2(VAR_0->gxm_rtgt);
  }
  if (VAR_0->depth_UID) {
   FUNC_1(VAR_0->depth_UID);
  }
  if (VAR_0->palette_UID) {
   FUNC_1(VAR_0->palette_UID);
  }
  FUNC_1(VAR_0->data_UID);
  FUNC_0(VAR_0);
 }
}
