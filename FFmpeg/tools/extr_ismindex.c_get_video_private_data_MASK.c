
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct Track {int codec_private; int codec_private_size; } ;
struct TYPE_4__ {scalar_t__ codec_id; int extradata_size; int* extradata; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (struct Track*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct Track *VAR_2, AVCodecParameters *VAR_3)
{
    AVIOContext *VAR_4 = ((void*)0);
    uint16_t VAR_5, VAR_6;
    int VAR_7;

    if (VAR_3->codec_id == VAR_0)
        return FUNC_6(VAR_2, VAR_3);

    if ((VAR_7 = FUNC_3(&VAR_4)) < 0)
        goto fail;
    VAR_7 = FUNC_0(VAR_1);
    if (VAR_3->extradata_size < 11 || VAR_3->extradata[0] != 1)
        goto fail;
    VAR_5 = FUNC_1(&VAR_3->extradata[6]);
    if (11 + VAR_5 > VAR_3->extradata_size)
        goto fail;
    FUNC_4(VAR_4, 0x00000001);
    FUNC_5(VAR_4, &VAR_3->extradata[8], VAR_5);
    VAR_6 = FUNC_1(&VAR_3->extradata[9 + VAR_5]);
    if (11 + VAR_5 + VAR_6 > VAR_3->extradata_size)
        goto fail;
    FUNC_4(VAR_4, 0x00000001);
    FUNC_5(VAR_4, &VAR_3->extradata[11 + VAR_5], VAR_6);
    VAR_7 = 0;

fail:
    VAR_2->codec_private_size = FUNC_2(VAR_4, &VAR_2->codec_private);
    return VAR_7;
}
