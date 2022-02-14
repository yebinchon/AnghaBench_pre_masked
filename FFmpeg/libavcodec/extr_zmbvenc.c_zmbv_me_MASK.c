
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int bypp; int lrange; int urange; TYPE_1__* avctx; } ;
typedef TYPE_2__ ZmbvEncContext ;
struct TYPE_5__ {scalar_t__ height; scalar_t__ width; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *,int,int *,int,int,int,int*) ;

__attribute__((used)) static int FUNC_2(ZmbvEncContext *VAR_1, uint8_t *VAR_2, int VAR_3, uint8_t *VAR_4,
                   int VAR_5, int VAR_6, int VAR_7, int *VAR_8, int *VAR_9, int *VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18, VAR_19;

    VAR_18 = *VAR_8;
    VAR_19 = *VAR_9;
    VAR_16 = FUNC_0(VAR_0, VAR_1->avctx->width - VAR_6);
    VAR_17 = FUNC_0(VAR_0, VAR_1->avctx->height - VAR_7);


    VAR_15 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_16, VAR_17, VAR_10);
    *VAR_8 = *VAR_9 = 0;
    if(!VAR_15) return 0;


    if (VAR_18 || VAR_19){
        VAR_14 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4 + VAR_18 * VAR_1->bypp + VAR_19 * VAR_5, VAR_5, VAR_16, VAR_17, &VAR_13);
        if(VAR_14 < VAR_15){
            VAR_15 = VAR_14;
            *VAR_8 = VAR_18;
            *VAR_9 = VAR_19;
            *VAR_10 = VAR_13;
            if(!VAR_15) return 0;
        }
    }


    for(VAR_12 = -VAR_1->lrange; VAR_12 <= VAR_1->urange; VAR_12++){
        for(VAR_11 = -VAR_1->lrange; VAR_11 <= VAR_1->urange; VAR_11++){
            if(!VAR_11 && !VAR_12) continue;
            if(VAR_11 == VAR_18 && VAR_12 == VAR_19) continue;
            VAR_14 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4 + VAR_11 * VAR_1->bypp + VAR_12 * VAR_5, VAR_5, VAR_16, VAR_17, &VAR_13);
            if(VAR_14 < VAR_15){
                 VAR_15 = VAR_14;
                 *VAR_8 = VAR_11;
                 *VAR_9 = VAR_12;
                 *VAR_10 = VAR_13;
                 if(!VAR_15) return 0;
             }
         }
    }
    return VAR_15;
}
