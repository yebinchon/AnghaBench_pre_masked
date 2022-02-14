
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {char* i81x_gtt_table; int num_dcache_entries; TYPE_1__* pcidev; scalar_t__ registers; scalar_t__ gtt_bus_addr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 TYPE_2__ VAR_9 ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(void)
{
 u32 VAR_10;
 char *VAR_11;


 VAR_11 = FUNC_1(VAR_4);
 if (VAR_11 == ((void*)0))
  return -VAR_0;
 VAR_9.i81x_gtt_table = VAR_11;

 FUNC_4(VAR_9.pcidev, VAR_5, &VAR_10);
 VAR_10 &= 0xfff80000;

 VAR_9.registers = FUNC_3(VAR_10, FUNC_0(64));
 if (!VAR_9.registers)
  return -VAR_0;

 FUNC_7(FUNC_6(VAR_11) | VAR_7,
        VAR_9.registers+VAR_6);

 VAR_9.gtt_bus_addr = VAR_10 + VAR_8;

 if ((FUNC_5(VAR_9.registers+VAR_1)
  & VAR_2) == VAR_3) {
  FUNC_2(&VAR_9.pcidev->dev,
    "detected 4MB dedicated video ram\n");
  VAR_9.num_dcache_entries = 1024;
 }

 return 0;
}
