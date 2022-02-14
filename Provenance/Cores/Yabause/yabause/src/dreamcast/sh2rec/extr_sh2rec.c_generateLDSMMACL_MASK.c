
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int pc; int cycles; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_8(uint16_t VAR_9, sh2rec_block_t *VAR_10) {
    int VAR_11 = FUNC_0(VAR_9);

    FUNC_5(VAR_10, VAR_6, 2, VAR_1);
    FUNC_7(VAR_10, VAR_8, VAR_3);
    FUNC_5(VAR_10, VAR_5, VAR_11, VAR_4);
    FUNC_4(VAR_10, 4, VAR_2);
    FUNC_1(VAR_10, VAR_4, VAR_2, VAR_0);
    FUNC_2(VAR_10, VAR_1);
    FUNC_6(VAR_10, VAR_2, VAR_11, VAR_5);
    FUNC_3(VAR_10, VAR_3, VAR_8);
    FUNC_3(VAR_10, VAR_1, VAR_7);

    ++VAR_10->cycles;
    VAR_10->pc += 2;
}
