
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* lacpdu_ref ;
typedef int lacp_actor_partner_tlv_ref ;
typedef int * bondport_ref ;
struct TYPE_6__ {int la_actor_tlv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int * FUNC_3 (int *,int const) ;

__attribute__((used)) static void
FUNC_4(bondport_ref VAR_2, lacpdu_ref VAR_3)
{
    bondport_ref VAR_4;

    VAR_4
 = FUNC_3(VAR_2, (const lacp_actor_partner_tlv_ref)
          &VAR_3->la_actor_tlv);
    if (VAR_4 != ((void*)0)) {
 FUNC_2(VAR_4, VAR_1, ((void*)0));
    }
    FUNC_2(VAR_2, VAR_0, VAR_3);
    FUNC_0(VAR_2, VAR_0, VAR_3);
    FUNC_1(VAR_2, VAR_0, VAR_3);
    return;
}
