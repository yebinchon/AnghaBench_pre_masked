
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int** coord; int** coord_o; } ;
struct TYPE_9__ {int numXtiles; int tile_width; int numYtiles; int tile_height; int ncomponents; int* chroma_shift; int avctx; int * cbps; int height; int width; TYPE_1__* tile; int qntsty; int codsty; } ;
struct TYPE_8__ {TYPE_3__* comp; } ;
typedef TYPE_1__ Jpeg2000Tile ;
typedef int Jpeg2000QuantStyle ;
typedef TYPE_2__ Jpeg2000EncoderContext ;
typedef TYPE_3__ Jpeg2000Component ;
typedef int Jpeg2000CodingStyle ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int,int ) ;
 TYPE_1__* FUNC_2 (int,int) ;
 TYPE_3__* FUNC_3 (int,int) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_3__*,int *,int *,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_7(Jpeg2000EncoderContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;
    Jpeg2000CodingStyle *VAR_6 = &VAR_1->codsty;
    Jpeg2000QuantStyle *VAR_7 = &VAR_1->qntsty;

    VAR_1->numXtiles = FUNC_4(VAR_1->width, VAR_1->tile_width);
    VAR_1->numYtiles = FUNC_4(VAR_1->height, VAR_1->tile_height);

    VAR_1->tile = FUNC_2(VAR_1->numXtiles, VAR_1->numYtiles * sizeof(Jpeg2000Tile));
    if (!VAR_1->tile)
        return FUNC_0(VAR_0);
    for (VAR_2 = 0, VAR_4 = 0; VAR_4 < VAR_1->numYtiles; VAR_4++)
        for (VAR_3 = 0; VAR_3 < VAR_1->numXtiles; VAR_3++, VAR_2++){
            Jpeg2000Tile *VAR_8 = VAR_1->tile + VAR_2;

            VAR_8->comp = FUNC_3(VAR_1->ncomponents, sizeof(Jpeg2000Component));
            if (!VAR_8->comp)
                return FUNC_0(VAR_0);
            for (VAR_5 = 0; VAR_5 < VAR_1->ncomponents; VAR_5++){
                Jpeg2000Component *VAR_9 = VAR_8->comp + VAR_5;
                int VAR_10, VAR_11, VAR_12;

                VAR_9->coord[0][0] = VAR_9->coord_o[0][0] = VAR_3 * VAR_1->tile_width;
                VAR_9->coord[0][1] = VAR_9->coord_o[0][1] = FUNC_1((VAR_3+1)*VAR_1->tile_width, VAR_1->width);
                VAR_9->coord[1][0] = VAR_9->coord_o[1][0] = VAR_4 * VAR_1->tile_height;
                VAR_9->coord[1][1] = VAR_9->coord_o[1][1] = FUNC_1((VAR_4+1)*VAR_1->tile_height, VAR_1->height);
                if (VAR_5 > 0)
                    for (VAR_11 = 0; VAR_11 < 2; VAR_11++)
                        for (VAR_12 = 0; VAR_12 < 2; VAR_12++)
                            VAR_9->coord[VAR_11][VAR_12] = VAR_9->coord_o[VAR_11][VAR_12] = FUNC_5(VAR_9->coord[VAR_11][VAR_12], VAR_1->chroma_shift[VAR_11]);

                if ((VAR_10 = FUNC_6(VAR_9,
                                                VAR_6,
                                                VAR_7,
                                                VAR_1->cbps[VAR_5],
                                                VAR_5?1<<VAR_1->chroma_shift[0]:1,
                                                VAR_5?1<<VAR_1->chroma_shift[1]:1,
                                                VAR_1->avctx
                                               )) < 0)
                    return VAR_10;
            }
        }
    return 0;
}
