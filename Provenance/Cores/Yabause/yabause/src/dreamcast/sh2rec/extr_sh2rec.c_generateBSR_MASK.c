
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_12__ {int cycles; scalar_t__ pc; scalar_t__ ptr; } ;
typedef TYPE_1__ sh2rec_block_t ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_10(uint16_t VAR_3, sh2rec_block_t *VAR_4) {
    int VAR_5 = FUNC_0(VAR_3);
    int32_t VAR_6;
    int32_t VAR_7 = VAR_4->pc + 4;

    if(VAR_5 & 0x00000800) {
        VAR_5 |= 0xFFFFF000;
    }

    VAR_6 = VAR_4->pc + 4 + (VAR_5 << 1);

    if(((uint32_t)VAR_4->ptr) & 0x03) {
        FUNC_4(VAR_4, 2, VAR_2);
        FUNC_4(VAR_4, 2, VAR_0);
        FUNC_3(VAR_4, 5);
        FUNC_5(VAR_4, VAR_2, VAR_1);
        FUNC_1(VAR_4, 0);
    }
    else {
        FUNC_4(VAR_4, 1, VAR_2);
        FUNC_4(VAR_4, 2, VAR_0);
        FUNC_3(VAR_4, 4);
        FUNC_5(VAR_4, VAR_2, VAR_1);
    }

    FUNC_2(VAR_4, (uint32_t)VAR_6);
    FUNC_2(VAR_4, (uint32_t)VAR_7);
    FUNC_7(VAR_4, 21);


    VAR_4->pc += 2;
    FUNC_9(VAR_4, 1);

    FUNC_8(VAR_4);
    FUNC_6(VAR_4, VAR_1, VAR_0);

    VAR_4->cycles += 2;
}
