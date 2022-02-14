
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int pc; int cycles; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(uint16_t VAR_4, sh2rec_block_t *VAR_5) {
    FUNC_2(VAR_5, 16);
    FUNC_1(VAR_5, 0xFE, VAR_2);
    FUNC_0(VAR_5, VAR_3, VAR_1, VAR_0);
    FUNC_3(VAR_5, 16);

    ++VAR_5->cycles;
    VAR_5->pc += 2;
}
