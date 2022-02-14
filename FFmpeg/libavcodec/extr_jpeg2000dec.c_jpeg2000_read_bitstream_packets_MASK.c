
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int numXtiles; int numYtiles; int g; TYPE_2__* tile; } ;
struct TYPE_9__ {TYPE_1__* tile_part; } ;
struct TYPE_8__ {int tpg; } ;
typedef TYPE_2__ Jpeg2000Tile ;
typedef TYPE_3__ Jpeg2000DecoderContext ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(Jpeg2000DecoderContext *VAR_0)
{
    int VAR_1 = 0;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->numXtiles * VAR_0->numYtiles; VAR_2++) {
        Jpeg2000Tile *VAR_3 = VAR_0->tile + VAR_2;

        if ((VAR_1 = FUNC_0(VAR_0, VAR_2)) < 0)
            return VAR_1;

        VAR_0->g = VAR_3->tile_part[0].tpg;
        if ((VAR_1 = FUNC_1(VAR_0, VAR_3)) < 0)
            return VAR_1;
    }

    return 0;
}
