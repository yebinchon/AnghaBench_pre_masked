
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {char* buffer; } ;
typedef TYPE_1__ PutByteContext ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char const*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(uint8_t *VAR_14, int VAR_15, uint32_t VAR_16, uint32_t VAR_17,
                              uint32_t VAR_18, const uint8_t *VAR_19, int VAR_20,
                              int VAR_21)
{
    PutByteContext VAR_22;
    uint8_t *VAR_23;
    int VAR_24, VAR_25;

    FUNC_1(&VAR_22, VAR_14, VAR_15);


    VAR_17 <<= 3;
    VAR_18 <<= 3;


    FUNC_7(&VAR_22, VAR_5);


    FUNC_7(&VAR_22, VAR_0);
    FUNC_2(&VAR_22, 16);
    FUNC_3(&VAR_22, "JFIF", 5);
    FUNC_2(&VAR_22, 0x0201);
    FUNC_4(&VAR_22, 0);
    FUNC_2(&VAR_22, 1);
    FUNC_2(&VAR_22, 1);
    FUNC_4(&VAR_22, 0);
    FUNC_4(&VAR_22, 0);

    if (VAR_21) {
        FUNC_7(&VAR_22, VAR_3);
        FUNC_2(&VAR_22, 4);
        FUNC_2(&VAR_22, VAR_21);
    }


    FUNC_7(&VAR_22, VAR_2);
    FUNC_2(&VAR_22, 2 + VAR_20 * (1 + 64));

    for (VAR_25 = 0; VAR_25 < VAR_20; VAR_25++) {
        FUNC_4(&VAR_22, VAR_25);




        FUNC_3(&VAR_22, VAR_19 + 64 * VAR_25, 64);
    }


    FUNC_7(&VAR_22, VAR_1);
    VAR_23 = VAR_22.buffer;
    FUNC_2(&VAR_22, 0);

    VAR_24 = 2;
    VAR_24 += FUNC_6(&VAR_22, 0, 0,VAR_10,
                                          VAR_13);
    VAR_24 += FUNC_6(&VAR_22, 0, 1, VAR_9,
                                          VAR_13);
    VAR_24 += FUNC_6(&VAR_22, 1, 0, VAR_8,
                                          VAR_12);
    VAR_24 += FUNC_6(&VAR_22, 1, 1, VAR_7,
                                          VAR_11);
    FUNC_0(VAR_23, VAR_24);


    FUNC_7(&VAR_22, VAR_4);
    FUNC_2(&VAR_22, 17);
    FUNC_4(&VAR_22, 8);
    FUNC_2(&VAR_22, VAR_18);
    FUNC_2(&VAR_22, VAR_17);
    FUNC_4(&VAR_22, 3);
    FUNC_4(&VAR_22, 1);
    FUNC_4(&VAR_22, (2 << 4) | (VAR_16 ? 2 : 1));
    FUNC_4(&VAR_22, 0);
    FUNC_4(&VAR_22, 2);
    FUNC_4(&VAR_22, 1 << 4 | 1);
    FUNC_4(&VAR_22, VAR_20 == 2 ? 1 : 0);
    FUNC_4(&VAR_22, 3);
    FUNC_4(&VAR_22, 1 << 4 | 1);
    FUNC_4(&VAR_22, VAR_20 == 2 ? 1 : 0);


    FUNC_7(&VAR_22, VAR_6);
    FUNC_2(&VAR_22, 12);
    FUNC_4(&VAR_22, 3);
    FUNC_4(&VAR_22, 1);
    FUNC_4(&VAR_22, 0);
    FUNC_4(&VAR_22, 2);
    FUNC_4(&VAR_22, 17);
    FUNC_4(&VAR_22, 3);
    FUNC_4(&VAR_22, 17);
    FUNC_4(&VAR_22, 0);
    FUNC_4(&VAR_22, 63);
    FUNC_4(&VAR_22, 0);


    return FUNC_5(&VAR_22);
}
