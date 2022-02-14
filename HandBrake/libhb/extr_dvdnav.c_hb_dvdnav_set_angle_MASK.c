
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dvdnav; } ;
typedef TYPE_1__ hb_dvdnav_t ;
struct TYPE_5__ {TYPE_1__ dvdnav; } ;
typedef TYPE_2__ hb_dvd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3( hb_dvd_t * VAR_1, int VAR_2 )
{
    hb_dvdnav_t * VAR_3 = &(VAR_1->dvdnav);

    if (FUNC_0( VAR_3->dvdnav, VAR_2) != VAR_0)
    {
        FUNC_2("dvdnav_angle_change %s", FUNC_1(VAR_3->dvdnav));
    }
}
