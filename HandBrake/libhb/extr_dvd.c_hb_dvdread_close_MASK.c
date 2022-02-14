
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* path; scalar_t__ reader; scalar_t__ vmg; } ;
typedef TYPE_1__ hb_dvdread_t ;
struct TYPE_6__ {TYPE_1__ dvdread; } ;
typedef TYPE_2__ hb_dvd_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3( hb_dvd_t ** VAR_0 )
{
    hb_dvdread_t * VAR_1 = &((*VAR_0)->dvdread);

    if( VAR_1->vmg )
    {
        FUNC_2( VAR_1->vmg );
    }
    if( VAR_1->reader )
    {
        FUNC_0( VAR_1->reader );
    }

    FUNC_1( VAR_1->path );
    FUNC_1( VAR_1 );
    *VAR_0 = ((void*)0);
}
