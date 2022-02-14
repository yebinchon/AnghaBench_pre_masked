
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int i64; double dbl; int str; } ;
struct TYPE_15__ {int offset; int flags; int type; int name; TYPE_1__ default_val; } ;
struct TYPE_14__ {int den; int num; } ;
typedef TYPE_2__ AVRational ;
typedef TYPE_3__ AVOption ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ FUNC_0 (double,int ) ;
 int FUNC_1 (void*,int ,char*,int,int ) ;
 TYPE_3__* FUNC_2 (void*,TYPE_3__ const*) ;
 int FUNC_3 (void*,TYPE_3__ const*,int ,void*) ;
 int FUNC_4 (void*,TYPE_3__ const*,int ,void*) ;
 int FUNC_5 (void*,TYPE_3__ const*,int ,void*) ;
 int FUNC_6 (void*,TYPE_3__ const*,int ,void*) ;
 int FUNC_7 (void*,TYPE_3__ const*,int ,void*) ;
 int FUNC_8 (void*,TYPE_3__ const*,void*,int,int,int) ;

void FUNC_9(void *VAR_3, int VAR_4, int VAR_5)
{
    const AVOption *VAR_6 = ((void*)0);
    while ((VAR_6 = FUNC_2(VAR_3, VAR_6))) {
        void *VAR_7 = ((uint8_t*)VAR_3) + VAR_6->offset;

        if ((VAR_6->flags & VAR_4) != VAR_5)
            continue;

        if (VAR_6->flags & VAR_1)
            continue;

        switch (VAR_6->type) {
            case 142:

                break;
            case 145:
            case 138:
            case 135:
            case 134:
            case 129:
            case 139:
            case 144:
            case 133:
            case 131:
                FUNC_8(VAR_3, VAR_6, VAR_7, 1, 1, VAR_6->default_val.i64);
                break;
            case 140:
            case 137: {
                double VAR_8;
                VAR_8 = VAR_6->default_val.dbl;
                FUNC_8(VAR_3, VAR_6, VAR_7, VAR_8, 1, 1);
            }
            break;
            case 132: {
                AVRational VAR_9;
                VAR_9 = FUNC_0(VAR_6->default_val.dbl, VAR_2);
                FUNC_8(VAR_3, VAR_6, VAR_7, 1, VAR_9.den, VAR_9.num);
            }
            break;
            case 143:
                FUNC_5(VAR_3, VAR_6, VAR_6->default_val.str, VAR_7);
                break;
            case 130:
                FUNC_3(VAR_3, VAR_6, VAR_6->default_val.str, VAR_7);
                break;
            case 136:
                FUNC_6(VAR_3, VAR_6, VAR_6->default_val.str, VAR_7);
                break;
            case 128:
                FUNC_7(VAR_3, VAR_6, VAR_6->default_val.str, VAR_7);
                break;
            case 146:
                FUNC_4(VAR_3, VAR_6, VAR_6->default_val.str, VAR_7);
                break;
            case 141:

            break;
        default:
            FUNC_1(VAR_3, VAR_0, "AVOption type %d of option %s not implemented yet\n",
                   VAR_6->type, VAR_6->name);
        }
    }
}
