
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 0;

    if ((size_t) VAR_2 & 0x7) {

        do {
            uint64_t VAR_6, VAR_7;

            VAR_6 = FUNC_0(VAR_1);
            VAR_7 = FUNC_2(VAR_2);
            VAR_5 += FUNC_1(VAR_6, VAR_7);

            VAR_1 += VAR_3;
            VAR_2 += VAR_3;
        } while (--VAR_4);
    } else {
        do {
            uint64_t VAR_8, VAR_9;

            VAR_8 = FUNC_0(VAR_1);
            VAR_9 = FUNC_0(VAR_2);
            VAR_5 += FUNC_1(VAR_8, VAR_9);

            VAR_1 += VAR_3;
            VAR_2 += VAR_3;
        } while (--VAR_4);
    }

    return VAR_5;
}
