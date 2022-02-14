
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int param1; int payload; int type; } ;
struct TYPE_5__ {char* a; TYPE_1__ s; } ;
typedef TYPE_2__ ledPacket_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int,int ) ;
 int * VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int * VAR_3 ;

__attribute__((used)) static bool FUNC_6(ledPacket_type *VAR_4, uint8_t *VAR_5, int VAR_6, int VAR_7, int VAR_8) {
    int VAR_9 = 0;
    int VAR_10, VAR_11;
    int VAR_12,VAR_13, VAR_14;
    ledPacket_type VAR_15;

    VAR_4->s.type = VAR_1;
    VAR_4->s.param1 = VAR_6;

    switch(VAR_8) {
        case 130:
            VAR_10 = 0; VAR_11 = 0; break;
        case 131:
            VAR_10 = 0; VAR_11 = 7; break;
        case 128:
            VAR_10 = 7; VAR_11 = 0; break;
        case 129:
            VAR_10 = 7; VAR_11 = 7; break;
    }

    while(1) {
        FUNC_3(&VAR_3[VAR_7], VAR_4->a, sizeof(ledPacket_type));
        FUNC_0(20);
        VAR_14 = FUNC_1(&VAR_3[VAR_7]);
        if(VAR_14 == VAR_0) {
            FUNC_2(&VAR_3[VAR_7], VAR_15.a, VAR_14);
            break;
        } else {
            if(VAR_14 > 0) {
                char VAR_16[512];
                if(VAR_14 > 512)
                    VAR_14 = 512;
                FUNC_2(&VAR_3[VAR_7], VAR_16, VAR_14);
            }
            if(VAR_9++ > 3)
                return 0;
        }
    }

    for(VAR_12 = 0; VAR_12 < 7; VAR_12++) {
        for(VAR_13 = 0; VAR_13 < 7; VAR_13++) {
            FUNC_4(VAR_5, ((VAR_12+VAR_10)*14+(VAR_13+VAR_11))*3, FUNC_5(VAR_15.s.payload, VAR_2[(VAR_12*7+VAR_13)*3]) );
            FUNC_4(VAR_5, ((VAR_12+VAR_10)*14+(VAR_13+VAR_11))*3+1, FUNC_5(VAR_15.s.payload, VAR_2[(VAR_12*7+VAR_13)*3+1]) );
            FUNC_4(VAR_5, ((VAR_12+VAR_10)*14+(VAR_13+VAR_11))*3+2, FUNC_5(VAR_15.s.payload, VAR_2[(VAR_12*7+VAR_13)*3+2]) );
        }
    }
    return 1;
}
