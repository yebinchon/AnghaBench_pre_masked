
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {struct TYPE_3__* next; int arg; int (* cb ) (int ,int ,int ,int ) ;} ;
typedef TYPE_1__ apb_change_t ;
typedef int apb_change_ev_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(apb_change_ev_t VAR_3, uint32_t VAR_4, uint32_t VAR_5){
    FUNC_0();
    FUNC_3(VAR_1, VAR_2);
    apb_change_t * VAR_6 = VAR_0;
    while(VAR_6 != ((void*)0)){
        VAR_6->cb(VAR_6->arg, VAR_3, VAR_4, VAR_5);
        VAR_6=VAR_6->next;
    }
    FUNC_2(VAR_1);
}
