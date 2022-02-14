
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_13__ {int pc; int cycles; scalar_t__ ptr; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_11(uint16_t VAR_4, sh2rec_block_t *VAR_5) {
    int VAR_6 = FUNC_0(VAR_4);
    uint32_t VAR_7 = VAR_5->pc + 4;

    FUNC_4(VAR_5, 1, VAR_0);

    if(((uint32_t)VAR_5->ptr) & 0x03) {
        FUNC_3(VAR_5, 3);
        FUNC_5(VAR_5, VAR_3, VAR_6, VAR_2);
        FUNC_1(VAR_5, 0);
    }
    else {
        FUNC_3(VAR_5, 2);
        FUNC_5(VAR_5, VAR_3, VAR_6, VAR_2);
    }

    FUNC_2(VAR_5, VAR_7);
    FUNC_6(VAR_5, VAR_2, VAR_1);
    FUNC_8(VAR_5, 21);


    VAR_5->pc += 2;
    FUNC_10(VAR_5, 1);

    FUNC_9(VAR_5);
    FUNC_7(VAR_5, VAR_1, VAR_0);

    VAR_5->cycles += 2;
}
