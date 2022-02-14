
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_36__ {scalar_t__** coord; TYPE_4__* prec; } ;
struct TYPE_35__ {int** coord; } ;
struct TYPE_34__ {int log2_cblk_width; int nreslevels2decode; scalar_t__ transform; } ;
struct TYPE_33__ {scalar_t__ i_data; scalar_t__ f_data; int dwt; TYPE_3__* reslevel; } ;
struct TYPE_32__ {int ncomponents; } ;
struct TYPE_31__ {int nb_codeblocks_width; int nb_codeblocks_height; TYPE_8__* cblk; } ;
struct TYPE_30__ {int nbands; int num_precincts_x; int num_precincts_y; TYPE_9__* band; } ;
struct TYPE_29__ {int stride; } ;
struct TYPE_28__ {TYPE_7__* codsty; TYPE_6__* comp; } ;
typedef TYPE_1__ Jpeg2000Tile ;
typedef TYPE_2__ Jpeg2000T1Context ;
typedef TYPE_3__ Jpeg2000ResLevel ;
typedef TYPE_4__ Jpeg2000Prec ;
typedef TYPE_5__ Jpeg2000DecoderContext ;
typedef TYPE_6__ Jpeg2000Component ;
typedef TYPE_7__ Jpeg2000CodingStyle ;
typedef TYPE_8__ Jpeg2000Cblk ;
typedef TYPE_9__ Jpeg2000Band ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,TYPE_7__*,TYPE_2__*,TYPE_8__*,int,int,int) ;
 int FUNC_1 (int,int,TYPE_8__*,TYPE_6__*,TYPE_2__*,TYPE_9__*) ;
 int FUNC_2 (int,int,TYPE_8__*,TYPE_6__*,TYPE_2__*,TYPE_9__*) ;
 int FUNC_3 (int,int,TYPE_8__*,TYPE_6__*,TYPE_2__*,TYPE_9__*) ;
 int FUNC_4 (int *,void*) ;

__attribute__((used)) static inline void FUNC_5(Jpeg2000DecoderContext *VAR_2, Jpeg2000Tile *VAR_3)
{
    Jpeg2000T1Context VAR_4;

    int VAR_5, VAR_6, VAR_7;


    for (VAR_5 = 0; VAR_5 < VAR_2->ncomponents; VAR_5++) {
        Jpeg2000Component *VAR_8 = VAR_3->comp + VAR_5;
        Jpeg2000CodingStyle *VAR_9 = VAR_3->codsty + VAR_5;
        int VAR_10 = 0;

        VAR_4 = (1<<VAR_9->log2_cblk_width) + 2;


        for (VAR_6 = 0; VAR_6 < VAR_9->nreslevels2decode; VAR_6++) {
            Jpeg2000ResLevel *VAR_11 = VAR_8->reslevel + VAR_6;

            for (VAR_7 = 0; VAR_7 < VAR_11->nbands; VAR_7++) {
                int VAR_12, VAR_13;
                Jpeg2000Band *VAR_14 = VAR_11->band + VAR_7;
                int VAR_15 = 0, VAR_16;

                VAR_16 = VAR_7 + (VAR_6 > 0);

                if (VAR_14->coord[0][0] == VAR_14->coord[0][1] ||
                    VAR_14->coord[1][0] == VAR_14->coord[1][1])
                    continue;

                VAR_12 = VAR_11->num_precincts_x * VAR_11->num_precincts_y;

                for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
                    Jpeg2000Prec *VAR_17 = VAR_14->prec + VAR_13;


                    for (VAR_15 = 0;
                         VAR_15 < VAR_17->nb_codeblocks_width * VAR_17->nb_codeblocks_height;
                         VAR_15++) {
                        int VAR_18, VAR_19;
                        Jpeg2000Cblk *VAR_20 = VAR_17->cblk + VAR_15;
                        int VAR_21 = FUNC_0(VAR_2, VAR_9, &VAR_4, VAR_20,
                                    VAR_20->coord[0][1] - VAR_20->coord[0][0],
                                    VAR_20->coord[1][1] - VAR_20->coord[1][0],
                                    VAR_16);
                        if (VAR_21)
                            VAR_10 = 1;
                        else
                            continue;
                        VAR_18 = VAR_20->coord[0][0] - VAR_14->coord[0][0];
                        VAR_19 = VAR_20->coord[1][0] - VAR_14->coord[1][0];

                        if (VAR_9->transform == VAR_0)
                            FUNC_1(VAR_18, VAR_19, VAR_20, VAR_8, &VAR_4, VAR_14);
                        else if (VAR_9->transform == VAR_1)
                            FUNC_3(VAR_18, VAR_19, VAR_20, VAR_8, &VAR_4, VAR_14);
                        else
                            FUNC_2(VAR_18, VAR_19, VAR_20, VAR_8, &VAR_4, VAR_14);
                   }
                }
            }
        }


        if (VAR_10)
            FUNC_4(&VAR_8->dwt, VAR_9->transform == VAR_0 ? (void*)VAR_8->f_data : (void*)VAR_8->i_data);

    }
}
