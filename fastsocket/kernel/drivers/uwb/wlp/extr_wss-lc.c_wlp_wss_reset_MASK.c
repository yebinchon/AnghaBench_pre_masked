
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_wss {int state; scalar_t__ tag; int * master_key; int secure_status; int bcast; int * name; scalar_t__ hash; int wssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct wlp_wss *VAR_2)
{
 FUNC_0(&VAR_2->wssid, 0, sizeof(VAR_2->wssid));
 VAR_2->hash = 0;
 FUNC_0(&VAR_2->name[0], 0, sizeof(VAR_2->name));
 FUNC_0(&VAR_2->bcast, 0, sizeof(VAR_2->bcast));
 VAR_2->secure_status = VAR_1;
 FUNC_0(&VAR_2->master_key[0], 0, sizeof(VAR_2->master_key));
 VAR_2->tag = 0;
 VAR_2->state = VAR_0;
}
