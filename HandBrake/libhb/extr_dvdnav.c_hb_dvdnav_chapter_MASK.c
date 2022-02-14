
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int list_dvd_chapter; int dvdnav; } ;
typedef TYPE_1__ hb_dvdnav_t ;
struct TYPE_5__ {TYPE_1__ dvdnav; } ;
typedef TYPE_2__ hb_dvd_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int ,int*,int*,int*) ;

__attribute__((used)) static int FUNC_2( hb_dvd_t * VAR_1 )
{
    hb_dvdnav_t * VAR_2 = &(VAR_1->dvdnav);
    int32_t VAR_3, VAR_4, VAR_5;
    int32_t VAR_6;

    if (FUNC_1(VAR_2->dvdnav, &VAR_3, &VAR_4, &VAR_5) != VAR_0)
    {
        return -1;
    }
    VAR_6 = FUNC_0( VAR_2->list_dvd_chapter, VAR_4, VAR_5 );
    return VAR_6;
}
