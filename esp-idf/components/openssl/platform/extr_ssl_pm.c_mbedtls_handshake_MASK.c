
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2( mbedtls_ssl_context *VAR_2 )
{
    int VAR_3 = 0;

    while (VAR_2->state != VAR_0) {
        VAR_3 = FUNC_1(VAR_2);

        FUNC_0(VAR_1, "ssl ret %d state %d", VAR_3, VAR_2->state);

        if (VAR_3 != 0)
            break;
    }

    return VAR_3;
}
