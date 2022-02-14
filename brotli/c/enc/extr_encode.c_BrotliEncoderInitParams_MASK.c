
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_distance; int alphabet_size_max; int alphabet_size_limit; scalar_t__ num_direct_distance_codes; scalar_t__ distance_postfix_bits; } ;
struct TYPE_5__ {TYPE_1__ dist; int dictionary; void* disable_literal_context_modeling; scalar_t__ size_hint; scalar_t__ stream_offset; scalar_t__ lgblock; int lgwin; int quality; void* large_window; int mode; } ;
typedef TYPE_2__ BrotliEncoderParams ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(BrotliEncoderParams* VAR_6) {
  VAR_6->mode = VAR_0;
  VAR_6->large_window = VAR_3;
  VAR_6->quality = VAR_1;
  VAR_6->lgwin = VAR_2;
  VAR_6->lgblock = 0;
  VAR_6->stream_offset = 0;
  VAR_6->size_hint = 0;
  VAR_6->disable_literal_context_modeling = VAR_3;
  FUNC_1(&VAR_6->dictionary);
  VAR_6->dist.distance_postfix_bits = 0;
  VAR_6->dist.num_direct_distance_codes = 0;
  VAR_6->dist.alphabet_size_max =
      FUNC_0(0, 0, VAR_5);
  VAR_6->dist.alphabet_size_limit = VAR_6->dist.alphabet_size_max;
  VAR_6->dist.max_distance = VAR_4;
}
