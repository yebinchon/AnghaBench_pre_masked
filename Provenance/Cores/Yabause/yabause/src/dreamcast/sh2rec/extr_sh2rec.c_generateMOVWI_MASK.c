
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
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_13(uint16_t VAR_7, sh2rec_block_t *VAR_8) {
    int VAR_9 = FUNC_0(VAR_7);
    int VAR_10 = FUNC_1(VAR_7);
    uint32_t VAR_11 = VAR_8->pc + 4 + (VAR_10 << 1);

    if(((uint32_t)VAR_8->ptr) & 0x03) {
        FUNC_8(VAR_8, 1, VAR_3);
        FUNC_5(VAR_8, 2);
        FUNC_9(VAR_8, VAR_5, 1, VAR_1);
        FUNC_3(VAR_8, VAR_11);
    }
    else {
        FUNC_8(VAR_8, 1, VAR_3);
        FUNC_5(VAR_8, 3);
        FUNC_9(VAR_8, VAR_5, 1, VAR_1);
        FUNC_2(VAR_8, 0);
        FUNC_3(VAR_8, VAR_11);
    }

    FUNC_12(VAR_8, VAR_6, VAR_2);
    FUNC_6(VAR_8, VAR_1);
    FUNC_11(VAR_8);
    FUNC_4(VAR_8, VAR_1, VAR_1, VAR_0);
    FUNC_7(VAR_8, VAR_2, VAR_6);
    FUNC_10(VAR_8, VAR_1, VAR_9, VAR_4);

    ++VAR_8->cycles;
    VAR_8->pc += 2;
}
