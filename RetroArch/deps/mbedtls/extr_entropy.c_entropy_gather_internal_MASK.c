
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int source_count; TYPE_1__* source; } ;
typedef TYPE_2__ mbedtls_entropy_context ;
struct TYPE_5__ {scalar_t__ strong; int (* f_source ) (int ,unsigned char*,int,size_t*) ;size_t size; int p_source; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,unsigned char,unsigned char*,size_t) ;
 int FUNC_1 (int ,unsigned char*,int,size_t*) ;

__attribute__((used)) static int FUNC_2( mbedtls_entropy_context *VAR_4 )
{
    int VAR_5, VAR_6, VAR_7 = 0;
    unsigned char VAR_8[VAR_0];
    size_t VAR_9;

    if( VAR_4->source_count == 0 )
        return( VAR_2 );




    for( VAR_6 = 0; VAR_6 < VAR_4->source_count; VAR_6++ )
    {
        if( VAR_4->source[VAR_6].strong == VAR_1 )
            VAR_7 = 1;

        VAR_9 = 0;
        if( ( VAR_5 = VAR_4->source[VAR_6].f_source( VAR_4->source[VAR_6].p_source,
                        VAR_8, VAR_0, &VAR_9 ) ) != 0 )
        {
            return( VAR_5 );
        }




        if( VAR_9 > 0 )
        {
            FUNC_0( VAR_4, (unsigned char) VAR_6, VAR_8, VAR_9 );
            VAR_4->source[VAR_6].size += VAR_9;
        }
    }

    if( VAR_7 == 0 )
        return( VAR_3 );

    return( 0 );
}
