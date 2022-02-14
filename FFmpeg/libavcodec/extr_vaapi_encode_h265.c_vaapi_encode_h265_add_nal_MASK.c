
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cbc; } ;
typedef TYPE_1__ VAAPIEncodeH265Context ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int nal_unit_type; } ;
typedef TYPE_2__ H265RawNALUnitHeader ;
typedef int CodedBitstreamFragment ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_1 (int ,int *,int,int ,void*,int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1,
                                     CodedBitstreamFragment *VAR_2,
                                     void *VAR_3)
{
    VAAPIEncodeH265Context *VAR_4 = VAR_1->priv_data;
    H265RawNALUnitHeader *VAR_5 = VAR_3;
    int VAR_6;

    VAR_6 = FUNC_1(VAR_4->cbc, VAR_2, -1,
                                     VAR_5->nal_unit_type, VAR_3, ((void*)0));
    if (VAR_6 < 0) {
        FUNC_0(VAR_1, VAR_0, "Failed to add NAL unit: "
               "type = %d.\n", VAR_5->nal_unit_type);
        return VAR_6;
    }

    return 0;
}
