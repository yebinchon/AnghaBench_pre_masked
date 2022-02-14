
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int gtt_mappable_entries; int gtt_total_entries; int PGETBL_save; int needs_dmar; int gma_bus_addr; int pcidev; int stolen_size; scalar_t__ registers; TYPE_2__* driver; int * gtt; int gtt_bus_addr; TYPE_1__* bridge_dev; } ;
struct TYPE_5__ {int (* setup ) () ;int (* cleanup ) () ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_3__ VAR_9 ;
 int * FUNC_8 (int ,int) ;
 int * FUNC_9 (int ,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ,int*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(void)
{
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = VAR_9.driver->setup();
 if (VAR_12 != 0)
  return VAR_12;

 VAR_9.gtt_mappable_entries = FUNC_4();
 VAR_9.gtt_total_entries = FUNC_7();


 VAR_9.PGETBL_save =
  FUNC_12(VAR_9.registers+VAR_3)
   & ~VAR_4;

 if (VAR_1)
  VAR_9.PGETBL_save |= VAR_4;

 FUNC_0(&VAR_9.bridge_dev->dev,
   "detected gtt size: %dK total, %dK mappable\n",
   VAR_9.gtt_total_entries * 4,
   VAR_9.gtt_mappable_entries * 4);

 VAR_11 = VAR_9.gtt_total_entries * 4;

 VAR_9.gtt = ((void*)0);
 if (FUNC_2())
  VAR_9.gtt = FUNC_9(VAR_9.gtt_bus_addr,
            VAR_11);
 if (VAR_9.gtt == ((void*)0))
  VAR_9.gtt = FUNC_8(VAR_9.gtt_bus_addr,
         VAR_11);
 if (VAR_9.gtt == ((void*)0)) {
  VAR_9.driver->cleanup();
  FUNC_10(VAR_9.registers);
  return -VAR_0;
 }

 FUNC_1();

 VAR_9.stolen_size = FUNC_6();

 VAR_9.needs_dmar = VAR_8 && VAR_6 > 2;

 VAR_12 = FUNC_5();
 if (VAR_12 != 0) {
  FUNC_3();
  return VAR_12;
 }

 if (VAR_6 <= 2)
  FUNC_11(VAR_9.pcidev, VAR_2,
          &VAR_10);
 else
  FUNC_11(VAR_9.pcidev, VAR_5,
          &VAR_10);

 VAR_9.gma_bus_addr = (VAR_10 & VAR_7);

 return 0;
}
