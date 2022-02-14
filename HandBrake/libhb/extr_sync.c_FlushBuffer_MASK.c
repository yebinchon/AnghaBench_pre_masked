
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mutex; int found_first_pts; } ;
typedef TYPE_1__ sync_common_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( sync_common_t * VAR_0 )
{
    FUNC_2(VAR_0->mutex);

    if (!VAR_0->found_first_pts)
    {
        FUNC_1(VAR_0);
    }
    FUNC_0(VAR_0);

    FUNC_3(VAR_0->mutex);
}
