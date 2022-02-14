
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* data; } ;
typedef TYPE_1__ BT_HDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

bool FUNC_1(BT_HDR *VAR_4)
{
    FUNC_0(VAR_4);
    if(VAR_4->data[0] == VAR_0 && VAR_4->data[1] == VAR_3) {
        if(VAR_4->data[3] == VAR_2

        || VAR_4->data[3] == VAR_1

        ) {
            return 1;
        }
    }
    return 0;
}
