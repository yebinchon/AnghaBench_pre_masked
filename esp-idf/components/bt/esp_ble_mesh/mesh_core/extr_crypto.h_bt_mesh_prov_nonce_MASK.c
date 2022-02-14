
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;


 int FUNC_0 (int const*,int,int const*,char*,int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static inline int FUNC_2(const u8_t VAR_0[32],
                                     const u8_t VAR_1[16],
                                     u8_t VAR_2[13])
{
    u8_t VAR_3[16];
    int VAR_4;

    VAR_4 = FUNC_0(VAR_0, 32, VAR_1, "prsn", VAR_3);
    if (!VAR_4) {
        FUNC_1(VAR_2, VAR_3 + 3, 13);
    }

    return VAR_4;
}
