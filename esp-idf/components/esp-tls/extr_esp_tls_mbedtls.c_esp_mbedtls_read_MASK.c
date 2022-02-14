
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int error_handle; int ssl; } ;
typedef TYPE_1__ esp_tls_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,unsigned char*,size_t) ;

ssize_t FUNC_3(esp_tls_t *VAR_5, char *VAR_6, size_t VAR_7)
{

    ssize_t VAR_8 = FUNC_2(&VAR_5->ssl, (unsigned char *)VAR_6, VAR_7);
    if (VAR_8 < 0) {
        if (VAR_8 == VAR_3) {
            return 0;
        }
        if (VAR_8 != VAR_1 && VAR_8 != VAR_2) {
            FUNC_0(VAR_5->error_handle, VAR_0, -VAR_8);
            FUNC_1(VAR_4, "read error :%d:", VAR_8);
        }
    }
    return VAR_8;
}
