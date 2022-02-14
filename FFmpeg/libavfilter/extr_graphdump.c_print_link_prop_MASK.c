
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int layout ;
struct TYPE_9__ {int len; int member_0; } ;
struct TYPE_7__ {int den; int num; } ;
struct TYPE_8__ {int type; scalar_t__ sample_rate; int format; int channel_layout; int channels; TYPE_1__ sample_aspect_ratio; int h; int w; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVBPrint ;




 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(AVBPrint *VAR_0, AVFilterLink *VAR_1)
{
    char *VAR_2;
    char VAR_3[64];
    AVBPrint VAR_4 = { 0 };

    if (!VAR_0)
        VAR_0 = &VAR_4;
    switch (VAR_1->type) {
        case 128:
            VAR_2 = FUNC_4(FUNC_2(VAR_1->format), "?");
            FUNC_0(VAR_0, "[%dx%d %d:%d %s]", VAR_1->w, VAR_1->h,
                    VAR_1->sample_aspect_ratio.num,
                    VAR_1->sample_aspect_ratio.den,
                    VAR_2);
            break;

        case 129:
            FUNC_1(VAR_3, sizeof(VAR_3),
                                         VAR_1->channels, VAR_1->channel_layout);
            VAR_2 = FUNC_4(FUNC_3(VAR_1->format), "?");
            FUNC_0(VAR_0, "[%dHz %s:%s]",
                       (int)VAR_1->sample_rate, VAR_2, VAR_3);
            break;

        default:
            FUNC_0(VAR_0, "?");
            break;
    }
    return VAR_0->len;
}
