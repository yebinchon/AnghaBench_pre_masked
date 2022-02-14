
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mb_event_group_t ;
struct TYPE_2__ {int (* check_event ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ) ;

mb_event_group_t FUNC_2(mb_event_group_t VAR_2)
{
    FUNC_0((VAR_1 != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");
    FUNC_0((VAR_1->check_event != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");
    mb_event_group_t VAR_3 = VAR_1->check_event(VAR_2);
    return VAR_3;
}
