
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* comp; int * codsty; } ;
struct TYPE_6__ {int numXtiles; int numYtiles; int ncomponents; int poc; int * properties; int * qntsty; int * codsty; TYPE_2__* tile; } ;
typedef TYPE_1__ Jpeg2000DecoderContext ;
typedef TYPE_2__ Jpeg2000Component ;
typedef int Jpeg2000CodingStyle ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(Jpeg2000DecoderContext *VAR_0)
{
    int VAR_1, VAR_2;
    for (VAR_1 = 0; VAR_1 < VAR_0->numXtiles * VAR_0->numYtiles; VAR_1++) {
        if (VAR_0->tile[VAR_1].comp) {
            for (VAR_2 = 0; VAR_2 < VAR_0->ncomponents; VAR_2++) {
                Jpeg2000Component *VAR_3 = VAR_0->tile[VAR_1].comp + VAR_2;
                Jpeg2000CodingStyle *VAR_4 = VAR_0->tile[VAR_1].codsty + VAR_2;

                FUNC_1(VAR_3, VAR_4);
            }
            FUNC_0(&VAR_0->tile[VAR_1].comp);
        }
    }
    FUNC_0(&VAR_0->tile);
    FUNC_2(VAR_0->codsty, 0, sizeof(VAR_0->codsty));
    FUNC_2(VAR_0->qntsty, 0, sizeof(VAR_0->qntsty));
    FUNC_2(VAR_0->properties, 0, sizeof(VAR_0->properties));
    FUNC_2(&VAR_0->poc , 0, sizeof(VAR_0->poc));
    VAR_0->numXtiles = VAR_0->numYtiles = 0;
    VAR_0->ncomponents = 0;
}
