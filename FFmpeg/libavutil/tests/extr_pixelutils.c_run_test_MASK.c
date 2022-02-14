
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int const*,int ,int const*,int ,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(const char *VAR_3,
                    const uint8_t *VAR_4, const uint8_t *VAR_5)
{
    int VAR_6, VAR_7, VAR_8 = 0;

    for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
        const uint8_t *VAR_9 = VAR_4;
        const uint8_t *VAR_10 = VAR_5;

        switch (VAR_7) {
        case 0: VAR_9++; VAR_10++; break;
        case 1: VAR_10++; break;
        case 2: break;
        }
        for (VAR_6 = 1; VAR_6 <= FUNC_0(VAR_2); VAR_6++) {
            int VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_0, VAR_5, VAR_1, VAR_7, VAR_6);
            if (VAR_11)
                VAR_8 = VAR_11;
        }
    }
    return VAR_8;
}
