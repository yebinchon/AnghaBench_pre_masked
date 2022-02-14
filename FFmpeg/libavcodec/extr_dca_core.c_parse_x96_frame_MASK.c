
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x96_rev_no; int frame_size; int avctx; int gb; int nchannels; int x96_nchannels; scalar_t__ x96_crc_present; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_5(DCACoreDecoder *VAR_2)
{
    int VAR_3;


    VAR_2->x96_rev_no = FUNC_3(&VAR_2->gb, 4);
    if (VAR_2->x96_rev_no < 1 || VAR_2->x96_rev_no > 8) {
        FUNC_1(VAR_2->avctx, VAR_1, "Invalid X96 revision (%d)\n", VAR_2->x96_rev_no);
        return VAR_0;
    }

    VAR_2->x96_crc_present = 0;
    VAR_2->x96_nchannels = VAR_2->nchannels;

    if ((VAR_3 = FUNC_0(VAR_2)) < 0)
        return VAR_3;

    if ((VAR_3 = FUNC_4(VAR_2, 0, 0)) < 0)
        return VAR_3;


    if (FUNC_2(&VAR_2->gb, VAR_2->frame_size * 8)) {
        FUNC_1(VAR_2->avctx, VAR_1, "Read past end of X96 frame\n");
        return VAR_0;
    }

    return 0;
}
