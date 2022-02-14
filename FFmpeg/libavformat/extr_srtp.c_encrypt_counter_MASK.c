
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVAES {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct AVAES*,int *,int *,int,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct AVAES *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2,
                            int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    for (VAR_4 = 0, VAR_6 = 0; VAR_6 < VAR_3; VAR_4++) {
        uint8_t VAR_7[16];
        FUNC_0(&VAR_1[14], VAR_4);
        FUNC_1(VAR_0, VAR_7, VAR_1, 1, ((void*)0), 0);
        for (VAR_5 = 0; VAR_5 < 16 && VAR_6 < VAR_3; VAR_5++, VAR_6++)
            VAR_2[VAR_6] ^= VAR_7[VAR_5];
    }
}
