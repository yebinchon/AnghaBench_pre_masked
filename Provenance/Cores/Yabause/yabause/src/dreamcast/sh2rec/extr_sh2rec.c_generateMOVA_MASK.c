
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int pc; int cycles; scalar_t__ ptr; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(uint16_t VAR_2, sh2rec_block_t *VAR_3) {
    int VAR_4 = FUNC_0(VAR_2);
    uint32_t VAR_5 = ((VAR_3->pc + 4) & 0xFFFFFFFC) + (VAR_4 << 2);

    if(((uint32_t)VAR_3->ptr) & 0x03) {
        FUNC_4(VAR_3, 1, VAR_0);
        FUNC_3(VAR_3, 2);
        FUNC_5(VAR_3, VAR_0, 0, VAR_1);
        FUNC_2(VAR_3, VAR_5);
    }
    else {
        FUNC_4(VAR_3, 1, VAR_0);
        FUNC_3(VAR_3, 3);
        FUNC_5(VAR_3, VAR_0, 0, VAR_1);
        FUNC_1(VAR_3, 0);
        FUNC_2(VAR_3, VAR_5);
    }

    ++VAR_3->cycles;
    VAR_3->pc += 2;
}
