
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int cycles; int pc; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(uint16_t VAR_4, sh2rec_block_t *VAR_5) {
    int VAR_6 = FUNC_0(VAR_4);
    int VAR_7 = FUNC_1(VAR_4);

    FUNC_3(VAR_5, VAR_3, VAR_6, VAR_1);
    FUNC_3(VAR_5, VAR_3, VAR_7, VAR_2);
    FUNC_2(VAR_5, VAR_2, VAR_1, VAR_0);

    VAR_5->cycles += 2;
    VAR_5->pc += 2;
}
