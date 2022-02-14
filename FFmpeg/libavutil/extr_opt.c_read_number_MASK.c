
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {double dbl; } ;
struct TYPE_7__ {int type; TYPE_1__ default_val; } ;
struct TYPE_6__ {int num; int den; } ;
typedef TYPE_2__ AVRational ;
typedef TYPE_3__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const AVOption *VAR_1, const void *VAR_2, double *VAR_3, int *VAR_4, int64_t *VAR_5)
{
    switch (VAR_1->type) {
    case 135:
        *VAR_5 = *(unsigned int*)VAR_2;
        return 0;
    case 131:
        *VAR_5 = *(enum AVPixelFormat *)VAR_2;
        return 0;
    case 129:
        *VAR_5 = *(enum AVSampleFormat *)VAR_2;
        return 0;
    case 140:
    case 133:
        *VAR_5 = *(int *)VAR_2;
        return 0;
    case 139:
    case 136:
    case 132:
    case 128:
        *VAR_5 = *(int64_t *)VAR_2;
        return 0;
    case 134:
        *VAR_3 = *(float *)VAR_2;
        return 0;
    case 137:
        *VAR_3 = *(double *)VAR_2;
        return 0;
    case 130:
        *VAR_5 = ((AVRational *)VAR_2)->num;
        *VAR_4 = ((AVRational *)VAR_2)->den;
        return 0;
    case 138:
        *VAR_3 = VAR_1->default_val.dbl;
        return 0;
    }
    return FUNC_0(VAR_0);
}
