
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int table_addr; int ready; int * robj; } ;
struct TYPE_5__ {int gtt_start; int gtt_end; int gtt_size; } ;
struct TYPE_4__ {int addr; } ;
struct radeon_device {int flags; scalar_t__ family; TYPE_3__ gart; TYPE_2__ mc; TYPE_1__ dummy_page; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,unsigned int,unsigned long long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_6 (int ) ;
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
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_35)
{
 u32 VAR_36;
 int VAR_37;

 if (VAR_35->gart.robj == ((void*)0)) {
  FUNC_8(VAR_35->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_4;
 }
 VAR_37 = FUNC_11(VAR_35);
 if (VAR_37)
  return VAR_37;
 FUNC_10(VAR_35);

 FUNC_7(VAR_32, VAR_8 | VAR_9 |
    VAR_10 |
    FUNC_5(7));
 FUNC_7(VAR_33, 0);
 FUNC_7(VAR_34, FUNC_0(0) | FUNC_1(2));

 VAR_36 = VAR_7 | VAR_6 |
  VAR_24 |
  VAR_25 |
  FUNC_4(5) | FUNC_3(5);
 if (VAR_35->flags & VAR_22) {
  FUNC_7(VAR_11, VAR_36);
  FUNC_7(VAR_12, VAR_36);
  FUNC_7(VAR_13, VAR_36);
 } else {
  FUNC_7(VAR_18, VAR_36);
  FUNC_7(VAR_19, VAR_36);
  FUNC_7(VAR_20, VAR_36);
  if ((VAR_35->family == VAR_3) ||
      (VAR_35->family == VAR_1) ||
      (VAR_35->family == VAR_2) ||
      (VAR_35->family == VAR_0))
   FUNC_7(VAR_21, VAR_36);
 }
 FUNC_7(VAR_14, VAR_36);
 FUNC_7(VAR_15, VAR_36);
 FUNC_7(VAR_16, VAR_36);
 FUNC_7(VAR_17, VAR_36);
 FUNC_7(VAR_29, VAR_35->mc.gtt_start >> 12);
 FUNC_7(VAR_28, VAR_35->mc.gtt_end >> 12);
 FUNC_7(VAR_27, VAR_35->gart.table_addr >> 12);
 FUNC_7(VAR_26, VAR_5 | FUNC_6(0) |
    VAR_23);
 FUNC_7(VAR_30,
   (u32)(VAR_35->dummy_page.addr >> 12));
 FUNC_7(VAR_31, 0);

 FUNC_9(VAR_35);
 FUNC_2("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_35->mc.gtt_size >> 20),
   (unsigned long long)VAR_35->gart.table_addr);
 VAR_35->gart.ready = 1;
 return 0;
}
