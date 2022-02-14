
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv {int state; int ie_valid; int rc; } ;
typedef enum uwb_rsv_state { ____Placeholder_uwb_rsv_state } uwb_rsv_state ;


 int FUNC_0 (char*,struct uwb_rsv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uwb_rsv*) ;

__attribute__((used)) static void FUNC_3(struct uwb_rsv *VAR_0,
     enum uwb_rsv_state VAR_1)
{
 VAR_0->state = VAR_1;
 VAR_0->ie_valid = 0;

 FUNC_0("SU", VAR_0);

 FUNC_2(VAR_0);
 FUNC_1(VAR_0->rc);
}
