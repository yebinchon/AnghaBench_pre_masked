
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int pc; int cycles; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(uint16_t VAR_2, sh2rec_block_t *VAR_3) {
    FUNC_0(VAR_3, 21);
    FUNC_1(VAR_3, VAR_0, VAR_1);


    VAR_3->pc += 2;
    FUNC_4(VAR_3, 1);

    FUNC_3(VAR_3);
    FUNC_2(VAR_3, VAR_1, VAR_0);

    VAR_3->cycles += 2;
}
