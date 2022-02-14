
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int* i_data; int** coord; } ;
struct TYPE_8__ {int numXtiles; int numYtiles; int ncomponents; TYPE_1__* picture; scalar_t__ planar; TYPE_2__* tile; } ;
struct TYPE_7__ {TYPE_4__* comp; } ;
struct TYPE_6__ {int* linesize; int ** data; } ;
typedef TYPE_2__ Jpeg2000Tile ;
typedef TYPE_3__ Jpeg2000EncoderContext ;
typedef TYPE_4__ Jpeg2000Component ;



__attribute__((used)) static void FUNC_0(Jpeg2000EncoderContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
    uint8_t *VAR_6;
    for (VAR_1 = 0; VAR_1 < VAR_0->numXtiles * VAR_0->numYtiles; VAR_1++){
        Jpeg2000Tile *VAR_7 = VAR_0->tile + VAR_1;
        if (VAR_0->planar){
            for (VAR_2 = 0; VAR_2 < VAR_0->ncomponents; VAR_2++){
                Jpeg2000Component *VAR_8 = VAR_7->comp + VAR_2;
                int *VAR_9 = VAR_8->i_data;
                VAR_6 = VAR_0->picture->data[VAR_2]
                       + VAR_8->coord[1][0] * VAR_0->picture->linesize[VAR_2]
                       + VAR_8->coord[0][0];
                for (VAR_4 = VAR_8->coord[1][0]; VAR_4 < VAR_8->coord[1][1]; VAR_4++){
                    uint8_t *VAR_10 = VAR_6;
                    for (VAR_5 = VAR_8->coord[0][0]; VAR_5 < VAR_8->coord[0][1]; VAR_5++)
                        *VAR_9++ = *VAR_10++ - (1 << 7);
                    VAR_6 += VAR_0->picture->linesize[VAR_2];
                }
            }
        } else{
            VAR_6 = VAR_0->picture->data[0] + VAR_7->comp[0].coord[1][0] * VAR_0->picture->linesize[0]
                   + VAR_7->comp[0].coord[0][0] * VAR_0->ncomponents;

            VAR_3 = 0;
            for (VAR_4 = VAR_7->comp[0].coord[1][0]; VAR_4 < VAR_7->comp[0].coord[1][1]; VAR_4++){
                uint8_t *VAR_11 = VAR_6;
                for (VAR_5 = VAR_7->comp[0].coord[0][0]; VAR_5 < VAR_7->comp[0].coord[0][1]; VAR_5++, VAR_3++){
                    for (VAR_2 = 0; VAR_2 < VAR_0->ncomponents; VAR_2++){
                        VAR_7->comp[VAR_2].i_data[VAR_3] = *VAR_11++ - (1 << 7);
                    }
                }
                VAR_6 += VAR_0->picture->linesize[0];
            }
        }
    }
}
