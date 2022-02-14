
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int GetByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int*,int ,int) ;

__attribute__((used)) static int FUNC_5(GetByteContext *VAR_2, uint32_t *VAR_3, int *VAR_4)
{
    unsigned VAR_5 = 512, VAR_6 = 1023, VAR_7 = 1024, VAR_8, VAR_9;
    int VAR_10, VAR_11 = 0, VAR_12 = 10, VAR_13 = 30;

    VAR_9 = FUNC_2(VAR_2) >> 2;
    while (VAR_7) {
        if (VAR_11 >= 256)
            return VAR_0;
        VAR_10 = VAR_6 & VAR_9;
        VAR_7 -= VAR_6 & VAR_9;
        VAR_9 >>= VAR_12;
        VAR_13 -= VAR_12;
        VAR_3[VAR_11++] = VAR_10;
        if (VAR_13 < 16) {
            if (FUNC_0(VAR_2) <= 0)
                return VAR_0;

            VAR_8 = FUNC_1(VAR_2);
            VAR_9 += VAR_8 << VAR_13;
            VAR_13 += 16;
        }
        if (VAR_7 < VAR_5) {
            VAR_5 >>= 1;
            VAR_6 >>= 1;
            VAR_12--;
        }
    }

    for (; !VAR_3[VAR_11 - 1]; VAR_11--)
        if (VAR_11 <= 0)
            return VAR_0;

    *VAR_4 = VAR_11;

    if (VAR_11 < 256)
        FUNC_4(&VAR_3[VAR_11], 0, 4 * (256 - VAR_11));

    if (VAR_13 >= 16)
        FUNC_3(VAR_2, -2, VAR_1);

    return 0;
}
