
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int turnstile_update_flags_t ;
typedef int turnstile_inheritor_t ;
struct turnstile {int dummy; } ;
struct kqrequest {int kqr_thread; } ;
struct kqworkloop {int kqwl_owner; struct kqrequest kqwl_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kqworkloop*) ;
 int FUNC_2 (struct turnstile*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct kqworkloop *VAR_2, struct turnstile *VAR_3,
  turnstile_update_flags_t VAR_4)
{
 turnstile_inheritor_t VAR_5 = VAR_0;
 struct kqrequest *VAR_6 = &VAR_2->kqwl_request;





 FUNC_0(!FUNC_1(VAR_2));

 if ((VAR_5 = VAR_2->kqwl_owner)) {
  VAR_4 |= VAR_1;
 } else if ((VAR_5 = VAR_6->kqr_thread)) {
  VAR_4 |= VAR_1;
 }

 FUNC_2(VAR_3, VAR_5, VAR_4);
}
