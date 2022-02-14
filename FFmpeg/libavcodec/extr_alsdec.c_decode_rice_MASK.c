
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int int32_t ;
typedef int GetBitContext ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 unsigned int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int32_t FUNC_4(GetBitContext *VAR_0, unsigned int VAR_1)
{
    int VAR_2 = FUNC_1(VAR_0) - VAR_1;
    unsigned VAR_3 = FUNC_3(VAR_0, 0, VAR_2);
    int VAR_4 = VAR_1 ? FUNC_0(VAR_0) : !(VAR_3 & 1);

    if (VAR_1 > 1) {
        VAR_3 <<= (VAR_1 - 1);
        VAR_3 += FUNC_2(VAR_0, VAR_1 - 1);
    } else if (!VAR_1) {
        VAR_3 >>= 1;
    }
    return VAR_4 ? VAR_3 : ~VAR_3;
}
