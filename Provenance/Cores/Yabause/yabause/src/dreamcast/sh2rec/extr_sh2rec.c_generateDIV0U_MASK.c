
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pc; int cycles; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(uint16_t VAR_0, sh2rec_block_t *VAR_1) {
    FUNC_1(VAR_1, 16);
    FUNC_0(VAR_1, 0xF2);
    FUNC_2(VAR_1, 16);

    ++VAR_1->cycles;
    VAR_1->pc += 2;
}
