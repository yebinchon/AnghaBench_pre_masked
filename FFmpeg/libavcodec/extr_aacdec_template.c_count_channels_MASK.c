
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(uint8_t (*VAR_3)[3], int VAR_4)
{
    int VAR_5, VAR_6 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        int VAR_7 = VAR_3[VAR_5][0];
        int VAR_8 = VAR_3[VAR_5][2];
        VAR_6 += (1 + (VAR_7 == VAR_2)) *
               (VAR_8 != VAR_1 && VAR_8 != VAR_0);
    }
    return VAR_6;
}
