
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* par_in; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int length_size; int new_idr; int extradata_parsed; scalar_t__ idr_pps_seen; scalar_t__ idr_sps_seen; } ;
struct TYPE_7__ {int extradata_size; int extradata; } ;
typedef TYPE_2__ H264BSFContext ;
typedef TYPE_3__ AVBSFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(AVBSFContext *VAR_4)
{
    H264BSFContext *VAR_5 = VAR_4->priv_data;
    int VAR_6 = VAR_4->par_in->extradata_size;
    int VAR_7;


    if (!VAR_6 ||
        (VAR_6 >= 3 && FUNC_0(VAR_4->par_in->extradata) == 1) ||
        (VAR_6 >= 4 && FUNC_1(VAR_4->par_in->extradata) == 1)) {
        FUNC_2(VAR_4, VAR_3,
               "The input looks like it is Annex B already\n");
    } else if (VAR_6 >= 6) {
        VAR_7 = FUNC_3(VAR_4, VAR_1);
        if (VAR_7 < 0)
            return VAR_7;

        VAR_5->length_size = VAR_7;
        VAR_5->new_idr = 1;
        VAR_5->idr_sps_seen = 0;
        VAR_5->idr_pps_seen = 0;
        VAR_5->extradata_parsed = 1;
    } else {
        FUNC_2(VAR_4, VAR_2, "Invalid extradata size: %d\n", VAR_6);
        return VAR_0;
    }

    return 0;
}
