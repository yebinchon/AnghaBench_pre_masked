
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ thread_qos_t ;
struct kqueue {int kq_state; } ;
struct knote {scalar_t__ kn_req_index; int kn_qos; int kn_status; scalar_t__ kn_qos_override; scalar_t__ kn_inuse; int kn_filtid; } ;
struct TYPE_2__ {int f_adjusts_qos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (struct knote*) ;
 int FUNC_3 (struct kqueue*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static bool
FUNC_5(struct kqueue *VAR_11, struct knote *VAR_12, int VAR_13,
  thread_qos_t *VAR_14)
{
 thread_qos_t VAR_15 = (VAR_13 >> VAR_1) & 7;

 FUNC_3(VAR_11);

 FUNC_1(VAR_13 & VAR_0);
 FUNC_1(VAR_15 < VAR_8);
 if (FUNC_0(!FUNC_2(VAR_12)->f_adjusts_qos)) {
  FUNC_4("filter %d cannot change QoS", VAR_12->kn_filtid);
 } else if (VAR_11->kq_state & VAR_6) {
  if (VAR_12->kn_req_index == VAR_4) {
   return 0;
  }
 } else if (VAR_11->kq_state & VAR_7) {
  if (VAR_12->kn_req_index == VAR_5) {
   return 0;
  }
 } else {
  return 0;
 }





 if (VAR_12->kn_qos & VAR_10) {
  if (VAR_15 == VAR_9)
   VAR_15 = VAR_12->kn_req_index;
 } else {
  if (VAR_15 < VAR_12->kn_req_index)
   VAR_15 = VAR_12->kn_req_index;
 }
 if ((VAR_12->kn_status & VAR_3) && (VAR_15 < VAR_12->kn_qos_override)) {

  return 0;
 }

 if ((VAR_12->kn_status & VAR_2) && VAR_12->kn_inuse) {
  VAR_12->kn_status |= VAR_3;
 }

 if (VAR_12->kn_qos_override == VAR_15) {
  return 0;
 }

 *VAR_14 = VAR_15;
 return 1;
}
