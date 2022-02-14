
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct JNIAMediaCodecListFields {int codec_profile_level_class; scalar_t__ hevc_profile_main10_id; scalar_t__ hevc_profile_main_id; scalar_t__ avc_profile_high444_id; scalar_t__ avc_profile_high422_id; scalar_t__ avc_profile_high10_id; scalar_t__ avc_profile_high_id; scalar_t__ avc_profile_extended_id; scalar_t__ avc_profile_main_id; scalar_t__ avc_profile_baseline_id; int member_0; } ;
typedef scalar_t__ jfieldID ;
struct TYPE_14__ {scalar_t__ codec_id; int profile; } ;
struct TYPE_13__ {int (* GetStaticIntField ) (TYPE_1__**,int ,scalar_t__) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__**,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__**,int,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__**,struct JNIAMediaCodecListFields*,int ,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__**,struct JNIAMediaCodecListFields*,int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__**,int ,scalar_t__) ;

int FUNC_5(AVCodecContext *VAR_3)
{
    int VAR_4 = -1;

    JNIEnv *VAR_5 = ((void*)0);
    struct JNIAMediaCodecListFields VAR_6 = { 0 };
    jfieldID VAR_7 = 0;

    FUNC_0(VAR_5, VAR_3, -1);

    if (FUNC_2(VAR_5, &VAR_6, VAR_2, 0, VAR_3) < 0) {
        goto done;
    }

    if (VAR_3->codec_id == VAR_0) {
        switch(VAR_3->profile) {
        case 142:
        case 141:
            VAR_7 = VAR_6.avc_profile_baseline_id;
            break;
        case 131:
            VAR_7 = VAR_6.avc_profile_main_id;
            break;
        case 140:
            VAR_7 = VAR_6.avc_profile_extended_id;
            break;
        case 139:
            VAR_7 = VAR_6.avc_profile_high_id;
            break;
        case 138:
        case 137:
            VAR_7 = VAR_6.avc_profile_high10_id;
            break;
        case 136:
        case 135:
            VAR_7 = VAR_6.avc_profile_high422_id;
            break;
        case 134:
        case 133:
        case 132:
            VAR_7 = VAR_6.avc_profile_high444_id;
            break;
        }
    } else if (VAR_3->codec_id == VAR_1) {
        switch (VAR_3->profile) {
        case 130:
        case 128:
            VAR_7 = VAR_6.hevc_profile_main_id;
            break;
        case 129:
            VAR_7 = VAR_6.hevc_profile_main10_id;
            break;
        }
    }

        if (VAR_7) {
            VAR_4 = (*VAR_5)->GetStaticIntField(VAR_5, VAR_6.codec_profile_level_class, VAR_7);
            if (FUNC_1(VAR_5, 1, VAR_3) < 0) {
                VAR_4 = -1;
                goto done;
            }
        }

done:
    FUNC_3(VAR_5, &VAR_6, VAR_2, 0, VAR_3);

    return VAR_4;
}
