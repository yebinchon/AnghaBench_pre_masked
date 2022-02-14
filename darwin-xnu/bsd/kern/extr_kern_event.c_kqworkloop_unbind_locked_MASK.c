
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int thread_qos_t ;
struct uthread {int uu_kqueue_override; struct kqrequest* uu_kqr_bound; } ;
struct kqrequest {int kqr_state; int * kqr_thread; } ;
struct kqworkloop {scalar_t__ kqwl_turnstile; int * kqwl_owner; int kqwl_dynamicid; struct kqrequest kqwl_request; } ;
typedef int kq_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 struct uthread* FUNC_3 (int ) ;
 int FUNC_4 (struct kqworkloop*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static thread_qos_t
FUNC_8(struct kqworkloop *VAR_7, thread_t VAR_8)
{
 struct uthread *VAR_9 = FUNC_3(VAR_8);
 struct kqrequest *VAR_10 = &VAR_7->kqwl_request;
 kq_index_t VAR_11 = VAR_9->uu_kqueue_override;

 FUNC_0(FUNC_1(VAR_0), VAR_7->kqwl_dynamicid,
   FUNC_5(VAR_8), 0, 0);

 FUNC_4(VAR_7);
 FUNC_2(VAR_9->uu_kqr_bound == VAR_10);
 VAR_9->uu_kqr_bound = ((void*)0);
 VAR_9->uu_kqueue_override = VAR_3;

 if (VAR_7->kqwl_owner == ((void*)0) && VAR_7->kqwl_turnstile) {
  FUNC_6(VAR_7->kqwl_turnstile,
    VAR_5, VAR_4);
  FUNC_7(VAR_7->kqwl_turnstile,
    VAR_6);
 }

 VAR_10->kqr_thread = ((void*)0);
 VAR_10->kqr_state &= ~(VAR_2 | VAR_1);
 return VAR_11;
}
