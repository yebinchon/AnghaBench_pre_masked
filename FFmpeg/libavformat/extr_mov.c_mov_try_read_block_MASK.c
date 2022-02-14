
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (size_t,unsigned int) ;
 unsigned int const VAR_2 ;
 int * FUNC_2 (int *,unsigned int*,unsigned int) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_3, size_t VAR_4, uint8_t **VAR_5)
{
    const unsigned int VAR_6 = 1024 * 1024;
    uint8_t *VAR_7 = ((void*)0);
    unsigned int VAR_8 = 0, VAR_9 = 0;
    while (VAR_9 < VAR_4) {
        unsigned int VAR_10 =
            VAR_8 >= VAR_2 - VAR_6 ? VAR_2 : VAR_8 + VAR_6;
        uint8_t *VAR_11 = FUNC_2(VAR_7, &VAR_8, VAR_10);
        unsigned int VAR_12 = FUNC_1(VAR_4, VAR_8) - VAR_9;
        if (!VAR_11) {
            FUNC_3(VAR_7);
            return FUNC_0(VAR_1);
        }
        VAR_7 = VAR_11;

        if (FUNC_4(VAR_3, VAR_7 + VAR_9, VAR_12) != VAR_12) {
            FUNC_3(VAR_7);
            return VAR_0;
        }
        VAR_9 += VAR_12;
    }

    *VAR_5 = VAR_7;
    return 0;
}
