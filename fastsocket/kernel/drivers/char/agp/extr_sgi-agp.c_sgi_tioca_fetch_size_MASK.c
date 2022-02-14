
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tioca_kernel {int ca_gfxap_size; int ca_gfxgart_entries; } ;
struct TYPE_4__ {scalar_t__ dev_private_data; } ;
struct TYPE_3__ {int size; int num_entries; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(void)
{
 struct tioca_kernel *VAR_2 =
     (struct tioca_kernel *)VAR_0->dev_private_data;

 VAR_1[0].size = VAR_2->ca_gfxap_size / FUNC_0(1);
 VAR_1[0].num_entries = VAR_2->ca_gfxgart_entries;

 return VAR_1[0].size;
}
