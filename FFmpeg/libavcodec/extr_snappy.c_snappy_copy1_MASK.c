
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetByteContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(GetByteContext *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2,
                        int VAR_3, int VAR_4)
{
    int VAR_5 = 4 + (VAR_4 & 0x7);
    unsigned int VAR_6 = FUNC_0(VAR_0) | (VAR_4 & 0x38) << 5;

    return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6, VAR_5);
}
