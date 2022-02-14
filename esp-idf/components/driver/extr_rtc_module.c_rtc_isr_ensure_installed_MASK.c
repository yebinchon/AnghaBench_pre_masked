
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static esp_err_t FUNC_4(void)
{
    esp_err_t VAR_8 = VAR_0;
    FUNC_2(&VAR_7);
    if (VAR_6) {
        goto out;
    }

    FUNC_0(VAR_3, 0);
    FUNC_0(VAR_2, VAR_4);
    VAR_8 = FUNC_1(VAR_1, 0, &VAR_5, ((void*)0), &VAR_6);
    if (VAR_8 != VAR_0) {
        goto out;
    }

out:
    FUNC_3(&VAR_7);
    return VAR_8;
}
