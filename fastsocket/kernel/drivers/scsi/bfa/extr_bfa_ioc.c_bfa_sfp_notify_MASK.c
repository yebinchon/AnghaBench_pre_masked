
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_sfp_s {int lock; int state_query_lock; void* status; } ;
typedef enum bfa_ioc_event_e { ____Placeholder_bfa_ioc_event_e } bfa_ioc_event_e ;




 void* VAR_0 ;
 int FUNC_0 (struct bfa_sfp_s*) ;
 int FUNC_1 (struct bfa_sfp_s*) ;
 int FUNC_2 (struct bfa_sfp_s*,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, enum bfa_ioc_event_e VAR_2)
{
 struct bfa_sfp_s *VAR_3 = VAR_1;

 FUNC_2(VAR_3, VAR_2);
 FUNC_2(VAR_3, VAR_3->lock);
 FUNC_2(VAR_3, VAR_3->state_query_lock);

 switch (VAR_2) {
 case 129:
 case 128:
  if (VAR_3->lock) {
   VAR_3->status = VAR_0;
   FUNC_0(VAR_3);
  }

  if (VAR_3->state_query_lock) {
   VAR_3->status = VAR_0;
   FUNC_1(VAR_3);
  }
  break;

 default:
  break;
 }
}
