
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int distance_postfix_bits; int num_direct_distance_codes; } ;
struct TYPE_6__ {scalar_t__ quality; scalar_t__ mode; TYPE_1__ dist; } ;
typedef TYPE_2__ BrotliEncoderParams ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(BrotliEncoderParams* VAR_4) {
  uint32_t VAR_5 = 0;
  uint32_t VAR_6 = 0;

  if (VAR_4->quality >= VAR_3) {
    uint32_t VAR_7;
    if (VAR_4->mode == VAR_2) {
      VAR_5 = 1;
      VAR_6 = 12;
    } else {
      VAR_5 = VAR_4->dist.distance_postfix_bits;
      VAR_6 = VAR_4->dist.num_direct_distance_codes;
    }
    VAR_7 = (VAR_6 >> VAR_5) & 0x0F;
    if (VAR_5 > VAR_1 ||
        VAR_6 > VAR_0 ||
        (VAR_7 << VAR_5) != VAR_6) {
      VAR_5 = 0;
      VAR_6 = 0;
    }
  }

  FUNC_0(
      VAR_4, VAR_5, VAR_6);
}
