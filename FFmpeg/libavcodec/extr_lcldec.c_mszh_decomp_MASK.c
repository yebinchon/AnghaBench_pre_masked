
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned char*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned char const**) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;
 int FUNC_4 (unsigned char*,int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_5(const unsigned char * VAR_0, int VAR_1, unsigned char * VAR_2, unsigned int VAR_3)
{
    unsigned char *VAR_4 = VAR_2;
    unsigned char *VAR_5 = VAR_2 + VAR_3;
    const unsigned char *VAR_6 = VAR_0 + VAR_1;
    unsigned VAR_7 = *VAR_0++;
    unsigned VAR_8 = 0x80;

    while (VAR_0 < VAR_6 && VAR_2 < VAR_5) {
        if (!(VAR_7 & VAR_8)) {
            FUNC_3(VAR_2, VAR_0, 4);
            VAR_2 += 4;
            VAR_0 += 4;
        } else {
            unsigned VAR_9 = FUNC_2(&VAR_0);
            unsigned VAR_10 = (VAR_9 >> 11) + 1;
            VAR_9 &= 0x7ff;
            VAR_9 = FUNC_0(VAR_9, VAR_2 - VAR_4);
            VAR_10 *= 4;
            VAR_10 = FUNC_0(VAR_10, VAR_5 - VAR_2);
            if (VAR_9) {
                FUNC_1(VAR_2, VAR_9, VAR_10);
            } else {


                FUNC_4(VAR_2, 0, VAR_10);
            }
            VAR_2 += VAR_10;
        }
        VAR_8 >>= 1;
        if (!VAR_8) {
            VAR_7 = *VAR_0++;
            while (!VAR_7) {
                if (VAR_5 - VAR_2 < 32 || VAR_6 - VAR_0 < 32) break;
                FUNC_3(VAR_2, VAR_0, 32);
                VAR_2 += 32;
                VAR_0 += 32;
                VAR_7 = *VAR_0++;
            }
            VAR_8 = 0x80;
        }
    }

    return VAR_2 - VAR_4;
}
