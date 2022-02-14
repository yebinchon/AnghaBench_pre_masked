
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* session_out; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_6__ {size_t mfl_code; } ;
struct TYPE_5__ {size_t mfl_code; } ;


 size_t* VAR_0 ;

size_t FUNC_0( const mbedtls_ssl_context *VAR_1 )
{
    size_t VAR_2;




    VAR_2 = VAR_0[VAR_1->conf->mfl_code];




    if( VAR_1->session_out != ((void*)0) &&
        VAR_0[VAR_1->session_out->mfl_code] < VAR_2 )
    {
        VAR_2 = VAR_0[VAR_1->session_out->mfl_code];
    }

    return VAR_2;
}
