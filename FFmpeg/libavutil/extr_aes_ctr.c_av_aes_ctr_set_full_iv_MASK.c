
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVAESCTR {scalar_t__ block_offset; int counter; } ;


 int FUNC_0 (int ,int const*,int) ;

void FUNC_1(struct AVAESCTR *VAR_0, const uint8_t* VAR_1)
{
    FUNC_0(VAR_0->counter, VAR_1, sizeof(VAR_0->counter));
    VAR_0->block_offset = 0;
}
