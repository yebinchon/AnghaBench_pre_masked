
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int pc; int cycles; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_6(uint16_t VAR_3, sh2rec_block_t *VAR_4) {
    int VAR_5 = FUNC_0(VAR_3);

    FUNC_1(VAR_4, VAR_2, VAR_5, VAR_0);
    FUNC_2(VAR_4, VAR_0, VAR_1);


    VAR_4->pc += 2;
    FUNC_5(VAR_4, 1);

    FUNC_4(VAR_4);
    FUNC_3(VAR_4, VAR_1, VAR_0);

    VAR_4->cycles += 2;
}
