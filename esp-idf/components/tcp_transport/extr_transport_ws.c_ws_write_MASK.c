
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_transport_handle_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ,char const*,int,int) ;

__attribute__((used)) static int FUNC_2(esp_transport_handle_t VAR_5, const char *VAR_6, int VAR_7, int VAR_8)
{
    if (VAR_7 == 0) {



        FUNC_0(VAR_0, "Write PING message");
        return FUNC_1(VAR_5, VAR_4 | VAR_1, VAR_2, ((void*)0), 0, VAR_8);
    }
    return FUNC_1(VAR_5, VAR_3 | VAR_1, VAR_2, VAR_6, VAR_7, VAR_8);
}
