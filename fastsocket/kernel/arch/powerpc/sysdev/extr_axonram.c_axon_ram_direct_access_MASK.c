
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct block_device {TYPE_3__* bd_part; TYPE_2__* bd_disk; } ;
struct axon_ram_bank {scalar_t__ ph_addr; TYPE_1__* device; int size; } ;
typedef int sector_t ;
typedef int loff_t ;
struct TYPE_6__ {scalar_t__ start_sect; } ;
struct TYPE_5__ {struct axon_ram_bank* private_data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *,char*) ;
 unsigned long FUNC_1 (void**) ;

__attribute__((used)) static int
FUNC_2(struct block_device *VAR_3, sector_t VAR_4,
         void **VAR_5, unsigned long *VAR_6)
{
 struct axon_ram_bank *VAR_7 = VAR_3->bd_disk->private_data;
 loff_t VAR_8;

 VAR_8 = VAR_4;
 if (VAR_3->bd_part != ((void*)0))
  VAR_8 += VAR_3->bd_part->start_sect;
 VAR_8 <<= VAR_0;
 if (VAR_8 >= VAR_7->size) {
  FUNC_0(&VAR_7->device->dev, "Access outside of address space\n");
  return -VAR_1;
 }

 *VAR_5 = (void *)(VAR_7->ph_addr + VAR_8);
 *VAR_6 = FUNC_1(VAR_5) >> VAR_2;

 return 0;
}
