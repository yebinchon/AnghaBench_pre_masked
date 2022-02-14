
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int GetByteContext ;


 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char const*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(const unsigned char *VAR_0, unsigned char *VAR_1,
                      int VAR_2, int VAR_3, int VAR_4)
{
    unsigned char *VAR_5;
    int VAR_6, VAR_7, VAR_8 = 0;
    unsigned char *VAR_9 = VAR_1 + VAR_4;
    GetByteContext VAR_10;
    uint16_t VAR_11;

    FUNC_5(&VAR_10, VAR_0, VAR_3);
    VAR_5 = VAR_1;
    if (VAR_2 & 1) {
        if (FUNC_2(&VAR_10) < 1)
            return 0;
        *VAR_5++ = FUNC_3(&VAR_10);
        VAR_8++;
    }

    do {
        if (FUNC_2(&VAR_10) < 1)
            break;
        VAR_7 = FUNC_3(&VAR_10);
        if (VAR_7 & 0x80) {
            VAR_7 = (VAR_7 & 0x7F) * 2;
            if (VAR_9 - VAR_5 < VAR_7 || FUNC_2(&VAR_10) < VAR_7)
                return FUNC_6(&VAR_10);
            FUNC_1(&VAR_10, VAR_5, VAR_7);
            VAR_5 += VAR_7;
        } else {
            if (VAR_9 - VAR_5 < 2*VAR_7 || FUNC_2(&VAR_10) < 2)
                return FUNC_6(&VAR_10);
            VAR_11 = FUNC_4(&VAR_10);
            for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
                FUNC_0(VAR_5, VAR_11);
                VAR_5 += 2;
            }
            VAR_7 *= 2;
        }
        VAR_8 += VAR_7;
    } while (VAR_8 < VAR_2);

    return FUNC_6(&VAR_10);
}
