
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_state_machine {int wpa_auth; void* pairwise_set; int addr; int PTK; void* PTK_valid; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct wpa_state_machine*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *,int ) ;
 int VAR_2 ;

void FUNC_3(struct wpa_state_machine *VAR_3)
{
    VAR_3->PTK_valid = VAR_0;
    FUNC_1(&VAR_3->PTK, 0, sizeof(VAR_3->PTK));
    FUNC_2(VAR_3->wpa_auth, 0, VAR_1, VAR_3->addr, 0, ((void*)0), 0);
    VAR_3->pairwise_set = VAR_0;
    FUNC_0(VAR_2, VAR_3->wpa_auth, VAR_3);
}
