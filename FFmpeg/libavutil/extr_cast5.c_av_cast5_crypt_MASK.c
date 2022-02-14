
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVCAST5 ;


 int FUNC_0 (int *,int *,int const*,int *) ;
 int FUNC_1 (int *,int *,int const*) ;

void FUNC_2(AVCAST5* VAR_0, uint8_t* VAR_1, const uint8_t* VAR_2, int VAR_3, int VAR_4)
{
    while (VAR_3--) {
        if (VAR_4){
            FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0));
        } else {
            FUNC_1(VAR_0, VAR_1, VAR_2);
        }
        VAR_2 = VAR_2 + 8;
        VAR_1 = VAR_1 + 8;
    }
}
