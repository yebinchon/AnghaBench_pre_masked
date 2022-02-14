
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uwb_rsv_cb_f ;
struct uwb_rsv {int state; void* pal_priv; int callback; } ;


 int VAR_0 ;
 int FUNC_0 (struct uwb_rsv*) ;

void FUNC_1(struct uwb_rsv *VAR_1, uwb_rsv_cb_f VAR_2, void *VAR_3)
{
 FUNC_0(VAR_1);

 VAR_1->callback = VAR_2;
 VAR_1->pal_priv = VAR_3;
 VAR_1->state = VAR_0;
}
