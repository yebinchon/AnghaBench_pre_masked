
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int bit_index; int g; int ncomponents; } ;
struct TYPE_13__ {int REpoc; int Ppoc; int CEpoc; int LYEpoc; int CSpoc; int RSpoc; } ;
struct TYPE_10__ {int nb_poc; TYPE_4__* poc; } ;
struct TYPE_12__ {TYPE_2__* codsty; TYPE_1__ poc; } ;
struct TYPE_11__ {int prog_order; int nlayers; } ;
typedef TYPE_3__ Jpeg2000Tile ;
typedef TYPE_4__ Jpeg2000POCEntry ;
typedef TYPE_5__ Jpeg2000DecoderContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_3__*,int ,int ,int ,int,int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(Jpeg2000DecoderContext *VAR_1, Jpeg2000Tile *VAR_2)
{
    int VAR_3 = VAR_0;
    int VAR_4;
    int VAR_5 = 0;

    VAR_1->bit_index = 8;
    if (VAR_2->poc.nb_poc) {
        for (VAR_4=0; VAR_4<VAR_2->poc.nb_poc; VAR_4++) {
            Jpeg2000POCEntry *VAR_6 = &VAR_2->poc.poc[VAR_4];
            VAR_3 = FUNC_2(VAR_1, VAR_2,
                VAR_6->RSpoc, VAR_6->CSpoc,
                FUNC_0(VAR_6->LYEpoc, VAR_2->codsty[0].nlayers),
                VAR_6->REpoc,
                FUNC_0(VAR_6->CEpoc, VAR_1->ncomponents),
                VAR_6->Ppoc, &VAR_5
                );
            if (VAR_3 < 0)
                return VAR_3;
        }
    } else {
        VAR_3 = FUNC_2(VAR_1, VAR_2,
            0, 0,
            VAR_2->codsty[0].nlayers,
            33,
            VAR_1->ncomponents,
            VAR_2->codsty[0].prog_order,
            &VAR_5
        );
    }

    FUNC_1(&VAR_1->g, 2);

    return VAR_3;
}
