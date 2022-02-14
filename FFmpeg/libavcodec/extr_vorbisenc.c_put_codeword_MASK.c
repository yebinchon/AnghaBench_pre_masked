
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nentries; int* lens; int * codewords; } ;
typedef TYPE_1__ vorbis_enc_codebook ;
struct TYPE_8__ {int size_in_bits; } ;
typedef TYPE_2__ PutBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_4(PutBitContext *VAR_1, vorbis_enc_codebook *VAR_2,
                               int VAR_3)
{
    FUNC_1(VAR_3 >= 0);
    FUNC_1(VAR_3 < VAR_2->nentries);
    FUNC_1(VAR_2->lens[VAR_3]);
    if (VAR_1->size_in_bits - FUNC_3(VAR_1) < VAR_2->lens[VAR_3])
        return FUNC_0(VAR_0);
    FUNC_2(VAR_1, VAR_2->lens[VAR_3], VAR_2->codewords[VAR_3]);
    return 0;
}
