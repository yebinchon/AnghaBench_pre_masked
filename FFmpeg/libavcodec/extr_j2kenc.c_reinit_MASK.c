
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numXtiles; int numYtiles; int ncomponents; int codsty; TYPE_1__* tile; } ;
struct TYPE_4__ {scalar_t__ comp; } ;
typedef TYPE_1__ Jpeg2000Tile ;
typedef TYPE_2__ Jpeg2000EncoderContext ;


 int FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_1(Jpeg2000EncoderContext *VAR_0)
{
    int VAR_1, VAR_2;
    for (VAR_1 = 0; VAR_1 < VAR_0->numXtiles * VAR_0->numYtiles; VAR_1++){
        Jpeg2000Tile *VAR_3 = VAR_0->tile + VAR_1;
        for (VAR_2 = 0; VAR_2 < VAR_0->ncomponents; VAR_2++)
            FUNC_0(VAR_3->comp + VAR_2, &VAR_0->codsty);
    }
}
