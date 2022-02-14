
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pc; int cycles; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(uint16_t VAR_2, sh2rec_block_t *VAR_3) {
    int VAR_4 = FUNC_0(VAR_2);

    FUNC_1(VAR_3, VAR_1, 0, VAR_0);
    FUNC_3(VAR_3, VAR_4);
    FUNC_2(VAR_3, VAR_0, 0, VAR_1);

    ++VAR_3->cycles;
    VAR_3->pc += 2;
}
