
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct vfe_bus_cfg_data {scalar_t__ rawWritePathSelect; scalar_t__ rawPixelDataSize; int viewCbcrWrPathEn; int viewYWrPathEn; int encCbcrWrPathEn; int encYWrPathEn; int stripeRdPathEn; } ;
struct vfe_axi_bus_cfg {void* rawWritePathSelect; void* rawPixelDataSize; int viewCbcrWrPathEn; int viewYWrPathEn; int encCbcrWrPathEn; int encYWrPathEn; int stripeRdPathEn; } ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (void*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct vfe_bus_cfg_data *VAR_2)
{
 struct vfe_axi_bus_cfg VAR_3;

 VAR_3.stripeRdPathEn = VAR_2->stripeRdPathEn;
 VAR_3.encYWrPathEn = VAR_2->encYWrPathEn;
 VAR_3.encCbcrWrPathEn = VAR_2->encCbcrWrPathEn;
 VAR_3.viewYWrPathEn = VAR_2->viewYWrPathEn;
 VAR_3.viewCbcrWrPathEn = VAR_2->viewCbcrWrPathEn;
 VAR_3.rawPixelDataSize = (uint32_t)VAR_2->rawPixelDataSize;
 VAR_3.rawWritePathSelect = (uint32_t)VAR_2->rawWritePathSelect;


 FUNC_0(*((uint32_t *)&VAR_3), VAR_1->vfebase + VAR_0);
}
