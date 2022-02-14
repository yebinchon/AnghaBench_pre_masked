
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqworkq {int dummy; } ;
struct kqworkloop {int dummy; } ;
struct kqueue {int kq_state; } ;
struct knote {int kn_status; int kn_qos; scalar_t__ kn_qos_override; scalar_t__ kn_qos_index; scalar_t__ kn_req_index; } ;
typedef int pthread_priority_t ;
typedef scalar_t__ kq_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 struct kqueue* FUNC_4 (struct knote*) ;
 int FUNC_5 (struct kqworkloop*,scalar_t__) ;
 int FUNC_6 (struct kqworkq*,struct knote*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct knote *VAR_8, pthread_priority_t VAR_9)
{
 struct kqueue *VAR_10 = FUNC_4(VAR_8);
 kq_index_t VAR_11 = FUNC_1(VAR_9);

 FUNC_3((VAR_8->kn_status & VAR_1) == 0);

 if (VAR_10->kq_state & VAR_5) {
  if (VAR_11 == VAR_6) {

   VAR_11 = VAR_3;
   VAR_9 = VAR_7;
  } else {
   VAR_9 = FUNC_0(VAR_9);
  }
 } else if (VAR_10->kq_state & VAR_4) {
  FUNC_3((VAR_9 & VAR_7) == 0);
  VAR_9 = FUNC_0(VAR_9);
 } else {
  VAR_9 = FUNC_2();
  VAR_11 = VAR_6;
 }

 VAR_8->kn_qos = VAR_9;
 VAR_8->kn_req_index = VAR_11;

 if ((VAR_8->kn_status & VAR_0) == 0 || VAR_11 > VAR_8->kn_qos_override) {

  VAR_8->kn_qos_override = VAR_11;
 }


 if ((VAR_8->kn_status & VAR_2) == 0) {
  VAR_8->kn_qos_index = VAR_11;
 } else if (VAR_10->kq_state & VAR_5) {
  FUNC_6((struct kqworkq *)VAR_10, VAR_8, VAR_11);
 } else if (VAR_10->kq_state & VAR_4) {
  FUNC_5((struct kqworkloop *)VAR_10, VAR_11);
 }
}
