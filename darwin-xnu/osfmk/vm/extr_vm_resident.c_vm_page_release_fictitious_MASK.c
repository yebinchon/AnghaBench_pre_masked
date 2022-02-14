
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_5__ {scalar_t__ vmp_q_state; int vmp_fictitious; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,TYPE_1__*) ;

void
FUNC_4(
 vm_page_t VAR_7)
{
 FUNC_2((VAR_7->vmp_q_state == VAR_1) || (VAR_7->vmp_q_state == VAR_0));
 FUNC_2(VAR_7->vmp_fictitious);
 FUNC_2(FUNC_1(VAR_7) == VAR_4 ||
        FUNC_1(VAR_7) == VAR_5);


if (FUNC_1(VAR_7) == VAR_5) FUNC_0(-1, &VAR_3);

 VAR_2++;

 FUNC_3(VAR_6, VAR_7);
}
