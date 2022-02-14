
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mdns_result_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,char const*,int,int,int **) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(const char * VAR_1, const char * VAR_2)
{
    FUNC_1(VAR_0, "Query PTR: %s.%s.local", VAR_1, VAR_2);

    mdns_result_t * VAR_3 = ((void*)0);
    esp_err_t VAR_4 = FUNC_5(VAR_1, VAR_2, 3000, 20, &VAR_3);
    if(VAR_4){
        FUNC_0(VAR_0, "Query Failed: %s", FUNC_3(VAR_4));
        return;
    }
    if(!VAR_3){
        FUNC_2(VAR_0, "No results found!");
        return;
    }

    FUNC_4(VAR_3);
    FUNC_6(VAR_3);
}
