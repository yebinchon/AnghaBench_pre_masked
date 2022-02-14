
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static u16 FUNC_1(unsigned *VAR_0, int VAR_1)
{
        int VAR_2=0, VAR_3;
        int VAR_4, VAR_5, VAR_6=0;

        for (VAR_3 = VAR_1; VAR_3; VAR_3--) {
                for (VAR_6 = VAR_2, VAR_4 = 28; VAR_4 >= 0; VAR_4 -= 4 ) {
                        VAR_5 = ((VAR_6 >> 12) ^ (FUNC_0(*VAR_0) >> VAR_4)) & 0xf;
                        VAR_6 = (VAR_6 << 4) ^ (VAR_5 << 12) ^ (VAR_5 << 5) ^ (VAR_5);
                }
                VAR_2 = VAR_6 & 0xffff;
                VAR_0++;
        }

        return VAR_2;
}
