
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int bits_per_raw_sample; int dct_algo; int idct_algo; } ;
struct TYPE_9__ {int bits_per_sample; int dct_algo; int idct_algo; } ;
typedef int PixblockDSPContext ;
typedef int IDCTDSPContext ;
typedef int FDCTDSPContext ;
typedef TYPE_1__ AVDCT ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__**) ;
 int VAR_1 ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_7(AVDCT *VAR_5)
{
    AVCodecContext *VAR_6 = FUNC_2(((void*)0));

    if (!VAR_6)
        return FUNC_0(VAR_0);

    VAR_6->idct_algo = VAR_5->idct_algo;
    VAR_6->dct_algo = VAR_5->dct_algo;
    VAR_6->bits_per_raw_sample = VAR_5->bits_per_sample;
    FUNC_3(&VAR_6);

    return 0;
}
