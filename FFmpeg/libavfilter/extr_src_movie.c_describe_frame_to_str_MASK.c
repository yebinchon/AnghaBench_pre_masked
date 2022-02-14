
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_8__ {int time_base; } ;
struct TYPE_6__ {int num; int den; } ;
struct TYPE_7__ {int width; int height; int nb_samples; int pts; TYPE_1__ sample_aspect_ratio; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;




 char* FUNC_0 (int) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,size_t,char*,char*,...) ;

__attribute__((used)) static char *FUNC_4(char *VAR_0, size_t VAR_1,
                                   AVFrame *VAR_2, enum AVMediaType VAR_3,
                                   AVFilterLink *VAR_4)
{
    switch (VAR_3) {
    case 128:
        FUNC_3(VAR_0, VAR_1,
                 "video pts:%s time:%s size:%dx%d aspect:%d/%d",
                 FUNC_1(VAR_2->pts), FUNC_2(VAR_2->pts, &VAR_4->time_base),
                 VAR_2->width, VAR_2->height,
                 VAR_2->sample_aspect_ratio.num,
                 VAR_2->sample_aspect_ratio.den);
                 break;
    case 129:
        FUNC_3(VAR_0, VAR_1,
                 "audio pts:%s time:%s samples:%d",
                 FUNC_1(VAR_2->pts), FUNC_2(VAR_2->pts, &VAR_4->time_base),
                 VAR_2->nb_samples);
                 break;
    default:
        FUNC_3(VAR_0, VAR_1, "%s BUG", FUNC_0(VAR_3));
        break;
    }
    return VAR_0;
}
