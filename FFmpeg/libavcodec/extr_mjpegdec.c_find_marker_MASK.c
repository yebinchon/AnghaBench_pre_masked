
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(const uint8_t **VAR_2, const uint8_t *VAR_3)
{
    const uint8_t *VAR_4;
    unsigned int VAR_5, VAR_6;
    int VAR_7;
    int VAR_8 = 0;

    VAR_4 = *VAR_2;
    while (VAR_3 - VAR_4 > 1) {
        VAR_5 = *VAR_4++;
        VAR_6 = *VAR_4;
        if ((VAR_5 == 0xff) && (VAR_6 >= VAR_1) && (VAR_6 <= VAR_0) && VAR_4 < VAR_3) {
            VAR_7 = *VAR_4++;
            goto found;
        }
        VAR_8++;
    }
    VAR_4 = VAR_3;
    VAR_7 = -1;
found:
    FUNC_0(((void*)0), "find_marker skipped %d bytes\n", VAR_8);
    *VAR_2 = VAR_4;
    return VAR_7;
}
