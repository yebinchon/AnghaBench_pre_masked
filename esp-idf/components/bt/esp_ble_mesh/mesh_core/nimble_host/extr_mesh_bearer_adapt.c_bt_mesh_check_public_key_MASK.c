
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8_t ;
struct mbedtls_ecp_point {int member_0; } ;
struct TYPE_7__ {int member_0; } ;
typedef TYPE_1__ mbedtls_ecp_group ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct mbedtls_ecp_point*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct mbedtls_ecp_point*) ;
 int FUNC_5 (struct mbedtls_ecp_point*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,struct mbedtls_ecp_point*,int*,int) ;
 int FUNC_7 (int*,int const*,int) ;

bool FUNC_8(const u8_t VAR_1[64])
{
    struct mbedtls_ecp_point VAR_2 = {0};
    mbedtls_ecp_group VAR_3 = {0};
    bool VAR_4 = 0;

    uint8_t VAR_5[65] = {0};

    VAR_5[0] = 0x04;
    FUNC_7(&VAR_5[1], VAR_1, 64);


    FUNC_5(&VAR_2);
    FUNC_2(&VAR_3);


    if (FUNC_3(&VAR_3, VAR_0) != 0) {
        goto exit;
    }

    if (FUNC_6(&VAR_3, &VAR_2, VAR_5, 65) != 0) {
        goto exit;
    }

    if (FUNC_0(&VAR_3, &VAR_2) != 0) {
        goto exit;
    }

    VAR_4 = 1;

exit:
    FUNC_4(&VAR_2);
    FUNC_1(&VAR_3);
    return VAR_4;

}
