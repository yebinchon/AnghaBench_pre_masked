
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int table_addr; int ready; int * robj; } ;
struct TYPE_3__ {int gtt_start; int gtt_end; int vram_start; int vram_end; int gtt_size; } ;
struct radeon_device {TYPE_2__ gart; TYPE_1__ mc; int dev; } ;


 int FUNC_0 (char*,unsigned int,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_21(struct radeon_device *VAR_16)
{
 u32 VAR_17;
 int VAR_18, VAR_19;

 if (VAR_16->gart.robj == ((void*)0)) {
  FUNC_17(VAR_16->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_0;
 }
 VAR_18 = FUNC_19(VAR_16);
 if (VAR_18)
  return VAR_18;
 FUNC_18(VAR_16);

 VAR_17 = FUNC_1(VAR_1) & ~VAR_2;
 FUNC_15(VAR_1, VAR_17);

 FUNC_16(VAR_4,
    (FUNC_4(6) |
     FUNC_5(6)));

 for (VAR_19 = 0; VAR_19 < 19; VAR_19++) {
  FUNC_16(VAR_12 + VAR_19,
     FUNC_12(1) |
     FUNC_13(
      VAR_14) |
     FUNC_14(
      VAR_15) |
     FUNC_9(3) |
     FUNC_11(1) |
     FUNC_10(3));
 }

 FUNC_16(VAR_5,
    FUNC_7(1) |
    FUNC_8(VAR_13));


 for (VAR_19 = 1; VAR_19 < 8; VAR_19++)
  FUNC_16(VAR_5 + VAR_19, 0);


 FUNC_16(VAR_9,
    VAR_16->gart.table_addr);
 FUNC_16(VAR_10, VAR_16->mc.gtt_start);
 FUNC_16(VAR_11, VAR_16->mc.gtt_end);
 FUNC_16(VAR_8, 0);


 FUNC_16(VAR_6, VAR_16->mc.vram_start);
 FUNC_16(VAR_7, VAR_16->mc.vram_end);


 VAR_17 = FUNC_2(VAR_4);
 FUNC_16(VAR_4, (VAR_17 | FUNC_6(1)));
 VAR_17 = FUNC_2(VAR_3);
 FUNC_16(VAR_3, (VAR_17 | FUNC_3(1)));
 FUNC_20(VAR_16);
 FUNC_0("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_16->mc.gtt_size >> 20),
   (unsigned long long)VAR_16->gart.table_addr);
 VAR_16->gart.ready = 1;
 return 0;
}
