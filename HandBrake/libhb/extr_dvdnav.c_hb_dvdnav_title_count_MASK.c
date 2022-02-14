
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


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1( hb_dvd_t * VAR_0 )
{
    int VAR_1 = 0;
    hb_dvdnav_t * VAR_2 = &(VAR_0->dvdnav);

    FUNC_0(VAR_2->dvdnav, &VAR_1);
    return VAR_1;
}
