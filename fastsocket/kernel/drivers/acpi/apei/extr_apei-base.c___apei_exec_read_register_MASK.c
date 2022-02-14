
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int bit_offset; } ;
struct acpi_whea_header {int mask; TYPE_1__ register_region; } ;


 int FUNC_0 (int*,TYPE_1__*) ;

int FUNC_1(struct acpi_whea_header *VAR_0, u64 *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_0->register_region);
 if (VAR_2)
  return VAR_2;
 *VAR_1 >>= VAR_0->register_region.bit_offset;
 *VAR_1 &= VAR_0->mask;

 return 0;
}
