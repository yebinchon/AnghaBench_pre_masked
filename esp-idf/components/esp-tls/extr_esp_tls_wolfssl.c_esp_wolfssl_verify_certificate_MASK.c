
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error_handle; scalar_t__ priv_ssl; } ;
typedef TYPE_1__ esp_tls_t ;
typedef int WOLFSSL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

void FUNC_4(esp_tls_t *VAR_3)
{
    int VAR_4;
    if ((VAR_4 = FUNC_3( (WOLFSSL *)VAR_3->priv_ssl)) != VAR_2) {
        FUNC_1(VAR_1, "Failed to verify peer certificate %d!", VAR_4);
        FUNC_0(VAR_3->error_handle, VAR_0, VAR_4);
    } else {
        FUNC_2(VAR_1, "Certificate verified.");
    }
}
