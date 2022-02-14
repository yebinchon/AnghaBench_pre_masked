
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;

__attribute__((used)) static esp_err_t FUNC_1(char ** VAR_2, char * VAR_3)
{
    if (VAR_3 && VAR_3[0]) {
        *VAR_2 = FUNC_0(VAR_3);
        if (!*VAR_2) {
            return VAR_0;
        }
        return VAR_1;
    }
    *VAR_2 = ((void*)0);
    return VAR_1;
}
