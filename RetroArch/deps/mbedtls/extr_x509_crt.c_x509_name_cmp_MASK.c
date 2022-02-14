
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tag; scalar_t__ len; int p; } ;
struct TYPE_6__ {scalar_t__ next_merged; struct TYPE_6__* next; int val; TYPE_1__ oid; } ;
typedef TYPE_2__ mbedtls_x509_name ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2( const mbedtls_x509_name *VAR_0, const mbedtls_x509_name *VAR_1 )
{

    while( VAR_0 != ((void*)0) || VAR_1 != ((void*)0) )
    {
        if( VAR_0 == ((void*)0) || VAR_1 == ((void*)0) )
            return( -1 );


        if( VAR_0->oid.tag != VAR_1->oid.tag ||
            VAR_0->oid.len != VAR_1->oid.len ||
            FUNC_0( VAR_0->oid.p, VAR_1->oid.p, VAR_1->oid.len ) != 0 )
        {
            return( -1 );
        }


        if( FUNC_1( &VAR_0->val, &VAR_1->val ) != 0 )
            return( -1 );


        if( VAR_0->next_merged != VAR_1->next_merged )
            return( -1 );

        VAR_0 = VAR_0->next;
        VAR_1 = VAR_1->next;
    }


    return( 0 );
}
