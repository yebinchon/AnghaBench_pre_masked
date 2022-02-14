
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum cavs_mb { ____Placeholder_cavs_mb } cavs_mb ;
struct TYPE_7__ {int * avg_h264_chroma_pixels_tab; int * put_h264_chroma_pixels_tab; } ;
struct TYPE_6__ {int * avg_cavs_qpel_pixels_tab; int * put_cavs_qpel_pixels_tab; } ;
struct TYPE_8__ {int * mv; TYPE_2__ h264chroma; TYPE_1__ cdsp; int cv; int cu; int cy; } ;
typedef TYPE_3__ AVSContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (TYPE_3__*,int,int ,int ,int ,int ,int,int,int ,int ,int ,int ,int *) ;

void FUNC_1(AVSContext *VAR_5, enum cavs_mb VAR_6)
{
    if (VAR_4[VAR_6] == 0) {
        FUNC_0(VAR_5, 8, 0, VAR_5->cy, VAR_5->cu, VAR_5->cv, 0, 0,
                    VAR_5->cdsp.put_cavs_qpel_pixels_tab[0],
                    VAR_5->h264chroma.put_h264_chroma_pixels_tab[0],
                    VAR_5->cdsp.avg_cavs_qpel_pixels_tab[0],
                    VAR_5->h264chroma.avg_h264_chroma_pixels_tab[0],
                    &VAR_5->mv[VAR_0]);
    } else {
        FUNC_0(VAR_5, 4, 0, VAR_5->cy, VAR_5->cu, VAR_5->cv, 0, 0,
                    VAR_5->cdsp.put_cavs_qpel_pixels_tab[1],
                    VAR_5->h264chroma.put_h264_chroma_pixels_tab[1],
                    VAR_5->cdsp.avg_cavs_qpel_pixels_tab[1],
                    VAR_5->h264chroma.avg_h264_chroma_pixels_tab[1],
                    &VAR_5->mv[VAR_0]);
        FUNC_0(VAR_5, 4, 0, VAR_5->cy, VAR_5->cu, VAR_5->cv, 4, 0,
                    VAR_5->cdsp.put_cavs_qpel_pixels_tab[1],
                    VAR_5->h264chroma.put_h264_chroma_pixels_tab[1],
                    VAR_5->cdsp.avg_cavs_qpel_pixels_tab[1],
                    VAR_5->h264chroma.avg_h264_chroma_pixels_tab[1],
                    &VAR_5->mv[VAR_1]);
        FUNC_0(VAR_5, 4, 0, VAR_5->cy, VAR_5->cu, VAR_5->cv, 0, 4,
                    VAR_5->cdsp.put_cavs_qpel_pixels_tab[1],
                    VAR_5->h264chroma.put_h264_chroma_pixels_tab[1],
                    VAR_5->cdsp.avg_cavs_qpel_pixels_tab[1],
                    VAR_5->h264chroma.avg_h264_chroma_pixels_tab[1],
                    &VAR_5->mv[VAR_2]);
        FUNC_0(VAR_5, 4, 0, VAR_5->cy, VAR_5->cu, VAR_5->cv, 4, 4,
                    VAR_5->cdsp.put_cavs_qpel_pixels_tab[1],
                    VAR_5->h264chroma.put_h264_chroma_pixels_tab[1],
                    VAR_5->cdsp.avg_cavs_qpel_pixels_tab[1],
                    VAR_5->h264chroma.avg_h264_chroma_pixels_tab[1],
                    &VAR_5->mv[VAR_3]);
    }
}
