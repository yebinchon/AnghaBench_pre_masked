
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int dummy; } ;
struct kqtailq {int dummy; } ;
struct knote {int kn_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct kqtailq*,struct knote*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct knote*) ;
 struct kqueue* FUNC_2 (struct knote*) ;
 int FUNC_3 (struct kqueue*) ;
 struct kqtailq* FUNC_4 (struct kqueue*,struct knote*) ;

__attribute__((used)) static void
FUNC_5(struct knote *VAR_2)
{
 struct kqtailq *VAR_3;
 struct kqueue *VAR_4 = FUNC_2(VAR_2);

 FUNC_3(VAR_4);

 if (VAR_2->kn_status & VAR_0)
  return;

 FUNC_1(VAR_2);
 VAR_2->kn_status |= VAR_0;
 VAR_3 = FUNC_4(VAR_4, VAR_2);
 FUNC_0(VAR_3, VAR_2, VAR_1);
}
