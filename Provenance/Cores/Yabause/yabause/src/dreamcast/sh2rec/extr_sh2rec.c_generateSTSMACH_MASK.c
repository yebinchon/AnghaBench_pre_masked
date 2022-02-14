
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pc; int cycles; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(uint16_t VAR_3, sh2rec_block_t *VAR_4) {
    int VAR_5 = FUNC_0(VAR_3);

    FUNC_2(VAR_4, VAR_2, VAR_0);
    FUNC_1(VAR_4, VAR_0, VAR_5, VAR_1);

    ++VAR_4->cycles;
    VAR_4->pc += 2;
}
