
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t pbits; } ;
struct TYPE_4__ {TYPE_1__ grp; } ;
typedef TYPE_2__ mbedtls_ecp_keypair ;



__attribute__((used)) static size_t FUNC_0( const void *VAR_0 )
{
    return( ((mbedtls_ecp_keypair *) VAR_0)->grp.pbits );
}
