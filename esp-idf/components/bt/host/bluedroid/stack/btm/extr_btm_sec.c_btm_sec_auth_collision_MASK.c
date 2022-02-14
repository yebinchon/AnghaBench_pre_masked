
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sec_state; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {scalar_t__ param; } ;
struct TYPE_8__ {scalar_t__ collision_start_time; scalar_t__ max_collision_delay; TYPE_2__ sec_collision_tle; TYPE_1__* p_collided_dev_rec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5 (UINT16 VAR_7)
{
    tBTM_SEC_DEV_REC *VAR_8;

    if (!VAR_5.collision_start_time) {
        VAR_5.collision_start_time = FUNC_4();
    }

    if ((FUNC_4() - VAR_5.collision_start_time) < VAR_5.max_collision_delay)
    {
        if (VAR_7 == VAR_0)
        {
            if ((VAR_8 = FUNC_2 (VAR_1)) == ((void*)0)) {
                VAR_8 = FUNC_2 (VAR_2);
            }
        } else {
            VAR_8 = FUNC_1 (VAR_7);
        }

        if (VAR_8 != ((void*)0)) {
            FUNC_0 ("btm_sec_auth_collision: state %d (retrying in a moment...)\n", VAR_8->sec_state);

            if (VAR_8->sec_state == VAR_1 || VAR_8->sec_state == VAR_2) {
                VAR_8->sec_state = 0;
            }

            VAR_5.p_collided_dev_rec = VAR_8;
            VAR_5.sec_collision_tle.param = (UINT32) VAR_6;
            FUNC_3 (&VAR_5.sec_collision_tle, VAR_3, VAR_4);
        }
    }
}
