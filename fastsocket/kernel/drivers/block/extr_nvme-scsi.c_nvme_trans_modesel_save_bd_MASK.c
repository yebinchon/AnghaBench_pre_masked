
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u16 ;
struct nvme_ns {int mode_select_num_blocks; scalar_t__ mode_select_block_len; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct nvme_ns *VAR_2, u8 *VAR_3,
     u16 VAR_4, u16 VAR_5, u8 VAR_6)
{
 u16 VAR_7;

 VAR_7 = VAR_5 / ((VAR_6 == 0) ?
   VAR_1 : VAR_0);


 if (VAR_6 == 0) {

  VAR_2->mode_select_num_blocks =
    (VAR_3[VAR_4 + 1] << 16) +
    (VAR_3[VAR_4 + 2] << 8) +
    (VAR_3[VAR_4 + 3]);

  VAR_2->mode_select_block_len =
    (VAR_3[VAR_4 + 5] << 16) +
    (VAR_3[VAR_4 + 6] << 8) +
    (VAR_3[VAR_4 + 7]);
 } else {

  VAR_2->mode_select_num_blocks =
    (((u64)VAR_3[VAR_4 + 0]) << 56) +
    (((u64)VAR_3[VAR_4 + 1]) << 48) +
    (((u64)VAR_3[VAR_4 + 2]) << 40) +
    (((u64)VAR_3[VAR_4 + 3]) << 32) +
    (((u64)VAR_3[VAR_4 + 4]) << 24) +
    (((u64)VAR_3[VAR_4 + 5]) << 16) +
    (((u64)VAR_3[VAR_4 + 6]) << 8) +
    ((u64)VAR_3[VAR_4 + 7]);

  VAR_2->mode_select_block_len =
    (VAR_3[VAR_4 + 12] << 24) +
    (VAR_3[VAR_4 + 13] << 16) +
    (VAR_3[VAR_4 + 14] << 8) +
    (VAR_3[VAR_4 + 15]);
 }
}
