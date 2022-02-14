
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {void* exception; int SR; scalar_t__* D; } ;
typedef TYPE_1__ Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int,int ,int*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 size_t VAR_5 ;

__attribute__((used)) static int FUNC_3(Q68State *VAR_6, uint32_t VAR_7)
{
    VAR_2;
    int VAR_8 = VAR_3;

    int VAR_9;
    int32_t VAR_10;
    if (FUNC_0(VAR_7) == VAR_0) {
        return FUNC_2(VAR_6, VAR_7);
    }
    VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_8, 0, &VAR_9);
    if (VAR_9 < 0) {
        return 0;
    }
    if (VAR_8 == VAR_3) {
        VAR_10 = (int32_t)(int16_t)VAR_10;
    }

    int32_t VAR_11;
    if (VAR_8 == VAR_3) {
        VAR_11 = (int32_t)(int16_t)VAR_6->D[VAR_5];
    } else {
        VAR_11 = (int32_t)VAR_6->D[VAR_5];
    }
    if (VAR_11 < 0) {
        VAR_6->SR |= VAR_4;
        VAR_6->exception = VAR_1;
        return VAR_9;
    } else if (VAR_11 > VAR_10) {
        VAR_6->SR &= ~VAR_4;
        VAR_6->exception = VAR_1;
        return VAR_9;
    }

    return 10 + VAR_9;
}
