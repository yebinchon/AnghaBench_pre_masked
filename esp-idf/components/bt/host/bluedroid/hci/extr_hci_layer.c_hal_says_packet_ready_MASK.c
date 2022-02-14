
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* reassemble_and_dispatch ) (TYPE_1__*) ;} ;
struct TYPE_7__ {scalar_t__ event; } ;
typedef TYPE_1__ BT_HDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(BT_HDR *VAR_2)
{
    if (VAR_2->event != VAR_0) {
        VAR_1->reassemble_and_dispatch(VAR_2);
    } else if (!FUNC_1(VAR_2)) {
        FUNC_0(VAR_2);
    }
}
