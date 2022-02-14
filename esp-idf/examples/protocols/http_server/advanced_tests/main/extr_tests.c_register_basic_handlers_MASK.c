
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int httpd_handle_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(httpd_handle_t VAR_4)
{
    int VAR_5;
    FUNC_0(VAR_1, "Registering basic handlers");
    FUNC_0(VAR_1, "No of handlers = %d", VAR_3);
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        if (FUNC_2(VAR_4, &VAR_2[VAR_5]) != VAR_0) {
            FUNC_1(VAR_1, "register uri failed for %d", VAR_5);
            return;
        }
    }
    FUNC_0(VAR_1, "Success");
}
