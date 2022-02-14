
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_14__ {int pc; int cycles; scalar_t__ ptr; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_12(uint16_t VAR_5, sh2rec_block_t *VAR_6) {
    int VAR_7 = FUNC_0(VAR_5);
    uint32_t VAR_8 = VAR_6->pc + 4;

    FUNC_5(VAR_6, 1, VAR_1);

    if(((uint32_t)VAR_6->ptr) & 0x03) {
        FUNC_4(VAR_6, 3);
        FUNC_6(VAR_6, VAR_4, VAR_7, VAR_3);
        FUNC_1(VAR_6, 0);
    }
    else {
        FUNC_4(VAR_6, 2);
        FUNC_6(VAR_6, VAR_4, VAR_7, VAR_3);
    }

    FUNC_2(VAR_6, VAR_8);
    FUNC_3(VAR_6, VAR_1, VAR_3, VAR_0);
    FUNC_9(VAR_6, 21);
    FUNC_7(VAR_6, VAR_3, VAR_2);


    VAR_6->pc += 2;
    FUNC_11(VAR_6, 1);

    FUNC_10(VAR_6);
    FUNC_8(VAR_6, VAR_2, VAR_1);

    VAR_6->cycles += 2;
}
