
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_9__ {int buf_end; int buf; } ;
struct TYPE_8__ {TYPE_1__* avctx; TYPE_3__ pb; } ;
struct TYPE_7__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ ASV1Context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static inline int FUNC_4(ASV1Context *VAR_2, int16_t VAR_3[6][64])
{
    int VAR_4;

    FUNC_2(VAR_2->pb.buf_end - VAR_2->pb.buf - (FUNC_3(&VAR_2->pb) >> 3) >= VAR_1);

    if (VAR_2->avctx->codec_id == VAR_0) {
        for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
            FUNC_0(VAR_2, VAR_3[VAR_4]);
    } else {
        for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
            FUNC_1(VAR_2, VAR_3[VAR_4]);
        }
    }
    return 0;
}
