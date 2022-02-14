
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int v1_size; int v4_size; int mode; } ;
typedef TYPE_1__ strip_info ;
struct TYPE_7__ {int v1_error; void* best_encoding; int v4_error; int skip_error; } ;
typedef TYPE_2__ mb_info ;
typedef int int64_t ;
struct TYPE_8__ {scalar_t__ pix_fmt; int w; int lambda; TYPE_2__* mb; } ;
typedef TYPE_3__ CinepakEncContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




__attribute__((used)) static int64_t FUNC_0(CinepakEncContext *VAR_7, int VAR_8,
                                    strip_info *VAR_9, int VAR_10,
                                    int *VAR_11,
                                    int *VAR_12)
{

    int VAR_13;
    int VAR_14 = VAR_7->pix_fmt == VAR_0 ? 6 : 4;
    int VAR_15 = VAR_7->w * VAR_8 / VAR_6;
    mb_info *VAR_16;
    int64_t VAR_17, VAR_18, VAR_19;
    int64_t VAR_20 = VAR_7->lambda * ((VAR_9->v1_size ? VAR_1 + VAR_9->v1_size * VAR_14 : 0) +
                               (VAR_9->v4_size ? VAR_1 + VAR_9->v4_size * VAR_14 : 0) +
                               VAR_1) << 3;

    switch (VAR_9->mode) {
    case 129:

        VAR_20 += VAR_7->lambda * 8 * VAR_15;


        for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
            VAR_16 = &VAR_7->mb[VAR_13];
            VAR_20 += VAR_5 * VAR_16->v1_error;


            VAR_16->best_encoding = VAR_3;
        }

        break;
    case 128:

        if (VAR_10) {

            *VAR_11 = *VAR_12 = 0;
            for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
                int VAR_21;
                VAR_16 = &VAR_7->mb[VAR_13];
                if (VAR_16->best_encoding == VAR_3)
                    VAR_17 = VAR_7->lambda * 9 + VAR_5 * (VAR_21 = VAR_16->v1_error);
                else
                    VAR_17 = VAR_7->lambda * 33 + VAR_5 * (VAR_21 = VAR_16->v4_error);
                VAR_20 += VAR_17;
            }
        } else {
            for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
                VAR_16 = &VAR_7->mb[VAR_13];
                VAR_17 = VAR_7->lambda * 9 + VAR_5 * VAR_16->v1_error;
                VAR_18 = VAR_7->lambda * 33 + VAR_5 * VAR_16->v4_error;

                if (VAR_17 <= VAR_18) {
                    VAR_20 += VAR_17;
                    VAR_16->best_encoding = VAR_3;
                } else {
                    VAR_20 += VAR_18;
                    VAR_16->best_encoding = VAR_4;
                }
            }
        }

        break;
    case 130:

        if (VAR_10) {
            int VAR_22 = 0, VAR_23 = 0;
            for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
                VAR_16 = &VAR_7->mb[VAR_13];


                VAR_17 = VAR_7->lambda * 1 + VAR_5 * VAR_16->skip_error;
                if (VAR_16->best_encoding == VAR_2) {
                    VAR_20 += VAR_17;
                } else if (VAR_16->best_encoding == VAR_3) {
                    if ((VAR_18 = VAR_7->lambda * 10 + VAR_5 * VAR_16->v1_error) >= VAR_17) {
                        VAR_16->best_encoding = VAR_2;
                        ++VAR_22;
                        VAR_20 += VAR_17;
                    } else {
                        VAR_20 += VAR_18;
                    }
                } else {
                    if ((VAR_19 = VAR_7->lambda * 34 + VAR_5 * VAR_16->v4_error) >= VAR_17) {
                        VAR_16->best_encoding = VAR_2;
                        ++VAR_23;
                        VAR_20 += VAR_17;
                    } else {
                        VAR_20 += VAR_19;
                    }
                }
            }
            *VAR_11 = VAR_22;
            *VAR_12 = VAR_23;
        } else {
            for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
                VAR_16 = &VAR_7->mb[VAR_13];
                VAR_17 = VAR_7->lambda * 1 + VAR_5 * VAR_16->skip_error;
                VAR_18 = VAR_7->lambda * 10 + VAR_5 * VAR_16->v1_error;
                VAR_19 = VAR_7->lambda * 34 + VAR_5 * VAR_16->v4_error;

                if (VAR_17 <= VAR_18 && VAR_17 <= VAR_19) {
                    VAR_20 += VAR_17;
                    VAR_16->best_encoding = VAR_2;
                } else if (VAR_18 <= VAR_19) {
                    VAR_20 += VAR_18;
                    VAR_16->best_encoding = VAR_3;
                } else {
                    VAR_20 += VAR_19;
                    VAR_16->best_encoding = VAR_4;
                }
            }
        }

        break;
    }

    return VAR_20;
}
