
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {unsigned int timeres; int shift; } ;
typedef TYPE_1__ JACOsubContext ;


 int FUNC_0 (char const*,char*,...) ;

__attribute__((used)) static const char *FUNC_1(JACOsubContext *VAR_0, const char *VAR_1,
                           int64_t *VAR_2, int64_t *VAR_3)
{
    int VAR_4;
    unsigned VAR_5, VAR_6, VAR_7, VAR_8;
    unsigned VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13, VAR_14;
    int64_t VAR_15, VAR_16;


    if (FUNC_0(VAR_1, "%u:%u:%u.%u %u:%u:%u.%u %n",
               &VAR_5, &VAR_6, &VAR_7, &VAR_8,
               &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_4) == 8) {
        VAR_13 = (VAR_5*3600 + VAR_6*60 + VAR_7) * VAR_0->timeres + VAR_8;
        VAR_14 = (VAR_9*3600 + VAR_10*60 + VAR_11) * VAR_0->timeres + VAR_12;
        goto shift_and_ret;
    }


    if (FUNC_0(VAR_1, "@%u @%u %n", &VAR_13, &VAR_14, &VAR_4) == 2)
        goto shift_and_ret;

    return ((void*)0);

shift_and_ret:
    VAR_15 = (VAR_13 + VAR_0->shift) * 100LL / VAR_0->timeres;
    VAR_16 = (VAR_14 + VAR_0->shift) * 100LL / VAR_0->timeres;
    *VAR_2 = VAR_15;
    *VAR_3 = VAR_16 - VAR_15;
    return VAR_1 + VAR_4;
}
