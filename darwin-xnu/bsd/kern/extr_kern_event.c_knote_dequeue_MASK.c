
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_count; } ;
struct kqtailq {int dummy; } ;
struct knote {int kn_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct kqtailq*,struct knote*,int ) ;
 int VAR_1 ;
 struct kqueue* FUNC_1 (struct knote*) ;
 struct kqtailq* FUNC_2 (struct knote*) ;
 int FUNC_3 (struct kqueue*) ;

__attribute__((used)) static void
FUNC_4(struct knote *VAR_2)
{
 struct kqueue *VAR_3 = FUNC_1(VAR_2);
 struct kqtailq *VAR_4;

 FUNC_3(VAR_3);

 if ((VAR_2->kn_status & VAR_0) == 0)
  return;

 VAR_4 = FUNC_2(VAR_2);
 FUNC_0(VAR_4, VAR_2, VAR_1);
 VAR_2->kn_status &= ~VAR_0;
 VAR_3->kq_count--;
}
