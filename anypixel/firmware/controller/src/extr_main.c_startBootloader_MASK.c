
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int type; scalar_t__ payload; } ;
struct TYPE_4__ {TYPE_1__ s; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

void FUNC_3() {
    int VAR_4;
    uint32_t * VAR_5 = (uint32_t*)VAR_3[VAR_0].s.payload;


    for(VAR_4 = 0; VAR_4 < 10; VAR_4++) {
        VAR_3[VAR_0].s.type = VAR_2;
        VAR_5[0] = 0x816A4EB2;
        FUNC_0();
        FUNC_1();
        FUNC_2(100);
    }
    for(VAR_4 = 0; VAR_4 < 10; VAR_4++) {
        VAR_3[VAR_0].s.type = VAR_1;
        FUNC_1();
        FUNC_2(500);
    }
}
