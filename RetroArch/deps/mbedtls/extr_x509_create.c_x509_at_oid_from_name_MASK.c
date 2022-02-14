
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t name_len; char const* oid; int * name; } ;
typedef TYPE_1__ x509_attr_descriptor_t ;


 scalar_t__ FUNC_0 (int *,char const*,size_t) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_1( const char *VAR_1, size_t VAR_2 )
{
    const x509_attr_descriptor_t *VAR_3;

    for( VAR_3 = VAR_0; VAR_3->name != ((void*)0); VAR_3++ )
        if( VAR_3->name_len == VAR_2 &&
            FUNC_0( VAR_3->name, VAR_1, VAR_2 ) == 0 )
            break;

    return( VAR_3->oid );
}
