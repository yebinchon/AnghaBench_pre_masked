
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (void**,int ) ;
 scalar_t__ FUNC_3 (int *,size_t,void*,int ) ;

esp_err_t FUNC_4(uint8_t* VAR_3, size_t VAR_4)
{
    uint32_t VAR_5 = FUNC_1();
    uint32_t VAR_6;

    esp_err_t VAR_7 = FUNC_3(VAR_3, VAR_4, (void*)VAR_5, VAR_2);
    if (VAR_7 != VAR_1) return VAR_7;
    VAR_7 = FUNC_2((void**)&VAR_6, VAR_2);
    if (VAR_7 != VAR_1) return VAR_7;
    FUNC_0(VAR_6 == VAR_5, "already sent without return before", VAR_0);

    return VAR_1;
}
