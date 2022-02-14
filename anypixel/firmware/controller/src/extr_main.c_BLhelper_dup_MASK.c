
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_3__ {void** payload; } ;
struct TYPE_4__ {TYPE_1__ s; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_0() {
    int VAR_2;
    for(VAR_2 = 0; VAR_2 < 48; VAR_2++) {
        uint8_t VAR_3 = VAR_1[VAR_0].s.payload[VAR_2];
        VAR_1[VAR_0].s.payload[VAR_2+48] = VAR_3;
        VAR_1[VAR_0].s.payload[VAR_2+48*2] = VAR_3;
        VAR_1[VAR_0].s.payload[VAR_2+48*3] = VAR_3;
        VAR_1[VAR_0].s.payload[VAR_2+48*4] = VAR_3;
    }
}
