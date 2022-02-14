
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {scalar_t__ num; scalar_t__ den; } ;
typedef TYPE_1__ AVRational ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__,TYPE_1__) ;
 int FUNC_3 (int,TYPE_1__,TYPE_1__,int ) ;

int64_t FUNC_4(AVRational VAR_3, int64_t VAR_4, AVRational VAR_5, int VAR_6, int64_t *VAR_7, AVRational VAR_8){
    int64_t VAR_9, VAR_10, VAR_11;

    FUNC_0(VAR_4 != VAR_0);
    FUNC_0(VAR_6 >= 0);

    if (*VAR_7 == VAR_0 || !VAR_6 || VAR_3.num*(int64_t)VAR_8.den <= VAR_8.num*(int64_t)VAR_3.den) {
simple_round:
        *VAR_7 = FUNC_2(VAR_4, VAR_3, VAR_5) + VAR_6;
        return FUNC_2(VAR_4, VAR_3, VAR_8);
    }

    VAR_9 = FUNC_3(2*VAR_4-1, VAR_3, VAR_5, VAR_1) >>1;
    VAR_10 = (FUNC_3(2*VAR_4+1, VAR_3, VAR_5, VAR_2 )+1)>>1;
    if (*VAR_7 < 2*VAR_9 - VAR_10 || *VAR_7 > 2*VAR_10 - VAR_9)
        goto simple_round;

    VAR_11 = FUNC_1(*VAR_7, VAR_9, VAR_10);
    *VAR_7 = VAR_11 + VAR_6;

    return FUNC_2(VAR_11, VAR_5, VAR_8);
}
