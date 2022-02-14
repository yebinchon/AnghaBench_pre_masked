
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int table_addr; int ready; int * robj; } ;
struct TYPE_3__ {int gtt_start; int gtt_end; int vram_start; int gtt_size; } ;
struct radeon_device {TYPE_2__ gart; TYPE_1__ mc; int dev; } ;


 int FUNC_0 (char*,unsigned int,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

int FUNC_7(struct radeon_device *VAR_13)
{
 uint32_t VAR_14;
 uint32_t VAR_15;
 int VAR_16;

 if (VAR_13->gart.robj == ((void*)0)) {
  FUNC_3(VAR_13->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_0;
 }
 VAR_16 = FUNC_5(VAR_13);
 if (VAR_16)
  return VAR_16;
 FUNC_4(VAR_13);

 VAR_15 = VAR_12;
 FUNC_2(VAR_5, VAR_15);
 FUNC_2(VAR_11, VAR_13->mc.gtt_start);
 VAR_15 = VAR_13->mc.gtt_end & ~VAR_1;
 FUNC_2(VAR_8, VAR_15);
 FUNC_2(VAR_10, 0);
 FUNC_2(VAR_7, 0);
 VAR_14 = VAR_13->gart.table_addr;
 FUNC_2(VAR_4, VAR_14);

 FUNC_2(VAR_3, VAR_13->mc.vram_start);
 FUNC_2(VAR_2, 0);

 FUNC_2(VAR_9, 0);
 VAR_15 = FUNC_1(VAR_5);
 VAR_15 |= VAR_6;
 VAR_15 |= VAR_12;
 FUNC_2(VAR_5, VAR_15);
 FUNC_6(VAR_13);
 FUNC_0("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_13->mc.gtt_size >> 20),
   (unsigned long long)VAR_14);
 VAR_13->gart.ready = 1;
 return 0;
}
