
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tag; scalar_t__ len; int p; } ;
typedef TYPE_1__ mbedtls_x509_buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2( const mbedtls_x509_buf *VAR_2, const mbedtls_x509_buf *VAR_3 )
{
    if( VAR_2->tag == VAR_3->tag &&
        VAR_2->len == VAR_3->len &&
        FUNC_0( VAR_2->p, VAR_3->p, VAR_3->len ) == 0 )
    {
        return( 0 );
    }

    if( ( VAR_2->tag == VAR_1 || VAR_2->tag == VAR_0 ) &&
        ( VAR_3->tag == VAR_1 || VAR_3->tag == VAR_0 ) &&
        VAR_2->len == VAR_3->len &&
        FUNC_1( VAR_2->p, VAR_3->p, VAR_3->len ) == 0 )
    {
        return( 0 );
    }

    return( -1 );
}
