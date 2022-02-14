
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_13__ {int pc; int cycles; } ;
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_12(uint16_t VAR_11, sh2rec_block_t *VAR_12) {
    int VAR_13 = FUNC_0(VAR_11);
    int VAR_14 = FUNC_1(VAR_11);

    FUNC_7(VAR_12, 16);
    FUNC_6(VAR_12, VAR_9, VAR_13, VAR_5);
    FUNC_5(VAR_12, 0x03, VAR_7);
    FUNC_3(VAR_12, 0xF2);
    FUNC_6(VAR_12, VAR_9, VAR_14, VAR_6);
    FUNC_10(VAR_12, VAR_7);
    FUNC_9(VAR_12, VAR_4, VAR_3);
    FUNC_4(VAR_12, VAR_6, VAR_5);
    FUNC_11(VAR_12, VAR_10, VAR_8);
    FUNC_2(VAR_12, VAR_7, VAR_8, VAR_0);
    FUNC_9(VAR_12, VAR_4, VAR_2);
    FUNC_2(VAR_12, VAR_8, VAR_4, VAR_1);
    FUNC_8(VAR_12, 16);

    ++VAR_12->cycles;
    VAR_12->pc += 2;
}
