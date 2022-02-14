
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int httpd_handle_t ;
typedef int esp_err_t ;
struct TYPE_2__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_6 (char*,char*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static esp_err_t FUNC_8(const char *VAR_7)
{
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_0(VAR_5, "Removing endpoint : %s", VAR_7);


    char* VAR_8 = FUNC_2(1, FUNC_7(VAR_7) + 2);
    if (!VAR_8) {
        FUNC_1(VAR_5, "Malloc failed for ep uri");
        return VAR_1;
    }
    FUNC_6(VAR_8, "/%s", VAR_7);


    esp_err_t VAR_9;
    httpd_handle_t *VAR_10 = (httpd_handle_t *) VAR_6->priv;
    if ((VAR_9 = FUNC_5(*VAR_10, VAR_8, VAR_4)) != VAR_3) {
        FUNC_1(VAR_5, "Uri handler de-register failed: %s", FUNC_3(VAR_9));
        FUNC_4(VAR_8);
        return VAR_2;
    }

    FUNC_4(VAR_8);
    return VAR_3;
}
