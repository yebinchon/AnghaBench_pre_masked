
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int GetByteContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,int,int) ;

__attribute__((used)) static inline int FUNC_4(uint8_t **VAR_0, const uint8_t *VAR_1,
                     GetByteContext *VAR_2,
                     int VAR_3, int VAR_4,
                     int *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8 = VAR_6 - *VAR_5;
    while(VAR_4 > 0) {
        int VAR_9 = FUNC_0(VAR_4, VAR_8);
        if (VAR_2) {
            if (FUNC_2(VAR_2) < VAR_9)
                goto exhausted;
            FUNC_1(VAR_2, *VAR_0, VAR_9);
        } else if (VAR_3 >= 0)
            FUNC_3(*VAR_0, VAR_3, VAR_9);
        *VAR_0 += VAR_9;
        VAR_8 -= VAR_9;
        VAR_4 -= VAR_9;
        if (VAR_8 <= 0) {
            *VAR_0 += VAR_7 - VAR_6;
            VAR_8 = VAR_6;
        }
        if (VAR_7 > 0) {
            if (*VAR_0 >= VAR_1) goto exhausted;
        } else {
            if (*VAR_0 <= VAR_1) goto exhausted;
        }
    }
    *VAR_5 = VAR_6 - VAR_8;
    return 0;

exhausted:
    *VAR_5 = VAR_6 - VAR_8;
    return 1;
}
