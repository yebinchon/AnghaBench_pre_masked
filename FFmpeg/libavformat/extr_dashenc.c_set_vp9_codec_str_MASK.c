
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bitdepth; int level; int profile; } ;
typedef TYPE_1__ VPCC ;
typedef int AVRational ;
typedef int AVFormatContext ;
typedef int AVCodecParameters ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (char*,int,char*,int ,int ,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int *,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_1, AVCodecParameters *VAR_2,
                              AVRational *VAR_3, char *VAR_4, int VAR_5) {
    VPCC VAR_6;
    int VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_6);
    if (VAR_7 == 0) {
        FUNC_1(VAR_4, VAR_5, "vp09.%02d.%02d.%02d",
                    VAR_6.profile, VAR_6.level, VAR_6.bitdepth);
    } else {

        FUNC_0(VAR_1, VAR_0, "Could not find VP9 profile and/or level\n");
        FUNC_2(VAR_4, "vp9", VAR_5);
    }
    return;
}
