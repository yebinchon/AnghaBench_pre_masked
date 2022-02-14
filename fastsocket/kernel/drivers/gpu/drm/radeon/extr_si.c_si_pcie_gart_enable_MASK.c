
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int table_addr; int ready; int * robj; } ;
struct TYPE_7__ {int gtt_start; int gtt_end; int gtt_size; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int max_pfn; } ;
struct radeon_device {TYPE_4__ gart; TYPE_3__ mc; TYPE_2__ dummy_page; TYPE_1__ vm_manager; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
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
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_5 (int,int) ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_10(struct radeon_device *VAR_40)
{
 int VAR_41, VAR_42;

 if (VAR_40->gart.robj == ((void*)0)) {
  FUNC_6(VAR_40->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_2;
 }
 VAR_41 = FUNC_8(VAR_40);
 if (VAR_41)
  return VAR_41;
 FUNC_7(VAR_40);

 FUNC_5(VAR_12,
        (0xA << 7) |
        VAR_5 |
        VAR_19 |
        VAR_3 |
        VAR_20);

 FUNC_5(VAR_35, VAR_6 |
        VAR_8 |
        VAR_7 |
        FUNC_2(7) |
        FUNC_0(1));
 FUNC_5(VAR_36, VAR_9 | VAR_10);
 FUNC_5(VAR_37, VAR_11 |
        FUNC_3(0));

 FUNC_5(VAR_27, VAR_40->mc.gtt_start >> 12);
 FUNC_5(VAR_26, VAR_40->mc.gtt_end >> 12);
 FUNC_5(VAR_25, VAR_40->gart.table_addr >> 12);
 FUNC_5(VAR_28,
   (u32)(VAR_40->dummy_page.addr >> 12));
 FUNC_5(VAR_24, 0);
 FUNC_5(VAR_23, (VAR_4 | FUNC_4(0) |
      VAR_15));

 FUNC_5(0x15D4, 0);
 FUNC_5(0x15D8, 0);
 FUNC_5(0x15DC, 0);



 FUNC_5(VAR_32, 0);
 FUNC_5(VAR_31, VAR_40->vm_manager.max_pfn);




 for (VAR_42 = 1; VAR_42 < 16; VAR_42++) {
  if (VAR_42 < 8)
   FUNC_5(VAR_25 + (VAR_42 << 2),
          VAR_40->gart.table_addr >> 12);
  else
   FUNC_5(VAR_34 + ((VAR_42 - 8) << 2),
          VAR_40->gart.table_addr >> 12);
 }


 FUNC_5(VAR_33,
        (u32)(VAR_40->dummy_page.addr >> 12));
 FUNC_5(VAR_30, 4);
 FUNC_5(VAR_29, VAR_4 | FUNC_4(1) |
    VAR_16 |
    VAR_15 |
    VAR_1 |
    VAR_0 |
    VAR_14 |
    VAR_13 |
    VAR_22 |
    VAR_21 |
    VAR_18 |
    VAR_17 |
    VAR_39 |
    VAR_38);

 FUNC_9(VAR_40);
 FUNC_1("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_40->mc.gtt_size >> 20),
   (unsigned long long)VAR_40->gart.table_addr);
 VAR_40->gart.ready = 1;
 return 0;
}
