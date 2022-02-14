
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {double MaxCLL; } ;
struct TYPE_10__ {scalar_t__ color_trc; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {int max_luminance; scalar_t__ has_luminance; } ;
typedef TYPE_1__ AVMasteringDisplayMetadata ;
typedef TYPE_2__ AVFrameSideData ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVContentLightMetadata ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ) ;
 double FUNC_1 (int ) ;

double FUNC_2(AVFrame *VAR_4)
{
    AVFrameSideData *VAR_5 = FUNC_0(VAR_4, VAR_1);
    double VAR_6 = 0;

    if (VAR_5) {
        AVContentLightMetadata *VAR_7 = (AVContentLightMetadata *)VAR_5->data;
        VAR_6 = VAR_7->MaxCLL / VAR_3;
    }

    VAR_5 = FUNC_0(VAR_4, VAR_2);
    if (!VAR_6 && VAR_5) {
        AVMasteringDisplayMetadata *VAR_8 = (AVMasteringDisplayMetadata *)VAR_5->data;
        if (VAR_8->has_luminance)
            VAR_6 = FUNC_1(VAR_8->max_luminance) / VAR_3;
    }



    if (!VAR_6)
        VAR_6 = VAR_4->color_trc == VAR_0 ? 100.0f : 10.0f;

    return VAR_6;
}
