
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int ) ;
 int FUNC_4 (unsigned char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(const unsigned char *VAR_2, int VAR_3,
                           unsigned char *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    unsigned char *VAR_8 = VAR_4 + VAR_5;
    const unsigned char *VAR_9 = VAR_2 + VAR_3;

    while (VAR_2 + 1 < VAR_9 && VAR_4 < VAR_8) {
        VAR_7 = *VAR_2++;
        if (VAR_7 & 0x80) {
            VAR_6 = VAR_7 - 0x7F;
            FUNC_4(VAR_4, *VAR_2++, FUNC_0(VAR_6, VAR_8 - VAR_4));
        } else {
            VAR_6 = VAR_7 + 1;
            if (VAR_6 > VAR_9-VAR_2) {
                FUNC_2(((void*)0), VAR_1, "RLE overread\n");
                return VAR_0;
            }
            FUNC_3(VAR_4, VAR_2, FUNC_1(VAR_6, VAR_8 - VAR_4, VAR_9 - VAR_2));
            VAR_2 += VAR_6;
        }
        VAR_4 += VAR_6;
    }

    if (VAR_8 - VAR_4 > VAR_5 - VAR_5/10)
        return VAR_0;

    return 0;
}
