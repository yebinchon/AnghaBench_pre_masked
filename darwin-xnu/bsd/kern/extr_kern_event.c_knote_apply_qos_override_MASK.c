
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqworkq {int dummy; } ;
struct kqworkloop {int dummy; } ;
struct kqueue {int kq_state; } ;
struct knote {int kn_status; void* kn_qos_index; void* kn_qos_override; } ;
typedef void* kq_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct kqueue* FUNC_1 (struct knote*) ;
 int FUNC_2 (struct kqworkloop*,void*) ;
 int FUNC_3 (struct kqworkq*,struct knote*,void*) ;

__attribute__((used)) static void
FUNC_4(struct knote *VAR_3, kq_index_t VAR_4)
{
 FUNC_0((VAR_3->kn_status & VAR_0) == 0);

 VAR_3->kn_qos_override = VAR_4;

 if (VAR_3->kn_status & VAR_1) {
  struct kqueue *VAR_5 = FUNC_1(VAR_3);
  if (VAR_5->kq_state & VAR_2) {
   FUNC_3((struct kqworkq *)VAR_5, VAR_3, VAR_4);
  } else {
   FUNC_2((struct kqworkloop *)VAR_5, VAR_4);
  }
 } else {
  VAR_3->kn_qos_index = VAR_4;
 }
}
