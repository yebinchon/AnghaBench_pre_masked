
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xTaskHandle ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int *,int ,int *) ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_6;
    xTaskHandle VAR_7;

    VAR_6 = FUNC_1(VAR_4,
                      VAR_0,
                      VAR_2,
                      ((void*)0),
                      VAR_1,
                      &VAR_7);

    if (VAR_6 != VAR_5) {
        FUNC_0(VAR_3, "create task %s failed", VAR_0);
    }
}
