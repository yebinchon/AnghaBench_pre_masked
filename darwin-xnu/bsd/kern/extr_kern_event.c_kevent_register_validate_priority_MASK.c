
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_state; } ;
struct knote {int kn_qos; } ;
struct kevent_internal_s {int flags; int qos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct kqueue *VAR_4, struct knote *VAR_5,
  struct kevent_internal_s *VAR_6)
{

 if (VAR_6->flags & (VAR_2 | VAR_1)) {
  return 0;
 }

 if (VAR_4->kq_state & VAR_3) {
  if (!FUNC_0(VAR_5 ? VAR_5->kn_qos : VAR_6->qos)) {
   return VAR_0;
  }
 }

 return 0;
}
