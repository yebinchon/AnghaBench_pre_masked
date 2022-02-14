
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_qos_t ;
struct kqueue {int dummy; } ;
struct knote {int kn_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct knote*,int ) ;
 int FUNC_1 (struct knote*) ;
 scalar_t__ FUNC_2 (struct knote*) ;
 scalar_t__ FUNC_3 (struct kqueue*,struct knote*,int,int *) ;
 int FUNC_4 (struct knote*) ;

__attribute__((used)) static void
FUNC_5(struct kqueue *VAR_1, struct knote *VAR_2, int VAR_3)
{
 thread_qos_t VAR_4;
 if (FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_4)) {
  FUNC_1(VAR_2);
  FUNC_0(VAR_2, VAR_4);
  if (FUNC_2(VAR_2) && (VAR_2->kn_status & VAR_0)) {
   FUNC_4(VAR_2);
  }
 }
}
