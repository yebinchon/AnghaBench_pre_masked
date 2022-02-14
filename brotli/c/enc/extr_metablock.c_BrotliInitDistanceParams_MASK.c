
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int max_alphabet_size; int max_distance; } ;
struct TYPE_7__ {int distance_postfix_bits; int num_direct_distance_codes; int alphabet_size_max; int alphabet_size_limit; int max_distance; } ;
struct TYPE_6__ {scalar_t__ large_window; TYPE_2__ dist; } ;
typedef TYPE_1__ BrotliEncoderParams ;
typedef TYPE_2__ BrotliDistanceParams ;
typedef TYPE_3__ BrotliDistanceCodeLimit ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ FUNC_1 (int ,int,int) ;

void FUNC_2(BrotliEncoderParams* VAR_3,
    uint32_t VAR_4, uint32_t VAR_5) {
  BrotliDistanceParams* VAR_6 = &VAR_3->dist;
  uint32_t VAR_7;
  uint32_t VAR_8;
  uint32_t VAR_9;

  VAR_6->distance_postfix_bits = VAR_4;
  VAR_6->num_direct_distance_codes = VAR_5;

  VAR_7 = FUNC_0(
      VAR_4, VAR_5, VAR_2);
  VAR_8 = VAR_7;
  VAR_9 = VAR_5 + (1U << (VAR_2 + VAR_4 + 2)) -
      (1U << (VAR_4 + 2));

  if (VAR_3->large_window) {
    BrotliDistanceCodeLimit VAR_10 = FUNC_1(
        VAR_1, VAR_4, VAR_5);
    VAR_7 = FUNC_0(
        VAR_4, VAR_5, VAR_0);
    VAR_8 = VAR_10.max_alphabet_size;
    VAR_9 = VAR_10.max_distance;
  }

  VAR_6->alphabet_size_max = VAR_7;
  VAR_6->alphabet_size_limit = VAR_8;
  VAR_6->max_distance = VAR_9;
}
