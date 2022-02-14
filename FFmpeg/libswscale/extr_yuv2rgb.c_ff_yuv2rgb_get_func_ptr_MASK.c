
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int srcFormat; int dstFormat; } ;
typedef int * SwsFunc ;
typedef TYPE_1__ SwsContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ,int ) ;
 int * FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;

SwsFunc FUNC_5(SwsContext *VAR_18)
{
    SwsFunc VAR_19 = ((void*)0);

    if (VAR_0)
        VAR_19 = FUNC_2(VAR_18);
    if (VAR_1)
        VAR_19 = FUNC_3(VAR_18);

    if (VAR_19)
        return VAR_19;

    FUNC_1(VAR_18, VAR_2,
           "No accelerated colorspace conversion found from %s to %s.\n",
           FUNC_0(VAR_18->srcFormat), FUNC_0(VAR_18->dstFormat));

    switch (VAR_18->dstFormat) {
    case 145:
    case 144:
        return VAR_15;
    case 134:
    case 133:
        return VAR_11;
    case 149:
    case 150:
        if (VAR_3 && FUNC_4(VAR_18->srcFormat))
            return VAR_16;
    case 128:
    case 139:
        return (VAR_3 && FUNC_4(VAR_18->srcFormat)) ? VAR_17 : VAR_10;
    case 137:
        return VAR_9;
    case 148:
        return VAR_8;
    case 130:
    case 141:
        return VAR_6;
    case 131:
    case 142:
        return VAR_5;
    case 135:
    case 146:
        return VAR_4;
    case 129:
    case 140:
        return VAR_14;
    case 136:
    case 147:
        return VAR_12;
    case 132:
    case 143:
        return VAR_13;
    case 138:
        return VAR_7;
    }
    return ((void*)0);
}
