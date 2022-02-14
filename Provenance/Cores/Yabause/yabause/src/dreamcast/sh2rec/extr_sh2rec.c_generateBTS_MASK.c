
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_16__ {int pc; int cycles; scalar_t__ ptr; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,int ) ;
 int FUNC_13 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_14(uint16_t VAR_6, sh2rec_block_t *VAR_7) {
    int VAR_8 = FUNC_0(VAR_6);
    uint32_t VAR_9 = VAR_7->pc + 4;
    int VAR_10 = (((uint32_t)VAR_7->ptr) & 0x03) ? 3 : 4;

    FUNC_8(VAR_7, 16);
    FUNC_7(VAR_7, VAR_10, VAR_5);
    FUNC_12(VAR_7, VAR_3, VAR_1);
    FUNC_6(VAR_7, 0, VAR_3);
    FUNC_4(VAR_7, 1);
    FUNC_6(VAR_7, VAR_8, VAR_3);
    FUNC_12(VAR_7, VAR_3, VAR_2);

    if(((uint32_t)VAR_7->ptr) & 0x03) {
        FUNC_5(VAR_7, 3);
        FUNC_3(VAR_7, VAR_5, VAR_3, VAR_0);
        FUNC_1(VAR_7, 0);
    }
    else {
        FUNC_5(VAR_7, 2);
        FUNC_3(VAR_7, VAR_5, VAR_3, VAR_0);
    }

    FUNC_2(VAR_7, VAR_9);
    FUNC_9(VAR_7, VAR_3, VAR_4);


    VAR_7->pc += 2;
    FUNC_13(VAR_7, 1);

    FUNC_11(VAR_7);
    FUNC_10(VAR_7, VAR_4, VAR_3);

    ++VAR_7->cycles;

}
