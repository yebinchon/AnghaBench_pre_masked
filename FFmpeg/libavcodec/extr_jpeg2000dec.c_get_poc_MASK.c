
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int ncomponents; int avctx; int g; } ;
struct TYPE_11__ {int member_0; } ;
struct TYPE_10__ {TYPE_2__ member_0; } ;
struct TYPE_13__ {int nb_poc; scalar_t__ is_default; TYPE_3__* poc; TYPE_1__ member_0; } ;
struct TYPE_12__ {int RSpoc; int CSpoc; int REpoc; int CEpoc; void* Ppoc; int LYEpoc; } ;
typedef TYPE_3__ Jpeg2000POCEntry ;
typedef TYPE_4__ Jpeg2000POC ;
typedef TYPE_5__ Jpeg2000DecoderContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_6(Jpeg2000DecoderContext *VAR_4, int VAR_5, Jpeg2000POC *VAR_6)
{
    int VAR_7;
    int VAR_8 = VAR_4->ncomponents <= 257 ? 7 : 9;
    Jpeg2000POC VAR_9 = {{{0}}};

    if (FUNC_3(&VAR_4->g) < 5 || VAR_5 < 2 + VAR_8) {
        FUNC_0(VAR_4->avctx, VAR_2, "Insufficient space for POC\n");
        return VAR_0;
    }

    if (VAR_8 > 7) {
        FUNC_1(VAR_4->avctx, "Fat POC not supported");
        return VAR_1;
    }

    VAR_9.nb_poc = (VAR_5 - 2) / VAR_8;
    if (VAR_9.nb_poc > VAR_3) {
        FUNC_1(VAR_4->avctx, "Too many POCs (%d)", VAR_9.nb_poc);
        return VAR_1;
    }

    for (VAR_7 = 0; VAR_7<VAR_9.nb_poc; VAR_7++) {
        Jpeg2000POCEntry *VAR_10 = &VAR_9.poc[VAR_7];
        VAR_10->RSpoc = FUNC_4(&VAR_4->g);
        VAR_10->CSpoc = FUNC_4(&VAR_4->g);
        VAR_10->LYEpoc = FUNC_2(&VAR_4->g);
        VAR_10->REpoc = FUNC_4(&VAR_4->g);
        VAR_10->CEpoc = FUNC_4(&VAR_4->g);
        VAR_10->Ppoc = FUNC_4(&VAR_4->g);
        if (!VAR_10->CEpoc)
            VAR_10->CEpoc = 256;
        if (VAR_10->CEpoc > VAR_4->ncomponents)
            VAR_10->CEpoc = VAR_4->ncomponents;
        if ( VAR_10->RSpoc >= VAR_10->REpoc || VAR_10->REpoc > 33
            || VAR_10->CSpoc >= VAR_10->CEpoc || VAR_10->CEpoc > VAR_4->ncomponents
            || !VAR_10->LYEpoc) {
            FUNC_0(VAR_4->avctx, VAR_2, "POC Entry %d is invalid (%d, %d, %d, %d, %d, %d)\n", VAR_7,
                VAR_10->RSpoc, VAR_10->CSpoc, VAR_10->LYEpoc, VAR_10->REpoc, VAR_10->CEpoc, VAR_10->Ppoc
            );
            return VAR_0;
        }
    }

    if (!VAR_6->nb_poc || VAR_6->is_default) {
        *VAR_6 = VAR_9;
    } else {
        if (VAR_6->nb_poc + VAR_9.nb_poc > VAR_3) {
            FUNC_0(VAR_4->avctx, VAR_2, "Insufficient space for POC\n");
            return VAR_0;
        }
        FUNC_5(VAR_6->poc + VAR_6->nb_poc, VAR_9.poc, VAR_9.nb_poc * sizeof(VAR_9.poc[0]));
        VAR_6->nb_poc += VAR_9.nb_poc;
    }

    VAR_6->is_default = 0;

    return 0;
}
