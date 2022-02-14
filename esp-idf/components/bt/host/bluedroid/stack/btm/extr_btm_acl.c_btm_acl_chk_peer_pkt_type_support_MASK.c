
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * peer_lmp_features; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 size_t VAR_10 ;

void FUNC_6 (tACL_CONN *VAR_11, UINT16 *VAR_12)
{

    if (!FUNC_1(VAR_11->peer_lmp_features[VAR_10])) {
        *VAR_12 &= ~(VAR_0 + VAR_2);
    }

    if (!FUNC_3(VAR_11->peer_lmp_features[VAR_10])) {
        *VAR_12 &= ~(VAR_1 + VAR_3);
    }


    if (!FUNC_4(VAR_11->peer_lmp_features[VAR_10])) {

        *VAR_12 |= (VAR_4 + VAR_5 +
                        VAR_6);
    }

    if (!FUNC_5(VAR_11->peer_lmp_features[VAR_10])) {

        *VAR_12 |= (VAR_7 + VAR_8 +
                        VAR_9);
    }


    if (FUNC_4(VAR_11->peer_lmp_features[VAR_10])
            || FUNC_5(VAR_11->peer_lmp_features[VAR_10])) {
        if (!FUNC_0(VAR_11->peer_lmp_features[VAR_10]))

        {
            *VAR_12 |= (VAR_5 + VAR_8);
        }

        if (!FUNC_2(VAR_11->peer_lmp_features[VAR_10]))

        {
            *VAR_12 |= (VAR_6 + VAR_9);
        }
    }
}
