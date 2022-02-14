
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rx_ring_info {int rbr_block_size; int* rbr_sizes; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static int FUNC_0(struct rx_ring_info *VAR_24, u64 *VAR_25)
{
 u64 VAR_26 = 0;

 *VAR_25 = 0;
 switch (VAR_24->rbr_block_size) {
 case 4 * 1024:
  VAR_26 |= (VAR_3 << VAR_17);
  break;
 case 8 * 1024:
  VAR_26 |= (VAR_4 << VAR_17);
  break;
 case 16 * 1024:
  VAR_26 |= (VAR_1 << VAR_17);
  break;
 case 32 * 1024:
  VAR_26 |= (VAR_2 << VAR_17);
  break;
 default:
  return -VAR_0;
 }
 VAR_26 |= VAR_23;
 switch (VAR_24->rbr_sizes[2]) {
 case 2 * 1024:
  VAR_26 |= (VAR_14 << VAR_20);
  break;
 case 4 * 1024:
  VAR_26 |= (VAR_15 << VAR_20);
  break;
 case 8 * 1024:
  VAR_26 |= (VAR_16 << VAR_20);
  break;
 case 16 * 1024:
  VAR_26 |= (VAR_13 << VAR_20);
  break;

 default:
  return -VAR_0;
 }
 VAR_26 |= VAR_22;
 switch (VAR_24->rbr_sizes[1]) {
 case 1 * 1024:
  VAR_26 |= (VAR_9 << VAR_19);
  break;
 case 2 * 1024:
  VAR_26 |= (VAR_10 << VAR_19);
  break;
 case 4 * 1024:
  VAR_26 |= (VAR_11 << VAR_19);
  break;
 case 8 * 1024:
  VAR_26 |= (VAR_12 << VAR_19);
  break;

 default:
  return -VAR_0;
 }
 VAR_26 |= VAR_21;
 switch (VAR_24->rbr_sizes[0]) {
 case 256:
  VAR_26 |= (VAR_6 << VAR_18);
  break;
 case 512:
  VAR_26 |= (VAR_8 << VAR_18);
  break;
 case 1 * 1024:
  VAR_26 |= (VAR_5 << VAR_18);
  break;
 case 2 * 1024:
  VAR_26 |= (VAR_7 << VAR_18);
  break;

 default:
  return -VAR_0;
 }

 *VAR_25 = VAR_26;
 return 0;
}
