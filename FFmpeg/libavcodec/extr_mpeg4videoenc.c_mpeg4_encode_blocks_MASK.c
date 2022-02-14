
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_8__ {int * permutated; } ;
struct TYPE_9__ {TYPE_2__ intra_scantable; int pb; TYPE_1__* avctx; } ;
struct TYPE_7__ {int flags2; } ;
typedef int PutBitContext ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int,int,int *,int *,int *) ;
 int FUNC_1 (TYPE_3__*,int *,int,int,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static inline void FUNC_3(MpegEncContext *VAR_1, int16_t VAR_2[6][64],
                                       int VAR_3[6], uint8_t **VAR_4,
                                       PutBitContext *VAR_5,
                                       PutBitContext *VAR_6)
{
    int VAR_7;

    if (VAR_4) {
        if (VAR_1->avctx->flags2 & VAR_0) {
            for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
                FUNC_2(&VAR_1->pb,
                              FUNC_1(VAR_1, VAR_2[VAR_7], VAR_7,
                                                     VAR_3[VAR_7], VAR_4[VAR_7]));
        } else {

            for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
                FUNC_0(VAR_1, VAR_2[VAR_7], VAR_7,
                                   VAR_3[VAR_7], VAR_4[VAR_7], VAR_5, VAR_6);
        }
    } else {
        if (VAR_1->avctx->flags2 & VAR_0) {
            for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
                FUNC_2(&VAR_1->pb,
                              FUNC_1(VAR_1, VAR_2[VAR_7], VAR_7, 0,
                                                     VAR_1->intra_scantable.permutated));
        } else {

            for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
                FUNC_0(VAR_1, VAR_2[VAR_7], VAR_7, 0,
                                   VAR_1->intra_scantable.permutated, VAR_5, VAR_6);
        }
    }
}
