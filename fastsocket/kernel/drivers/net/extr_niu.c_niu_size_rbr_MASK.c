
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rx_ring_info {int rbr_block_size; int rbr_blocks_per_page; int* rbr_sizes; } ;
struct niu {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_3, struct rx_ring_info *VAR_4)
{
 u16 VAR_5;

 VAR_5 = FUNC_0(VAR_1, 15);

 VAR_4->rbr_block_size = 1 << VAR_5;
 VAR_4->rbr_blocks_per_page = 1 << (VAR_1-VAR_5);

 VAR_4->rbr_sizes[0] = 256;
 VAR_4->rbr_sizes[1] = 1024;
 if (VAR_3->dev->mtu > VAR_0) {
  switch (VAR_2) {
  case 4 * 1024:
   VAR_4->rbr_sizes[2] = 4096;
   break;

  default:
   VAR_4->rbr_sizes[2] = 8192;
   break;
  }
 } else {
  VAR_4->rbr_sizes[2] = 2048;
 }
 VAR_4->rbr_sizes[3] = VAR_4->rbr_block_size;
}
