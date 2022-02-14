
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int) ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (size_t*,size_t const*,int) ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_4, uint8_t *VAR_5, int VAR_6,
                                const uint8_t *VAR_7,
                                const uint8_t *VAR_8)
{
    int VAR_9, VAR_10 = 8, VAR_11 = 8;
    const uint8_t *VAR_12 = VAR_6 == 16 ? VAR_3 : VAR_2;
    if (!FUNC_1(VAR_4))
        FUNC_3(VAR_5, VAR_8, VAR_6 * sizeof(uint8_t));
    else
        for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
            if (VAR_11) {
                int VAR_13 = FUNC_2(VAR_4);
                if (VAR_13 < -128 || VAR_13 > 127) {
                    FUNC_0(((void*)0), VAR_1, "delta scale %d is invalid\n", VAR_13);
                    return VAR_0;
                }
                VAR_11 = (VAR_10 + VAR_13) & 0xff;
            }
            if (!VAR_9 && !VAR_11) {
                FUNC_3(VAR_5, VAR_7, VAR_6 * sizeof(uint8_t));
                break;
            }
            VAR_10 = VAR_5[VAR_12[VAR_9]] = VAR_11 ? VAR_11 : VAR_10;
        }
    return 0;
}
