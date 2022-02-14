
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVAESCTR {scalar_t__ block_offset; scalar_t__ counter; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int const*,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;

void FUNC_2(struct AVAESCTR *VAR_1, const uint8_t* VAR_2)
{
    FUNC_0(VAR_1->counter, VAR_2, VAR_0);
    FUNC_1(VAR_1->counter + VAR_0, 0, sizeof(VAR_1->counter) - VAR_0);
    VAR_1->block_offset = 0;
}
