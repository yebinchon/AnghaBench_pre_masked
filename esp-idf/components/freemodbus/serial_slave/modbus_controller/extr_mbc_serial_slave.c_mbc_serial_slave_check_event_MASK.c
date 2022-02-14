
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mbs_event_group; } ;
typedef TYPE_1__ mb_slave_options_t ;
typedef scalar_t__ mb_event_group_t ;
struct TYPE_4__ {TYPE_1__ opts; } ;
typedef int BaseType_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static mb_event_group_t FUNC_3(mb_event_group_t VAR_5)
{
    FUNC_1((VAR_1 != ((void*)0)),
                    VAR_0,
                    "Slave interface is not correctly initialized.");
    mb_slave_options_t* VAR_6 = &VAR_1->opts;
    FUNC_0(VAR_6->mbs_event_group != ((void*)0));
    BaseType_t VAR_7 = FUNC_2(VAR_6->mbs_event_group, (BaseType_t)VAR_5,
                                            VAR_3 , VAR_2, VAR_4);
    return (mb_event_group_t)VAR_7;
}
