
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int mb_var_sum_temp; } ;
struct TYPE_10__ {int* mb_var; int* mb_mean; } ;
struct TYPE_9__ {int (* pix_sum ) (int *,int) ;unsigned int (* pix_norm1 ) (int *,int) ;} ;
struct TYPE_8__ {TYPE_1__* f; } ;
struct TYPE_12__ {int start_mb_y; int end_mb_y; int mb_width; int linesize; int mb_stride; TYPE_5__ me; TYPE_4__ current_picture; TYPE_3__ mpvencdsp; TYPE_2__ new_picture; } ;
struct TYPE_7__ {int ** data; } ;
typedef TYPE_6__ MpegEncContext ;
typedef int AVCodecContext ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 unsigned int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0, void *VAR_1){
    MpegEncContext *VAR_2= *(void**)VAR_1;
    int VAR_3, VAR_4;

    FUNC_0();

    for(VAR_4=VAR_2->start_mb_y; VAR_4 < VAR_2->end_mb_y; VAR_4++) {
        for(VAR_3=0; VAR_3 < VAR_2->mb_width; VAR_3++) {
            int VAR_5 = VAR_3 * 16;
            int VAR_6 = VAR_4 * 16;
            uint8_t *VAR_7 = VAR_2->new_picture.f->data[0] + (VAR_6 * VAR_2->linesize) + VAR_5;
            int VAR_8;
            int VAR_9 = VAR_2->mpvencdsp.pix_sum(VAR_7, VAR_2->linesize);

            VAR_8 = (VAR_2->mpvencdsp.pix_norm1(VAR_7, VAR_2->linesize) -
                    (((unsigned) VAR_9 * VAR_9) >> 8) + 500 + 128) >> 8;

            VAR_2->current_picture.mb_var [VAR_2->mb_stride * VAR_4 + VAR_3] = VAR_8;
            VAR_2->current_picture.mb_mean[VAR_2->mb_stride * VAR_4 + VAR_3] = (VAR_9+128)>>8;
            VAR_2->me.mb_var_sum_temp += VAR_8;
        }
    }
    return 0;
}
