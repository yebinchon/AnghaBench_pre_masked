
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__* d; } ;
typedef TYPE_1__ motion_vect ;



__attribute__((used)) static inline uint8_t FUNC_0(motion_vect VAR_0)
{
    uint8_t VAR_1 = 8 - ((uint8_t) VAR_0.d[0]);
    uint8_t VAR_2 = 8 - ((uint8_t) VAR_0.d[1]);
    return ((VAR_1&15)<<4) | (VAR_2&15);
}
