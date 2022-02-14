
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int error_handle; scalar_t__ priv_ssl; } ;
typedef TYPE_1__ esp_tls_t ;
typedef int WOLFSSL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned char*,size_t) ;

ssize_t FUNC_4(esp_tls_t *VAR_4, const char *VAR_5, size_t VAR_6)
{
    ssize_t VAR_7 = FUNC_3( (WOLFSSL *)VAR_4->priv_ssl, (unsigned char *) VAR_5, VAR_6);
    if (VAR_7 < 0) {
        VAR_7 = FUNC_2( (WOLFSSL *)VAR_4->priv_ssl, VAR_7);
        if (VAR_7 != VAR_1 && VAR_7 != VAR_2) {
            FUNC_0(VAR_4->error_handle, VAR_0, -VAR_7);
            FUNC_1(VAR_3, "write error :%d:", VAR_7);
        }
    }
    return VAR_7;
}
