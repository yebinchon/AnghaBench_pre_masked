
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
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;

void FUNC_3() {
    int VAR_6, VAR_7;
    uint32_t * VAR_8 = (uint32_t*)VAR_5[VAR_0].s.payload;
    VAR_5[VAR_0].s.type = VAR_3;
    VAR_8[0] = 0x45670123;
    VAR_8[1] = 0xCDEF89AB;
    FUNC_0();
    FUNC_1();

    VAR_5[VAR_0].s.type = VAR_1;
    VAR_8[0] = 0xACEA1623;
    FUNC_0();
    FUNC_1();

    FUNC_2(5000);

    for(VAR_6 = 0; VAR_6 < 10; VAR_6++) {
        VAR_5[VAR_0].s.type = VAR_4;
        VAR_8[0] = 0x08002000+32*VAR_6;
        VAR_8[1] = 0x8;
        for(VAR_7 = 0; VAR_7 < 8; VAR_7++)
            VAR_8[2+VAR_7] = 8*VAR_6+VAR_7;
        FUNC_0();
        FUNC_1();
    }

    for(VAR_6 = 0; VAR_6 < 10; VAR_6++) {
        VAR_5[VAR_0].s.type = VAR_2;
        VAR_8[0] = 0x08002000+32*VAR_6;
        VAR_8[1] = 0x8;
        FUNC_0();
        FUNC_1();
    }

    while(1);

}
