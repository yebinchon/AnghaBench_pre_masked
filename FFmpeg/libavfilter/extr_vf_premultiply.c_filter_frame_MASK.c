
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {TYPE_4__* m; TYPE_4__* a; TYPE_4__* d; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_25__ {TYPE_1__* internal; scalar_t__ is_disabled; TYPE_5__** outputs; TYPE_3__* priv; } ;
struct TYPE_24__ {int format; int h; int w; } ;
struct TYPE_23__ {scalar_t__ color_range; } ;
struct TYPE_22__ {int * height; void** premultiply; scalar_t__ inverse; } ;
struct TYPE_20__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ PreMultiplyContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,int ,int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_16,
                        AVFrame **VAR_17, AVFrame *VAR_18, AVFrame *VAR_19)
{
    PreMultiplyContext *VAR_20 = VAR_16->priv;
    AVFilterLink *VAR_21 = VAR_16->outputs[0];

    if (VAR_16->is_disabled) {
        *VAR_17 = FUNC_2(VAR_18);
        if (!*VAR_17)
            return FUNC_0(VAR_2);
    } else {
        ThreadData VAR_22;
        int VAR_23, VAR_24;

        *VAR_17 = FUNC_5(VAR_21, VAR_21->w, VAR_21->h);
        if (!*VAR_17)
            return FUNC_0(VAR_2);
        FUNC_3(*VAR_17, VAR_18);

        VAR_23 = VAR_18->color_range == VAR_0;
        VAR_24 = VAR_18->color_range == VAR_1;

        if (VAR_20->inverse) {
            switch (VAR_21->format) {
            case 138:
            case 132:
                VAR_20->premultiply[0] = VAR_23 ? VAR_13 : VAR_14;
                VAR_20->premultiply[1] = VAR_20->premultiply[2] = VAR_15;
                break;
            case 128:
                VAR_20->premultiply[0] = VAR_13;
                VAR_20->premultiply[1] = VAR_20->premultiply[2] = VAR_15;
                break;
            case 150:
            case 154:
                VAR_20->premultiply[0] = VAR_20->premultiply[1] = VAR_20->premultiply[2] = VAR_24 ? VAR_14 : VAR_13;
                break;
            case 133:
            case 129:
            case 137:
            case 131:
            case 136:
            case 135:
            case 134:
            case 130:
                VAR_20->premultiply[0] = VAR_23 ? VAR_10 : VAR_11;
                VAR_20->premultiply[1] = VAR_20->premultiply[2] = VAR_12;
                break;
            case 145:
            case 149:
            case 153:
            case 148:
            case 152:
            case 147:
            case 146:
            case 151:
                VAR_20->premultiply[0] = VAR_20->premultiply[1] = VAR_20->premultiply[2] = VAR_24 ? VAR_11 : VAR_10;
                break;
            case 140:
                VAR_20->premultiply[0] = VAR_24 ? VAR_14 : VAR_13;
                break;
            case 139:
            case 144:
            case 143:
            case 142:
            case 141:
                VAR_20->premultiply[0] = VAR_24 ? VAR_11 : VAR_10;
                break;
            }
        } else {
            switch (VAR_21->format) {
            case 138:
            case 132:
                VAR_20->premultiply[0] = VAR_23 ? VAR_6 : VAR_7;
                VAR_20->premultiply[1] = VAR_20->premultiply[2] = VAR_8;
                break;
            case 128:
                VAR_20->premultiply[0] = VAR_6;
                VAR_20->premultiply[1] = VAR_20->premultiply[2] = VAR_8;
                break;
            case 150:
            case 154:
                VAR_20->premultiply[0] = VAR_20->premultiply[1] = VAR_20->premultiply[2] = VAR_24 ? VAR_7 : VAR_6;
                break;
            case 133:
            case 129:
            case 137:
            case 131:
            case 136:
            case 135:
            case 134:
            case 130:
                VAR_20->premultiply[0] = VAR_23 ? VAR_3 : VAR_4;
                VAR_20->premultiply[1] = VAR_20->premultiply[2] = VAR_5;
                break;
            case 145:
            case 149:
            case 153:
            case 148:
            case 152:
            case 147:
            case 146:
            case 151:
                VAR_20->premultiply[0] = VAR_20->premultiply[1] = VAR_20->premultiply[2] = VAR_24 ? VAR_4 : VAR_3;
                break;
            case 140:
                VAR_20->premultiply[0] = VAR_24 ? VAR_7 : VAR_6;
                break;
            case 139:
            case 144:
            case 143:
            case 142:
            case 141:
                VAR_20->premultiply[0] = VAR_24 ? VAR_4 : VAR_3;
                break;
            }
        }

        VAR_22.d = *VAR_17;
        VAR_22.a = VAR_19;
        VAR_22.m = VAR_18;
        VAR_16->internal->execute(VAR_16, VAR_9, &VAR_22, ((void*)0), FUNC_1(VAR_20->height[0],
                                                                        FUNC_4(VAR_16)));
    }

    return 0;
}
