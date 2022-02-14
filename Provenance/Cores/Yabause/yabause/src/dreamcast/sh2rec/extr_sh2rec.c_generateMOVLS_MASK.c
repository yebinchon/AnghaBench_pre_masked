
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int pc; int cycles; } ;
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
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(uint16_t VAR_7, sh2rec_block_t *VAR_8) {
    int VAR_9 = FUNC_0(VAR_7);
    int VAR_10 = FUNC_1(VAR_7);

    FUNC_4(VAR_8, VAR_5, 5, VAR_0);
    FUNC_4(VAR_8, VAR_4, VAR_10, VAR_3);
    FUNC_5(VAR_8, VAR_6, VAR_1);
    FUNC_2(VAR_8, VAR_0);
    FUNC_4(VAR_8, VAR_4, VAR_9, VAR_2);
    FUNC_3(VAR_8, VAR_1, VAR_6);

    ++VAR_8->cycles;
    VAR_8->pc += 2;
}
