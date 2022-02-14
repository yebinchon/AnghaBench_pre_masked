
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* path; scalar_t__ reader; scalar_t__ vmg; scalar_t__ dvdnav; } ;
typedef TYPE_1__ hb_dvdnav_t ;
struct TYPE_7__ {TYPE_1__ dvdnav; } ;
typedef TYPE_2__ hb_dvd_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5( hb_dvd_t ** VAR_0 )
{
    hb_dvdnav_t * VAR_1 = &((*VAR_0)->dvdnav);

    if (VAR_1->dvdnav) FUNC_2( VAR_1->dvdnav );
    if (VAR_1->vmg) FUNC_4( VAR_1->vmg );
    FUNC_1(VAR_1);
    if (VAR_1->reader) FUNC_0( VAR_1->reader );

    FUNC_3(VAR_1->path);


    FUNC_3( VAR_1 );
    *VAR_0 = ((void*)0);
}
