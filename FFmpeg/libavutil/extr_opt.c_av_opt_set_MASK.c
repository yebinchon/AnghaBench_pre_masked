
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef double int64_t ;
struct TYPE_16__ {int type; int flags; int offset; double min; double max; int name; int help; } ;
struct TYPE_15__ {int num; int den; } ;
typedef TYPE_1__ AVRational ;
typedef TYPE_2__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 double FUNC_1 (char const*) ;
 int FUNC_2 (void*,int ,char*,...) ;
 TYPE_2__* FUNC_3 (void*,char const*,int *,int ,int,void**) ;
 int FUNC_4 (double*,char const*,int) ;
 int FUNC_5 (void*,TYPE_2__ const*,char const*,void*) ;
 int FUNC_6 (void*,TYPE_2__ const*,char const*,void*) ;
 int FUNC_7 (void*,TYPE_2__ const*,char const*,void*) ;
 int FUNC_8 (void*,TYPE_2__ const*,char const*,void*) ;
 int FUNC_9 (void*,TYPE_2__ const*,char const*,void*) ;
 int FUNC_10 (void*,void*,TYPE_2__ const*,char const*,void*) ;
 int FUNC_11 (void*,TYPE_2__ const*,char const*,void*) ;
 int FUNC_12 (void*,TYPE_2__ const*,char const*,void*) ;
 int FUNC_13 (void*,TYPE_2__ const*,char const*,TYPE_1__*) ;
 int FUNC_14 (char const*,char*) ;
 int FUNC_15 (void*,TYPE_2__ const*,void*,int,int ,int ) ;

int FUNC_16(void *VAR_7, const char *VAR_8, const char *VAR_9, int VAR_10)
{
    int VAR_11 = 0;
    void *VAR_12, *VAR_13;
    const AVOption *VAR_14 = FUNC_3(VAR_7, VAR_8, ((void*)0), 0, VAR_10, &VAR_13);
    if (!VAR_14 || !VAR_13)
        return VAR_0;
    if (!VAR_9 && (VAR_14->type != 130 &&
                 VAR_14->type != 133 && VAR_14->type != 131 &&
                 VAR_14->type != 136 && VAR_14->type != 128 &&
                 VAR_14->type != 139 && VAR_14->type != 141 &&
                 VAR_14->type != 142 && VAR_14->type != 143))
        return FUNC_0(VAR_5);

    if (VAR_14->flags & VAR_4)
        return FUNC_0(VAR_5);

    if (VAR_14->flags & VAR_3)
        FUNC_2(VAR_7, VAR_2, "The \"%s\" option is deprecated: %s\n", VAR_8, VAR_14->help);

    VAR_12 = ((uint8_t *)VAR_13) + VAR_14->offset;
    switch (VAR_14->type) {
    case 143:
        return FUNC_7(VAR_7, VAR_14, VAR_9, VAR_12);
    case 130:
        return FUNC_5(VAR_7, VAR_14, VAR_9, VAR_12);
    case 144:
        return FUNC_6(VAR_7, VAR_14, VAR_9, VAR_12);
    case 138:
    case 135:
    case 134:
    case 129:
    case 137:
    case 140:
    case 132:
        return FUNC_10(VAR_7, VAR_13, VAR_14, VAR_9, VAR_12);
    case 136:
        return FUNC_9(VAR_7, VAR_14, VAR_9, VAR_12);
    case 128: {
        AVRational VAR_15;
        VAR_11 = FUNC_13(VAR_7, VAR_14, VAR_9, &VAR_15);
        if (VAR_11 < 0)
            return VAR_11;
        return FUNC_15(VAR_7, VAR_14, VAR_12, 1, VAR_15.den, VAR_15.num);
    }
    case 133:
        return FUNC_11(VAR_7, VAR_14, VAR_9, VAR_12);
    case 131:
        return FUNC_12(VAR_7, VAR_14, VAR_9, VAR_12);
    case 139:
        {
            int64_t VAR_16 = 0;
            if (VAR_9) {
                if ((VAR_11 = FUNC_4(&VAR_16, VAR_9, 1)) < 0) {
                    FUNC_2(VAR_7, VAR_1, "Unable to parse option value \"%s\" as duration\n", VAR_9);
                    return VAR_11;
                }
            }
            if (VAR_16 < VAR_14->min || VAR_16 > VAR_14->max) {
                FUNC_2(VAR_7, VAR_1, "Value %f for parameter '%s' out of range [%g - %g]\n",
                       VAR_16 / 1000000.0, VAR_14->name, VAR_14->min / 1000000.0, VAR_14->max / 1000000.0);
                return FUNC_0(VAR_6);
            }
            *(int64_t *)VAR_12 = VAR_16;
            return 0;
        }
    case 141:
        return FUNC_8(VAR_7, VAR_14, VAR_9, VAR_12);
    case 142:
        if (!VAR_9 || !FUNC_14(VAR_9, "none")) {
            *(int64_t *)VAR_12 = 0;
        } else {
            int64_t VAR_17 = FUNC_1(VAR_9);
            if (!VAR_17) {
                FUNC_2(VAR_7, VAR_1, "Unable to parse option value \"%s\" as channel layout\n", VAR_9);
                VAR_11 = FUNC_0(VAR_5);
            }
            *(int64_t *)VAR_12 = VAR_17;
            return VAR_11;
        }
        break;
    }

    FUNC_2(VAR_7, VAR_1, "Invalid option type.\n");
    return FUNC_0(VAR_5);
}
