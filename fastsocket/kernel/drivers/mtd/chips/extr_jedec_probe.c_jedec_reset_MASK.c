
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct map_info {int dummy; } ;
struct cfi_private {int device_type; scalar_t__ addr_unlock1; scalar_t__ addr_unlock2; } ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int,scalar_t__,int ,struct map_info*,struct cfi_private*,int ,int *) ;

__attribute__((used)) static void FUNC_2(u32 VAR_1, struct map_info *VAR_2, struct cfi_private *VAR_3)
{
 if (VAR_3->addr_unlock1) {
  FUNC_0( VAR_0,
         "reset unlock called %x %x \n",
         VAR_3->addr_unlock1,VAR_3->addr_unlock2);
  FUNC_1(0xaa, VAR_3->addr_unlock1, VAR_1, VAR_2, VAR_3, VAR_3->device_type, ((void*)0));
  FUNC_1(0x55, VAR_3->addr_unlock2, VAR_1, VAR_2, VAR_3, VAR_3->device_type, ((void*)0));
 }

 FUNC_1(0xF0, VAR_3->addr_unlock1, VAR_1, VAR_2, VAR_3, VAR_3->device_type, ((void*)0));





 FUNC_1(0xFF, 0, VAR_1, VAR_2, VAR_3, VAR_3->device_type, ((void*)0));

}
