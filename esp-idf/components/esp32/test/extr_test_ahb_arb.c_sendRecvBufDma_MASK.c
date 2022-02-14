
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int length; int size; int owner; int eof; scalar_t__ empty; scalar_t__ offset; int * buf; scalar_t__ sosf; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ) ;
 int VAR_13 ;
 int FUNC_7 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 TYPE_1__* VAR_20 ;

__attribute__((used)) static void FUNC_10(uint16_t *VAR_21, uint16_t *VAR_22, int VAR_23)
{

    VAR_20[0].length = VAR_23 * 2;
    VAR_20[0].size = VAR_23 * 2;
    VAR_20[0].owner = 1;
    VAR_20[0].sosf = 0;
    VAR_20[0].buf = (uint8_t *)VAR_21;
    VAR_20[0].offset = 0;
    VAR_20[0].empty = 0;
    VAR_20[0].eof = 1;
    VAR_20[1].length = VAR_23 * 2;
    VAR_20[1].size = VAR_23 * 2;
    VAR_20[1].owner = 1;
    VAR_20[1].sosf = 0;
    VAR_20[1].buf = (uint8_t *)VAR_22;
    VAR_20[1].offset = 0;
    VAR_20[1].empty = 0;
    VAR_20[1].eof = 1;


    FUNC_8(FUNC_5(0), VAR_6 | VAR_13 | VAR_1 | VAR_0);
    FUNC_0(FUNC_5(0), VAR_6 | VAR_13 | VAR_1 | VAR_0);


    FUNC_8(FUNC_1(0), VAR_15 | VAR_18 | VAR_17 | VAR_14);
    FUNC_0(FUNC_1(0), VAR_15 | VAR_18 | VAR_17 | VAR_14);


    FUNC_0(FUNC_6(0), VAR_9);
    FUNC_8(FUNC_6(0), ((uint32_t)(&VAR_20[0]))&VAR_9);
    FUNC_0(FUNC_4(0), VAR_4);
    FUNC_8(FUNC_4(0), ((uint32_t)(&VAR_20[1]))&VAR_4);

    FUNC_8(FUNC_2(0), VAR_2);

    FUNC_9(FUNC_7(0), VAR_23);


    FUNC_9(FUNC_5(0), VAR_11 |
                   VAR_12 | VAR_8 | VAR_11 |
                   VAR_3 | VAR_7);


    FUNC_8(FUNC_6(0), VAR_10);
    FUNC_8(FUNC_4(0), VAR_5);

    FUNC_8(FUNC_1(0), VAR_19 | VAR_16);

    FUNC_9(FUNC_3(0), 0xFFFFFFFF);
}
