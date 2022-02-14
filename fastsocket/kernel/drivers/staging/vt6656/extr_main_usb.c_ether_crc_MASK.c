
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(int VAR_1, unsigned char *VAR_2)
{
    int VAR_3 = -1;

    while(--VAR_1 >= 0) {
        unsigned char VAR_4 = *VAR_2++;
        int VAR_5;
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++, VAR_4 >>= 1) {
            VAR_3 = (VAR_3 << 1) ^
                ((VAR_3 < 0) ^ (VAR_4 & 1) ? VAR_0 : 0);
        }
    }
    return VAR_3;
}
