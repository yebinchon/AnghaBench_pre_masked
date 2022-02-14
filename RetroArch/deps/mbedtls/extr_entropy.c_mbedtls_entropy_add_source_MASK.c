
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_entropy_f_source_ptr ;
struct TYPE_5__ {int source_count; int mutex; TYPE_1__* source; } ;
typedef TYPE_2__ mbedtls_entropy_context ;
struct TYPE_4__ {size_t threshold; int strong; void* p_source; int f_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2( mbedtls_entropy_context *VAR_3,
                        mbedtls_entropy_f_source_ptr VAR_4, void *VAR_5,
                        size_t VAR_6, int VAR_7 )
{
    int VAR_8, VAR_9 = 0;






    VAR_8 = VAR_3->source_count;
    if( VAR_8 >= VAR_0 )
    {
        VAR_9 = VAR_1;
        goto exit;
    }

    VAR_3->source[VAR_8].f_source = VAR_4;
    VAR_3->source[VAR_8].p_source = VAR_5;
    VAR_3->source[VAR_8].threshold = VAR_6;
    VAR_3->source[VAR_8].strong = VAR_7;

    VAR_3->source_count++;

exit:





    return( VAR_9 );
}
