
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_7__ {int (* clear_blocks ) (int *) ;} ;
struct TYPE_9__ {TYPE_2__* avctx; TYPE_1__ bdsp; } ;
struct TYPE_8__ {scalar_t__ codec_id; } ;
typedef TYPE_3__ ASV1Context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(ASV1Context *VAR_1, int16_t VAR_2[6][64])
{
    int VAR_3, VAR_4;

    VAR_1->bdsp.clear_blocks(VAR_2[0]);

    if (VAR_1->avctx->codec_id == VAR_0) {
        for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
            if ((VAR_4 = FUNC_0(VAR_1, VAR_2[VAR_3])) < 0)
                return VAR_4;
        }
    } else {
        for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
            if ((VAR_4 = FUNC_1(VAR_1, VAR_2[VAR_3])) < 0)
                return VAR_4;
        }
    }
    return 0;
}
