
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* par_in; } ;
struct TYPE_6__ {int extradata_size; scalar_t__ extradata; } ;
typedef int MPEG4AudioConfig ;
typedef TYPE_2__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int *,scalar_t__,int ,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(AVBSFContext *VAR_1)
{

    if (VAR_1->par_in->extradata) {
        MPEG4AudioConfig VAR_2;
        int VAR_3 = FUNC_1(&VAR_2, VAR_1->par_in->extradata,
                                                VAR_1->par_in->extradata_size, 1, VAR_1);
        if (VAR_3 < 0) {
            FUNC_0(VAR_1, VAR_0, "Error parsing AudioSpecificConfig extradata!\n");
            return VAR_3;
        }
    }

    return 0;
}
