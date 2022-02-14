
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_state; scalar_t__ kq_p; } ;
struct kqrequest {int kqr_state; scalar_t__ kqr_thread; } ;
typedef int kq_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct kqueue*) ;
 int FUNC_3 (scalar_t__,struct kqrequest*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct kqueue *VAR_4, struct kqrequest *VAR_5, kq_index_t VAR_6)
{
 FUNC_0(VAR_5->kqr_state & VAR_0);
 FUNC_0(VAR_5->kqr_thread == VAR_2);

 FUNC_2(VAR_4);

 int VAR_7 = 0;
 if ((VAR_4->kq_state & VAR_1) && VAR_4->kq_p == FUNC_1()) {
  VAR_7 |= VAR_3;
 }
 FUNC_3(VAR_4->kq_p, VAR_5, VAR_6, VAR_7);
}
