
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int example_job_t ;
typedef int esp_slave_context_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ,int *) ;

__attribute__((used)) static inline esp_err_t FUNC_4(esp_slave_context_t *VAR_2, example_job_t VAR_3)
{
    esp_err_t VAR_4;
    VAR_4 = FUNC_3(VAR_2, VAR_1, VAR_3, ((void*)0));
    FUNC_1(VAR_4);
    VAR_4 = FUNC_2(VAR_2, FUNC_0(VAR_0));
    FUNC_1(VAR_4);
    return VAR_4;
}
