
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_19__ {scalar_t__ i_stepsize; TYPE_3__* prec; } ;
struct TYPE_18__ {int ninclpasses; } ;
struct TYPE_17__ {int nreslevels; scalar_t__ transform; } ;
struct TYPE_16__ {TYPE_2__* reslevel; } ;
struct TYPE_15__ {int ncomponents; int lambda; TYPE_6__ codsty; } ;
struct TYPE_14__ {int nb_codeblocks_height; int nb_codeblocks_width; TYPE_7__* cblk; } ;
struct TYPE_13__ {int num_precincts_x; int num_precincts_y; int nbands; TYPE_8__* band; } ;
struct TYPE_12__ {TYPE_5__* comp; } ;
typedef TYPE_1__ Jpeg2000Tile ;
typedef TYPE_2__ Jpeg2000ResLevel ;
typedef TYPE_3__ Jpeg2000Prec ;
typedef TYPE_4__ Jpeg2000EncoderContext ;
typedef TYPE_5__ Jpeg2000Component ;
typedef TYPE_6__ Jpeg2000CodingStyle ;
typedef TYPE_7__ Jpeg2000Cblk ;
typedef TYPE_8__ Jpeg2000Band ;


 scalar_t__ VAR_0 ;
 scalar_t__*** VAR_1 ;
 int FUNC_0 (TYPE_7__*,int ,int) ;

__attribute__((used)) static void FUNC_1(Jpeg2000EncoderContext *VAR_2, Jpeg2000Tile *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    Jpeg2000CodingStyle *VAR_10 = &VAR_2->codsty;

    for (VAR_5 = 0; VAR_5 < VAR_2->ncomponents; VAR_5++){
        Jpeg2000Component *VAR_11 = VAR_3->comp + VAR_5;

        for (VAR_6 = 0, VAR_9 = VAR_10->nreslevels-1; VAR_6 < VAR_10->nreslevels; VAR_6++, VAR_9--){
            Jpeg2000ResLevel *VAR_12 = VAR_11->reslevel + VAR_6;

            for (VAR_4 = 0; VAR_4 < VAR_12->num_precincts_x * VAR_12->num_precincts_y; VAR_4++){
                for (VAR_7 = 0; VAR_7 < VAR_12->nbands ; VAR_7++){
                    int VAR_13 = VAR_7 + (VAR_6 > 0);
                    Jpeg2000Band *VAR_14 = VAR_12->band + VAR_7;
                    Jpeg2000Prec *VAR_15 = VAR_14->prec + VAR_4;

                    for (VAR_8 = 0; VAR_8 < VAR_15->nb_codeblocks_height * VAR_15->nb_codeblocks_width; VAR_8++){
                        Jpeg2000Cblk *VAR_16 = VAR_15->cblk + VAR_8;

                        VAR_16->ninclpasses = FUNC_0(VAR_16, VAR_2->lambda,
                                (int64_t)VAR_1[VAR_10->transform == VAR_0][VAR_13][VAR_9] * (int64_t)VAR_14->i_stepsize >> 15);
                    }
                }
            }
        }
    }
}
