
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t extradata_size; int extradata; } ;
typedef int CMVideoFormatDescriptionRef ;
typedef int CMSampleBufferRef ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int ,size_t) ;
 int FUNC_5 (TYPE_1__*,int ,size_t*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_4, CMSampleBufferRef VAR_5)
{
    CMVideoFormatDescriptionRef VAR_6;
    size_t VAR_7;
    int VAR_8;

    VAR_6 = FUNC_1(VAR_5);
    if (!VAR_6) {
        FUNC_2(VAR_4, VAR_2, "No video format.\n");
        return VAR_0;
    }

    VAR_8 = FUNC_5(VAR_4, VAR_6, &VAR_7);
    if (VAR_8) {
        FUNC_2(VAR_4, VAR_2, "Could not get parameter sets.\n");
        return VAR_8;
    }

    VAR_4->extradata = FUNC_3(VAR_7 + VAR_1);
    if (!VAR_4->extradata) {
        return FUNC_0(VAR_3);
    }
    VAR_4->extradata_size = VAR_7;

    VAR_8 = FUNC_4(VAR_4, VAR_6, VAR_4->extradata, VAR_7);

    if (VAR_8) {
        FUNC_2(VAR_4, VAR_2, "Could not copy param sets.\n");
        return VAR_8;
    }

    return 0;
}
