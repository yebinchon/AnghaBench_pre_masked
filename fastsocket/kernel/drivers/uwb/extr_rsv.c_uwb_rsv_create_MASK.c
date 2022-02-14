
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uwb_rsv_cb_f ;
struct uwb_rsv {void* pal_priv; int callback; } ;
struct uwb_rc {int dummy; } ;


 struct uwb_rsv* FUNC_0 (struct uwb_rc*) ;

struct uwb_rsv *FUNC_1(struct uwb_rc *VAR_0, uwb_rsv_cb_f VAR_1, void *VAR_2)
{
 struct uwb_rsv *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->callback = VAR_1;
 VAR_3->pal_priv = VAR_2;

 return VAR_3;
}
