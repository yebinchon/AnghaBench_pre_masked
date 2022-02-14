
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVAudioServiceType { ____Placeholder_AVAudioServiceType } AVAudioServiceType ;
struct TYPE_3__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ AVFrameSideData ;
typedef int AVFilterContext ;
 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_1, AVFrameSideData *VAR_2)
{
    enum AVAudioServiceType *VAR_3;

    FUNC_0(VAR_1, VAR_0, "audio service type: ");
    if (VAR_2->size < sizeof(*VAR_3)) {
        FUNC_0(VAR_1, VAR_0, "invalid data");
        return;
    }
    VAR_3 = (enum AVAudioServiceType*)VAR_2->data;
    switch (*VAR_3) {
    case 130: FUNC_0(VAR_1, VAR_0, "Main Audio Service"); break;
    case 134: FUNC_0(VAR_1, VAR_0, "Effects"); break;
    case 129: FUNC_0(VAR_1, VAR_0, "Visually Impaired"); break;
    case 132: FUNC_0(VAR_1, VAR_0, "Hearing Impaired"); break;
    case 135: FUNC_0(VAR_1, VAR_0, "Dialogue"); break;
    case 136: FUNC_0(VAR_1, VAR_0, "Commentary"); break;
    case 133: FUNC_0(VAR_1, VAR_0, "Emergency"); break;
    case 128: FUNC_0(VAR_1, VAR_0, "Voice Over"); break;
    case 131: FUNC_0(VAR_1, VAR_0, "Karaoke"); break;
    default: FUNC_0(VAR_1, VAR_0, "unknown"); break;
    }
}
