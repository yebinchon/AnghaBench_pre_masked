
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int block_split_code_; int num_block_types_; int num_blocks_; int block_lengths_; int block_types_; } ;
typedef int HuffmanTree ;
typedef TYPE_1__ BlockEncoder ;


 int FUNC_0 (int ,int ,int ,int ,int *,int *,size_t*,int *) ;

__attribute__((used)) static void FUNC_1(BlockEncoder* VAR_0,
    HuffmanTree* VAR_1, size_t* VAR_2, uint8_t* VAR_3) {
  FUNC_0(VAR_0->block_types_, VAR_0->block_lengths_,
      VAR_0->num_blocks_, VAR_0->num_block_types_, VAR_1, &VAR_0->block_split_code_,
      VAR_2, VAR_3);
}
