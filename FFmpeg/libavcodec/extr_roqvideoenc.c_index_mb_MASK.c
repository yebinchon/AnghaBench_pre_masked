
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(uint8_t VAR_1[], uint8_t VAR_2[], int VAR_3,
                    int *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7 = VAR_0, VAR_8=0;


    for (VAR_6=0; VAR_6<VAR_3; VAR_6++) {
        int VAR_9 = FUNC_0(VAR_1, VAR_2 + VAR_6*VAR_5*VAR_5*3, VAR_5);
        if (VAR_9 < VAR_7) {
            VAR_7 = VAR_9;
            VAR_8 = VAR_6;
        }
    }

    *VAR_4 = VAR_8;
    return VAR_7;
}
