
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
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_12(uint16_t VAR_6, sh2rec_block_t *VAR_7) {
    int VAR_8 = FUNC_0(VAR_6);
    int VAR_9 = FUNC_1(VAR_6);
    uint32_t VAR_10 = ((VAR_7->pc + 4) & 0xFFFFFFFC) + (VAR_9 << 2);

    if(((uint32_t)VAR_7->ptr) & 0x03) {
        FUNC_7(VAR_7, 1, VAR_2);
        FUNC_4(VAR_7, 2);
        FUNC_8(VAR_7, VAR_4, 2, VAR_0);
        FUNC_3(VAR_7, VAR_10);
    }
    else {
        FUNC_7(VAR_7, 1, VAR_2);
        FUNC_4(VAR_7, 3);
        FUNC_8(VAR_7, VAR_4, 2, VAR_0);
        FUNC_2(VAR_7, 0);
        FUNC_3(VAR_7, VAR_10);
    }

    FUNC_11(VAR_7, VAR_5, VAR_1);
    FUNC_5(VAR_7, VAR_0);
    FUNC_10(VAR_7);
    FUNC_6(VAR_7, VAR_1, VAR_5);
    FUNC_9(VAR_7, VAR_0, VAR_8, VAR_3);

    ++VAR_7->cycles;
    VAR_7->pc += 2;
}
