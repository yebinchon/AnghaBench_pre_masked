
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(uint8_t *VAR_2, GetBitContext *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    for (VAR_5 = 0; VAR_5 < VAR_4;) {
        VAR_7 = FUNC_1(VAR_3, 3);
        VAR_6 = FUNC_1(VAR_3, 5);
        if (VAR_7 == 0)
            VAR_7 = FUNC_1(VAR_3, 8);
        if (VAR_5 + VAR_7 > VAR_4 || FUNC_2(VAR_3) < 0) {
            FUNC_0(((void*)0), VAR_1, "Error reading huffman table\n");
            return VAR_0;
        }
        while (VAR_7--)
            VAR_2[VAR_5++] = VAR_6;
    }
    return 0;
}
