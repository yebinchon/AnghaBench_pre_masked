
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ in_window_top; int in_window; TYPE_1__* conf; scalar_t__ in_ctr; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_4__ {scalar_t__ anti_replay; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

void FUNC_1( mbedtls_ssl_context *VAR_1 )
{
    uint64_t VAR_2 = FUNC_0( VAR_1->in_ctr + 2 );

    if( VAR_1->conf->anti_replay == VAR_0 )
        return;

    if( VAR_2 > VAR_1->in_window_top )
    {

        uint64_t VAR_3 = VAR_2 - VAR_1->in_window_top;

        if( VAR_3 >= 64 )
            VAR_1->in_window = 1;
        else
        {
            VAR_1->in_window <<= VAR_3;
            VAR_1->in_window |= 1;
        }

        VAR_1->in_window_top = VAR_2;
    }
    else
    {

        uint64_t VAR_4 = VAR_1->in_window_top - VAR_2;

        if( VAR_4 < 64 )
            VAR_1->in_window |= (uint64_t) 1 << VAR_4;
    }
}
