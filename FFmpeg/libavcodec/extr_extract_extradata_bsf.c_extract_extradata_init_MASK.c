
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ id; int extract; } ;
struct TYPE_9__ {TYPE_1__* par_in; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int extract; } ;
struct TYPE_7__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ ExtractExtradataContext ;
typedef TYPE_3__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static int FUNC_1(AVBSFContext *VAR_2)
{
    ExtractExtradataContext *VAR_3 = VAR_2->priv_data;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
        if (VAR_1[VAR_4].id == VAR_2->par_in->codec_id) {
            VAR_3->extract = VAR_1[VAR_4].extract;
            break;
        }
    }
    if (!VAR_3->extract)
        return VAR_0;

    return 0;
}
