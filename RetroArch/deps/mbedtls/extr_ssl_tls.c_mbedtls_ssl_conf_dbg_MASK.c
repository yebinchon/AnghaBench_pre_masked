
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* f_dbg ) (void*,int,char const*,int,char const*) ;void* p_dbg; } ;
typedef TYPE_1__ mbedtls_ssl_config ;



void FUNC_0( mbedtls_ssl_config *VAR_0,
                  void (*VAR_1)(void *, int, const char *, int, const char *),
                  void *VAR_2 )
{
    VAR_0->f_dbg = VAR_1;
    VAR_0->p_dbg = VAR_2;
}
