
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_4__ {int tcp; } ;
struct TYPE_6__ {int lastErr; TYPE_1__ tls_shared; } ;
typedef TYPE_3__ TLSContext ;
typedef scalar_t__ SSLConnectionRef ;
typedef int OSStatus ;


 int FUNC_0 (int) ;

 int VAR_0 ;
 int FUNC_1 (int ,void const*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static OSStatus FUNC_2(SSLConnectionRef VAR_3, const void *VAR_4, size_t *VAR_5)
{
    URLContext *VAR_6 = (URLContext*)VAR_3;
    TLSContext *VAR_7 = VAR_6->priv_data;
    int VAR_8 = FUNC_1(VAR_7->tls_shared.tcp, VAR_4, *VAR_5);
    if (VAR_8 <= 0) {
        *VAR_5 = 0;
        switch(FUNC_0(VAR_8)) {
            case 128:
                return VAR_0;
            default:
                VAR_7->lastErr = VAR_8;
                return VAR_1;
        }
    } else {
        *VAR_5 = VAR_8;
        return VAR_2;
    }
}
