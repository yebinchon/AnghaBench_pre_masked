
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_3__ {int (* readw_func ) (int) ;} ;
typedef TYPE_1__ Q68State ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int32_t FUNC_1(Q68State *VAR_0, uint32_t VAR_1) {
    return (int16_t) VAR_0->readw_func(VAR_1 & 0xFFFFFF);
}
