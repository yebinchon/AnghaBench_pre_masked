
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
typedef int idstr ;
struct TYPE_4__ {int p_dbg; int (* f_dbg ) (int ,int,char const*,int,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,void*,char const*) ;
 int FUNC_1 (int ,int,char const*,int,char*) ;
 int FUNC_2 (int ,int,char const*,int,char const*) ;

__attribute__((used)) static void FUNC_3( const mbedtls_ssl_context *VAR_1, int VAR_2,
                                    const char *VAR_3, int VAR_4,
                                    const char *VAR_5 )
{
    VAR_1->conf->f_dbg( VAR_1->conf->p_dbg, VAR_2, VAR_3, VAR_4, VAR_5 );

}
