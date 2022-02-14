
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
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_11(uint16_t VAR_5, sh2rec_block_t *VAR_6) {
    int VAR_7 = FUNC_0(VAR_5);
    uint32_t VAR_8 = VAR_6->pc + 2;

    FUNC_8(VAR_6, 16);
    FUNC_7(VAR_6, 4, VAR_4);
    FUNC_10(VAR_6, VAR_3, VAR_1);
    FUNC_6(VAR_6, 0, VAR_3);
    FUNC_5(VAR_6, 2);
    FUNC_6(VAR_6, VAR_7, VAR_3);
    FUNC_10(VAR_6, VAR_3, VAR_2);
    FUNC_3(VAR_6, 2, VAR_3);
    FUNC_9(VAR_6);
    FUNC_4(VAR_6, VAR_4, VAR_3, VAR_0);
    if(((uint32_t)VAR_6->ptr) & 0x03)
        FUNC_1(VAR_6, 0);
    FUNC_2(VAR_6, VAR_8);

    VAR_6->cycles += 2;

}
