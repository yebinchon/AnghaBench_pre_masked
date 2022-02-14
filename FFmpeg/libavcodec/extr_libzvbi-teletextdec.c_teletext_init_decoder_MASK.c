
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int format_id; int last_pgno; int last_ass_alignment; int opacity; int pgno; scalar_t__ transparent_bg; int pts; int * vbi; } ;
typedef TYPE_1__ TeletextContext ;
struct TYPE_8__ {int width; int height; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_7)
{
    TeletextContext *VAR_8 = VAR_7->priv_data;
    unsigned int VAR_9, VAR_10, VAR_11;

    FUNC_3(&VAR_9, &VAR_10, &VAR_11);
    if (!(VAR_9 > 0 || VAR_10 > 2 || VAR_10 == 2 && VAR_11 >= 26)) {
        FUNC_0(VAR_7, VAR_2, "decoder needs zvbi version >= 0.2.26.\n");
        return VAR_1;
    }

    if (VAR_8->format_id == 0) {
        VAR_7->width = 41 * VAR_6;
        VAR_7->height = 25 * VAR_5;
    }

    VAR_8->vbi = ((void*)0);
    VAR_8->pts = VAR_4;
    VAR_8->last_pgno = -1;
    VAR_8->last_ass_alignment = 2;

    if (VAR_8->opacity == -1)
        VAR_8->opacity = VAR_8->transparent_bg ? 0 : 255;

    FUNC_0(VAR_7, VAR_3, "page filter: %s\n", VAR_8->pgno);

    switch (VAR_8->format_id) {
        case 0:
            return 0;
        case 1:
            return FUNC_1(VAR_7);
        case 2:
            return FUNC_2(VAR_7);
    }
    return VAR_0;
}
