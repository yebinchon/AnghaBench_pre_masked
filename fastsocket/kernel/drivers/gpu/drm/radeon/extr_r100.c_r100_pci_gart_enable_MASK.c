
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int table_addr; int ready; } ;
struct TYPE_4__ {int gtt_start; int gtt_end; int gtt_size; } ;
struct radeon_device {TYPE_1__ gart; TYPE_2__ mc; } ;


 int FUNC_0 (char*,unsigned int,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;

int FUNC_5(struct radeon_device *VAR_6)
{
 uint32_t VAR_7;

 FUNC_4(VAR_6);

 VAR_7 = FUNC_1(VAR_0) | VAR_4;
 FUNC_2(VAR_0, VAR_7);

 FUNC_2(VAR_2, VAR_6->mc.gtt_start);
 FUNC_2(VAR_1, VAR_6->mc.gtt_end);

 FUNC_2(VAR_3, VAR_6->gart.table_addr);
 VAR_7 = FUNC_1(VAR_0) | VAR_5;
 FUNC_2(VAR_0, VAR_7);
 FUNC_3(VAR_6);
 FUNC_0("PCI GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_6->mc.gtt_size >> 20),
   (unsigned long long)VAR_6->gart.table_addr);
 VAR_6->gart.ready = 1;
 return 0;
}
