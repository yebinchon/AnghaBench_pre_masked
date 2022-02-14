
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static esp_err_t FUNC_2(void)
{
    int VAR_6 = 0;

    VAR_6 += FUNC_0(&VAR_5);

    VAR_6 += FUNC_0(&VAR_4);

    VAR_6 += FUNC_0(&VAR_3);

    VAR_6 += FUNC_1(&VAR_2);

    if (VAR_6) {
        return VAR_0;
    } else {
        return VAR_1;
    }
}
