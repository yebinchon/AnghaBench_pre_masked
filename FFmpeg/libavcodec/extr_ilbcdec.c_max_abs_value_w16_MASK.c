
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int16_t FUNC_2(const int16_t* VAR_1, int VAR_2)
{
    int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;

    if (VAR_1 == ((void*)0) || VAR_2 <= 0) {
        return -1;
    }

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_4 = FUNC_0(VAR_1[VAR_3]);
        if (VAR_4 > VAR_5)
            VAR_5 = VAR_4;
    }


    return FUNC_1(VAR_5, VAR_0);
}
