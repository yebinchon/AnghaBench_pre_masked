
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int nreslevels; } ;
struct TYPE_13__ {int nguardbits; scalar_t__ expn; } ;
struct TYPE_14__ {int ncomponents; int avctx; TYPE_2__* tile; TYPE_4__ qntsty; TYPE_6__ codsty; } ;
struct TYPE_12__ {int num_precincts_x; int num_precincts_y; } ;
struct TYPE_11__ {TYPE_1__* comp; } ;
struct TYPE_10__ {TYPE_3__* reslevel; } ;
typedef int Jpeg2000Tile ;
typedef TYPE_3__ Jpeg2000ResLevel ;
typedef TYPE_4__ Jpeg2000QuantStyle ;
typedef TYPE_5__ Jpeg2000EncoderContext ;
typedef TYPE_6__ Jpeg2000CodingStyle ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(Jpeg2000EncoderContext *VAR_1, Jpeg2000Tile *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    Jpeg2000CodingStyle *VAR_7 = &VAR_1->codsty;
    Jpeg2000QuantStyle *VAR_8 = &VAR_1->qntsty;

    FUNC_0(VAR_1->avctx, VAR_0, "tier2\n");

    for (VAR_5 = 0; VAR_5 < VAR_7->nreslevels; VAR_5++){
        for (VAR_4 = 0; VAR_4 < VAR_1->ncomponents; VAR_4++){
            int VAR_9;
            Jpeg2000ResLevel *VAR_10 = VAR_1->tile[VAR_3].comp[VAR_4].reslevel + VAR_5;
            for (VAR_9 = 0; VAR_9 < VAR_10->num_precincts_x * VAR_10->num_precincts_y; VAR_9++){
                if ((VAR_6 = FUNC_1(VAR_1, VAR_10, VAR_9, VAR_8->expn + (VAR_5 ? 3*VAR_5-2 : 0),
                              VAR_8->nguardbits)) < 0)
                    return VAR_6;
            }
        }
    }
    FUNC_0(VAR_1->avctx, VAR_0, "after tier2\n");
    return 0;
}
