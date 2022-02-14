
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVAudioServiceType { ____Placeholder_AVAudioServiceType } AVAudioServiceType ;
struct TYPE_3__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ AVPacketSideData ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_3, AVPacketSideData *VAR_4)
{
    enum AVAudioServiceType *VAR_5 = (enum AVAudioServiceType *)VAR_4->data;

    if (VAR_4->size < sizeof(*VAR_5)) {
        FUNC_0(VAR_3, VAR_0, "invalid data");
        return;
    }

    switch (*VAR_5) {
    case 130:
        FUNC_0(VAR_3, VAR_1, "main");
        break;
    case 134:
        FUNC_0(VAR_3, VAR_1, "effects");
        break;
    case 129:
        FUNC_0(VAR_3, VAR_1, "visually impaired");
        break;
    case 132:
        FUNC_0(VAR_3, VAR_1, "hearing impaired");
        break;
    case 135:
        FUNC_0(VAR_3, VAR_1, "dialogue");
        break;
    case 136:
        FUNC_0(VAR_3, VAR_1, "commentary");
        break;
    case 133:
        FUNC_0(VAR_3, VAR_1, "emergency");
        break;
    case 128:
        FUNC_0(VAR_3, VAR_1, "voice over");
        break;
    case 131:
        FUNC_0(VAR_3, VAR_1, "karaoke");
        break;
    default:
        FUNC_0(VAR_3, VAR_2, "unknown");
        break;
    }
}
