
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Wmv2Context ;
struct TYPE_3__ {scalar_t__ picture_number; scalar_t__ pict_type; int chroma_qscale; int qscale; int mb_width; int mb_height; int gb; int avctx; } ;
typedef TYPE_1__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (int * const) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;

int FUNC_6(MpegEncContext *VAR_5)
{
    Wmv2Context *const VAR_6 = (Wmv2Context *) VAR_5;
    int VAR_7;

    if (VAR_5->picture_number == 0)
        FUNC_2(VAR_6);

    VAR_5->pict_type = FUNC_4(&VAR_5->gb) + 1;
    if (VAR_5->pict_type == VAR_2) {
        VAR_7 = FUNC_3(&VAR_5->gb, 7);
        FUNC_1(VAR_5->avctx, VAR_1, "I7:%X/\n", VAR_7);
    }
    VAR_5->chroma_qscale = VAR_5->qscale = FUNC_3(&VAR_5->gb, 5);
    if (VAR_5->qscale <= 0)
        return VAR_0;

    if (VAR_5->pict_type != VAR_2 && FUNC_5(&VAR_5->gb, 1)) {
        GetBitContext VAR_8 = VAR_5->gb;
        int VAR_9 = FUNC_3(&VAR_8, 2);
        int VAR_10 = VAR_9 == VAR_4 ? VAR_5->mb_width : VAR_5->mb_height;

        while (VAR_10 > 0) {
            int VAR_11 = FUNC_0(VAR_10, 25);
            if (FUNC_3(&VAR_8, VAR_11) + 1 != 1<<VAR_11)
                break;
            VAR_10 -= VAR_11;
        }
        if (!VAR_10)
            return VAR_3;
    }

    return 0;
}
