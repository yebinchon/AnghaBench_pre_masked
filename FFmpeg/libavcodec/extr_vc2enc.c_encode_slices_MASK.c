
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int num_y; int num_x; int pb; TYPE_3__* avctx; scalar_t__ prefix_bytes; TYPE_2__* slice_args; } ;
typedef TYPE_1__ VC2EncContext ;
struct TYPE_8__ {int (* execute ) (TYPE_3__*,int ,TYPE_2__*,int *,int,int) ;} ;
struct TYPE_7__ {scalar_t__ bytes; int pb; } ;
typedef TYPE_2__ SliceArgs ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_3__*,int ,TYPE_2__*,int *,int,int) ;

__attribute__((used)) static int FUNC_6(VC2EncContext *VAR_1)
{
    uint8_t *VAR_2;
    int VAR_3, VAR_4, VAR_5 = 0;
    SliceArgs *VAR_6 = VAR_1->slice_args;

    FUNC_0(&VAR_1->pb);
    FUNC_1(&VAR_1->pb);
    VAR_2 = FUNC_3(&VAR_1->pb);

    for (VAR_4 = 0; VAR_4 < VAR_1->num_y; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < VAR_1->num_x; VAR_3++) {
            SliceArgs *VAR_7 = &VAR_6[VAR_1->num_x*VAR_4 + VAR_3];
            FUNC_2(&VAR_7->pb, VAR_2 + VAR_5, VAR_7->bytes+VAR_1->prefix_bytes);
            VAR_5 += VAR_7->bytes;
        }
    }

    VAR_1->avctx->execute(VAR_1->avctx, VAR_0, VAR_6, ((void*)0), VAR_1->num_x*VAR_1->num_y,
                      sizeof(SliceArgs));

    FUNC_4(&VAR_1->pb, VAR_5);

    return 0;
}
