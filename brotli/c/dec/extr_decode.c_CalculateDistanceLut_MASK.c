
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef unsigned int uint32_t ;
struct TYPE_7__ {unsigned int alphabet_size_limit; } ;
struct TYPE_8__ {unsigned int* dist_offset; scalar_t__* dist_extra_bits; } ;
struct TYPE_6__ {TYPE_3__ body; } ;
struct TYPE_9__ {unsigned int distance_postfix_bits; unsigned int num_direct_distance_codes; TYPE_2__ distance_hgroup; TYPE_1__ arena; } ;
typedef TYPE_3__ BrotliMetablockBodyArena ;
typedef TYPE_4__ BrotliDecoderState ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(BrotliDecoderState* VAR_1) {
  BrotliMetablockBodyArena* VAR_2 = &VAR_1->arena.body;
  uint32_t VAR_3 = VAR_1->distance_postfix_bits;
  uint32_t VAR_4 = VAR_1->num_direct_distance_codes;
  uint32_t VAR_5 = VAR_1->distance_hgroup.alphabet_size_limit;
  uint32_t VAR_6 = 1u << VAR_3;
  uint32_t VAR_7;
  uint32_t VAR_8 = 1;
  uint32_t VAR_9 = 0;


  uint32_t VAR_10 = VAR_0;


  for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {
    VAR_2->dist_extra_bits[VAR_10] = 0;
    VAR_2->dist_offset[VAR_10] = VAR_7 + 1;
    ++VAR_10;
  }


  while (VAR_10 < VAR_5) {
    uint32_t VAR_11 = VAR_4 + ((((2 + VAR_9) << VAR_8) - 4) << VAR_3) + 1;

    for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
      VAR_2->dist_extra_bits[VAR_10] = (uint8_t)VAR_8;
      VAR_2->dist_offset[VAR_10] = VAR_11 + VAR_7;
      ++VAR_10;
    }
    VAR_8 = VAR_8 + VAR_9;
    VAR_9 = VAR_9 ^ 1;
  }
}
