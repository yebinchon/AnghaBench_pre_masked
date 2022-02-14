
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int format; } ;
struct TYPE_7__ {TYPE_1__ out; } ;
typedef TYPE_2__ Stereo3DContext ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_3)
{
    Stereo3DContext *VAR_4 = VAR_3->priv;
    const enum AVPixelFormat *VAR_5;
    AVFilterFormats *VAR_6;

    switch (VAR_4->out.format) {
    case 141:
    case 140:
    case 139:
    case 138:
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
        VAR_5 = VAR_1;
        break;
    default:
        VAR_5 = VAR_2;
    }

    VAR_6 = FUNC_1(VAR_5);
    if (!VAR_6)
        return FUNC_0(VAR_0);
    return FUNC_2(VAR_3, VAR_6);
}
