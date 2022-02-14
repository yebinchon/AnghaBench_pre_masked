
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* par_in; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int length_size; int extradata_parsed; } ;
struct TYPE_7__ {scalar_t__ extradata_size; int extradata; } ;
typedef TYPE_2__ HEVCBSFContext ;
typedef TYPE_3__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVBSFContext *VAR_2)
{
    HEVCBSFContext *VAR_3 = VAR_2->priv_data;
    int VAR_4;

    if (VAR_2->par_in->extradata_size < VAR_1 ||
        FUNC_0(VAR_2->par_in->extradata) == 1 ||
        FUNC_1(VAR_2->par_in->extradata) == 1) {
        FUNC_2(VAR_2, VAR_0,
               "The input looks like it is Annex B already\n");
    } else {
        VAR_4 = FUNC_3(VAR_2);
        if (VAR_4 < 0)
            return VAR_4;
        VAR_3->length_size = VAR_4;
        VAR_3->extradata_parsed = 1;
    }

    return 0;
}
