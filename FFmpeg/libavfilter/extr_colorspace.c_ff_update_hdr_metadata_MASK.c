
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int MaxCLL; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_5__ {int max_luminance; scalar_t__ has_luminance; } ;
typedef TYPE_1__ AVMasteringDisplayMetadata ;
typedef TYPE_2__ AVFrameSideData ;
typedef int AVFrame ;
typedef TYPE_3__ AVContentLightMetadata ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (double,int) ;
 TYPE_2__* FUNC_1 (int *,int ) ;

void FUNC_2(AVFrame *VAR_3, double VAR_4)
{
    AVFrameSideData *VAR_5 = FUNC_1(VAR_3, VAR_0);

    if (VAR_5) {
        AVContentLightMetadata *VAR_6 = (AVContentLightMetadata *)VAR_5->data;
        VAR_6->MaxCLL = (unsigned)(VAR_4 * VAR_2);
    }

    VAR_5 = FUNC_1(VAR_3, VAR_1);
    if (VAR_5) {
        AVMasteringDisplayMetadata *VAR_7 = (AVMasteringDisplayMetadata *)VAR_5->data;
        if (VAR_7->has_luminance)
            VAR_7->max_luminance = FUNC_0(VAR_4 * VAR_2, 10000);
    }
}
