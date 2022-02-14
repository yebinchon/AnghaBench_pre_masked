
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ num_transforms; } ;
struct TYPE_4__ {int cutoffTransforms; int cutoffTransformsCount; int dict_words; int buckets; int hash_table_lengths; int hash_table_words; scalar_t__ num_transforms; int words; } ;
typedef TYPE_1__ BrotliEncoderDictionary ;


 int FUNC_0 () ;
 TYPE_3__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_2(BrotliEncoderDictionary* VAR_6) {
  VAR_6->words = FUNC_0();
  VAR_6->num_transforms = (uint32_t)FUNC_1()->num_transforms;

  VAR_6->hash_table_words = VAR_4;
  VAR_6->hash_table_lengths = VAR_3;
  VAR_6->buckets = VAR_2;
  VAR_6->dict_words = VAR_5;

  VAR_6->cutoffTransformsCount = VAR_1;
  VAR_6->cutoffTransforms = VAR_0;
}
