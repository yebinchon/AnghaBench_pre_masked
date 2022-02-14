
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ch_mask; int frame_size; int avctx; int gb; int nchannels; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_3(DCACoreDecoder *VAR_4)
{
    int VAR_5;

    if (VAR_4->ch_mask & VAR_2) {
        FUNC_0(VAR_4->avctx, VAR_1, "XCH with Cs speaker already present\n");
        return VAR_0;
    }

    if ((VAR_5 = FUNC_2(VAR_4, VAR_3, VAR_4->nchannels)) < 0)
        return VAR_5;


    if (FUNC_1(&VAR_4->gb, VAR_4->frame_size * 8)) {
        FUNC_0(VAR_4->avctx, VAR_1, "Read past end of XCH frame\n");
        return VAR_0;
    }

    return 0;
}
