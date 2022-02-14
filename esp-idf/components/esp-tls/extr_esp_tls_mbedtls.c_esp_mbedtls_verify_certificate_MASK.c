
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error_handle; int ssl; } ;
typedef TYPE_1__ esp_tls_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,int) ;

void FUNC_5(esp_tls_t *VAR_2)
{
    int VAR_3;
    char VAR_4[100];
    if ((VAR_3 = FUNC_3(&VAR_2->ssl)) != 0) {
        FUNC_1(VAR_1, "Failed to verify peer certificate!");
        FUNC_0(VAR_2->error_handle, VAR_0, VAR_3);
        FUNC_2(VAR_4, sizeof(VAR_4));
        FUNC_4(VAR_4, sizeof(VAR_4), "  ! ", VAR_3);
        FUNC_1(VAR_1, "verification info: %s", VAR_4);
    } else {
        FUNC_1(VAR_1, "Certificate verified.");
    }
}
