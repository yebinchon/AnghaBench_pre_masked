
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,void*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static OSStatus FUNC_2(SSLConnectionRef VAR_5, void *VAR_6, size_t *VAR_7)
{
    URLContext *VAR_8 = (URLContext*)VAR_5;
    TLSContext *VAR_9 = VAR_8->priv_data;
    size_t VAR_10 = *VAR_7;
    int VAR_11 = FUNC_1(VAR_9->tls_shared.tcp, VAR_6, VAR_10);
    if (VAR_11 <= 0) {
        *VAR_7 = 0;
        switch(FUNC_0(VAR_11)) {
            case 128:
            case 0:
                return VAR_1;
            case 129:
                return VAR_0;
            case 130:
                return VAR_2;
            default:
                VAR_9->lastErr = VAR_11;
                return VAR_3;
        }
    } else {
        *VAR_7 = VAR_11;
        if (VAR_11 < VAR_10)
            return VAR_2;
        else
            return VAR_4;
    }
}
