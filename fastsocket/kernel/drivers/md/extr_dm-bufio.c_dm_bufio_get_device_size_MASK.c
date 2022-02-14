
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_bufio_client {int sectors_per_block_bits; TYPE_1__* bdev; } ;
typedef int sector_t ;
struct TYPE_2__ {int bd_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

sector_t FUNC_1(struct dm_bufio_client *VAR_1)
{
 return FUNC_0(VAR_1->bdev->bd_inode) >>
      (VAR_0 + VAR_1->sectors_per_block_bits);
}
