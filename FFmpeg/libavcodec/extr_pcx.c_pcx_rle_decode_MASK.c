
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
typedef int GetByteContext ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,unsigned int) ;
 unsigned char FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(GetByteContext *VAR_1,
                           uint8_t *VAR_2,
                           unsigned int VAR_3,
                           int VAR_4)
{
    unsigned int VAR_5 = 0;
    unsigned char VAR_6, VAR_7;

    if (FUNC_2(VAR_1) < 1)
        return VAR_0;

    if (VAR_4) {
        while (VAR_5 < VAR_3 && FUNC_2(VAR_1)>0) {
            VAR_6 = 1;
            VAR_7 = FUNC_1(VAR_1);
            if (VAR_7 >= 0xc0 && FUNC_2(VAR_1)>0) {
                VAR_6 = VAR_7 & 0x3f;
                VAR_7 = FUNC_1(VAR_1);
            }
            while (VAR_5 < VAR_3 && VAR_6--)
                VAR_2[VAR_5++] = VAR_7;
        }
    } else {
        FUNC_0(VAR_1, VAR_2, VAR_3);
    }
    return 0;
}
