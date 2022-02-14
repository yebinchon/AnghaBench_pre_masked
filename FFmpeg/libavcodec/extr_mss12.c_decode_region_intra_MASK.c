
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_11__ {int (* get_model_sym ) (TYPE_3__*,int *) ;} ;
struct TYPE_10__ {int pal_stride; int rgb_stride; int* pal; int * rgb_pic; int * pal_pic; } ;
struct TYPE_9__ {int intra_pix_ctx; int intra_region; TYPE_2__* c; } ;
typedef TYPE_1__ SliceContext ;
typedef TYPE_2__ MSS12Context ;
typedef TYPE_3__ ArithCoder ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_3__*,int *,int *,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int *,int *,int,int,int,int,int,int,int *,int*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_5(SliceContext *VAR_0, ArithCoder *VAR_1,
                               int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    MSS12Context const *VAR_6 = VAR_0->c;
    int VAR_7;

    VAR_7 = VAR_1->get_model_sym(VAR_1, &VAR_0->intra_region);

    if (!VAR_7) {
        int VAR_8, VAR_9, VAR_10, VAR_11;
        ptrdiff_t VAR_12 = VAR_6->pal_stride;
        ptrdiff_t VAR_13 = VAR_6->rgb_stride;
        uint8_t *VAR_14 = VAR_6->pal_pic + VAR_2 + VAR_3 * VAR_12;
        uint8_t *VAR_15 = VAR_6->rgb_pic + VAR_2 * 3 + VAR_3 * VAR_13;

        VAR_10 = FUNC_1(VAR_1, &VAR_0->intra_pix_ctx, ((void*)0), 0, 0);
        if (VAR_10 < 0)
            return VAR_10;
        VAR_11 = VAR_6->pal[VAR_10];
        for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++, VAR_14 += VAR_12, VAR_15 += VAR_13) {
            FUNC_3(VAR_14, VAR_10, VAR_4);
            if (VAR_6->rgb_pic)
                for (VAR_9 = 0; VAR_9 < VAR_4 * 3; VAR_9 += 3)
                    FUNC_0(VAR_15 + VAR_9, VAR_11);
        }
    } else {
        return FUNC_2(VAR_1, VAR_6->pal_pic, VAR_6->rgb_pic,
                             VAR_2, VAR_3, VAR_4, VAR_5, VAR_6->pal_stride, VAR_6->rgb_stride,
                             &VAR_0->intra_pix_ctx, &VAR_6->pal[0]);
    }

    return 0;
}
