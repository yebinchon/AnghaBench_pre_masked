
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* comp; } ;
struct TYPE_6__ {int numXtiles; int numYtiles; int ncomponents; TYPE_2__* tile; int codsty; } ;
typedef TYPE_1__ Jpeg2000EncoderContext ;
typedef TYPE_2__ Jpeg2000Component ;
typedef int Jpeg2000CodingStyle ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_2(Jpeg2000EncoderContext *VAR_0)
{
    int VAR_1, VAR_2;
    Jpeg2000CodingStyle *VAR_3 = &VAR_0->codsty;

    for (VAR_1 = 0; VAR_1 < VAR_0->numXtiles * VAR_0->numYtiles; VAR_1++){
        for (VAR_2 = 0; VAR_2 < VAR_0->ncomponents; VAR_2++){
            Jpeg2000Component *VAR_4 = VAR_0->tile[VAR_1].comp + VAR_2;
            FUNC_1(VAR_4, VAR_3);
        }
        FUNC_0(&VAR_0->tile[VAR_1].comp);
    }
    FUNC_0(&VAR_0->tile);
}
