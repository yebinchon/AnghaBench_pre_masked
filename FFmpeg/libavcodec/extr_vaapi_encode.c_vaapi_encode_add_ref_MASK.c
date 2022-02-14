
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nb_refs; scalar_t__ nb_dpb_pics; int* ref_count; struct TYPE_4__* prev; struct TYPE_4__** dpb; struct TYPE_4__** refs; } ;
typedef TYPE_1__ VAAPIEncodePicture ;
typedef int AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_2,
                                 VAAPIEncodePicture *VAR_3,
                                 VAAPIEncodePicture *VAR_4,
                                 int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8 = 0;

    if (VAR_5) {
        FUNC_0(VAR_3 != VAR_4);
        FUNC_0(VAR_3->nb_refs < VAR_1);
        VAR_3->refs[VAR_3->nb_refs++] = VAR_4;
        ++VAR_8;
    }

    if (VAR_6) {
        FUNC_0(VAR_3->nb_dpb_pics < VAR_0);
        VAR_3->dpb[VAR_3->nb_dpb_pics++] = VAR_4;
        ++VAR_8;
    }

    if (VAR_7) {
        FUNC_0(!VAR_3->prev);
        VAR_3->prev = VAR_4;
        ++VAR_8;
    }

    VAR_4->ref_count[0] += VAR_8;
    VAR_4->ref_count[1] += VAR_8;
}
