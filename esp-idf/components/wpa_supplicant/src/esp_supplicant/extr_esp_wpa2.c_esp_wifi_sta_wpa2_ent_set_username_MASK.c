
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char const*,int) ;
 scalar_t__ FUNC_2 (int) ;

esp_err_t FUNC_3(const unsigned char *VAR_6, int VAR_7)
{
    if (VAR_7 <= 0 || VAR_7 > VAR_3) {
        return VAR_0;
    }

    if (VAR_4) {
        FUNC_0(VAR_4);
        VAR_4 = ((void*)0);
    }

    VAR_4 = (u8 *)FUNC_2(VAR_7);
    if (VAR_4 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_1(VAR_4, VAR_6, VAR_7);
    VAR_5 = VAR_7;

    return VAR_2;
}
