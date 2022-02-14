
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_3__ {int error_handle; int ssl; } ;
typedef TYPE_1__ esp_tls_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,size_t) ;
 int FUNC_1 (int ,char*,size_t,size_t,...) ;
 int FUNC_2 (int ,char*,size_t) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t FUNC_3 (int *,unsigned char*,size_t) ;

ssize_t FUNC_4(esp_tls_t *VAR_7, const char *VAR_8, size_t VAR_9)
{
    size_t VAR_10 = 0;
    size_t VAR_11 = VAR_9;
    while (VAR_10 < VAR_9) {
        if (VAR_11 > VAR_5) {
            VAR_11 = VAR_5;
        }
        if (VAR_9 > VAR_5) {
            FUNC_1(VAR_6, "Fragmenting data of excessive size :%d, offset: %d, size %d", VAR_9, VAR_10, VAR_11);
        }
        ssize_t VAR_12 = FUNC_3(&VAR_7->ssl, (unsigned char*) VAR_8 + VAR_10, VAR_11);
        if (VAR_12 <= 0) {
            if (VAR_12 != VAR_3 && VAR_12 != VAR_4 && VAR_12 != 0) {
                FUNC_0(VAR_7->error_handle, VAR_1, -VAR_12);
                FUNC_0(VAR_7->error_handle, VAR_0, VAR_2);
                FUNC_2(VAR_6, "write error :%d:", VAR_12);
                return VAR_12;
            } else {

                FUNC_1(VAR_6, "mbedtls_ssl_write() returned %d, already written %d, exitting...", VAR_12, VAR_10);
                return VAR_10;
            }
        }
        VAR_10 += VAR_12;
        VAR_11 = VAR_9 - VAR_10;
    }
    return VAR_10;
}
