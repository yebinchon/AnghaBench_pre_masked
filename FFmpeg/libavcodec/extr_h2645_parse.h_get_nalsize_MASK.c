
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int ,char*,int,int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_3, const uint8_t *VAR_4,
                              int VAR_5, int *VAR_6, void *VAR_7)
{
    int VAR_8, VAR_9 = 0;

    if (*VAR_6 >= VAR_5 - VAR_3) {

        return FUNC_0(VAR_2);
    }

    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
        VAR_9 = ((unsigned)VAR_9 << 8) | VAR_4[(*VAR_6)++];
    if (VAR_9 <= 0 || VAR_9 > VAR_5 - *VAR_6) {
        FUNC_1(VAR_7, VAR_1,
               "Invalid NAL unit size (%d > %d).\n", VAR_9, VAR_5 - *VAR_6);
        return VAR_0;
    }
    return VAR_9;
}
