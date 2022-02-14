
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqworkloop {int dummy; } ;
struct kqueue {int kq_state; } ;
struct knote {int kn_status; scalar_t__ kn_qos_index; scalar_t__ kn_qos_override; scalar_t__ kn_req_index; int kn_qos; } ;
typedef scalar_t__ kq_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct knote*) ;
 struct kqueue* FUNC_3 (struct knote*) ;
 int FUNC_4 (struct kqueue*) ;
 int FUNC_5 (struct kqueue*) ;
 int FUNC_6 (struct kqueue*) ;
 int FUNC_7 (struct kqueue*) ;
 int FUNC_8 (struct kqworkloop*,int ,scalar_t__) ;

void
FUNC_9(struct knote *VAR_11)
{
 struct kqueue *VAR_12 = FUNC_3(VAR_11);
 kq_index_t VAR_13;

 FUNC_6(VAR_12);
 VAR_11->kn_status |= VAR_2;





 FUNC_1(VAR_11->kn_status & VAR_0);
 FUNC_1((VAR_11->kn_status & (VAR_1 | VAR_3)) == 0);


 if (VAR_12->kq_state & VAR_8) {
  VAR_13 = VAR_6;
 } else if (VAR_12->kq_state & VAR_7) {
  struct kqworkloop *VAR_14 = (struct kqworkloop *)VAR_12;

  VAR_13 = FUNC_0(VAR_11->kn_qos);
  FUNC_1(VAR_13 && VAR_13 < VAR_9);
  FUNC_4(VAR_12);
  FUNC_8(VAR_14, VAR_5, VAR_13);
  FUNC_5(VAR_12);
  VAR_13 = VAR_4;
 } else {
  VAR_13 = VAR_10;
 }

 VAR_11->kn_req_index = VAR_13;
 VAR_11->kn_qos_override = VAR_13;
 VAR_11->kn_qos_index = VAR_13;

 FUNC_2(VAR_11);
 FUNC_7(VAR_12);
}
