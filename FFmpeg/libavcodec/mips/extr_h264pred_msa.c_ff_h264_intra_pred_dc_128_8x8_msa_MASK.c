
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int ,int ,int ,int ,int *,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(uint8_t *VAR_0, ptrdiff_t VAR_1)
{
    uint64_t VAR_2;
    v16u8 VAR_3;

    VAR_3 = (v16u8) FUNC_2(128);
    VAR_2 = FUNC_1((v2i64) VAR_3, 0);

    FUNC_0(VAR_2, VAR_2, VAR_2, VAR_2, VAR_0, VAR_1);
    VAR_0 += (4 * VAR_1);
    FUNC_0(VAR_2, VAR_2, VAR_2, VAR_2, VAR_0, VAR_1);
}
