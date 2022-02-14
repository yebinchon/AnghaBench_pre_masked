
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct kqueue {int kq_state; } ;
struct fileproc {int dummy; } ;
typedef scalar_t__ kqueue_id_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct proc*,int,struct fileproc*,int ) ;
 int FUNC_2 (struct proc*,struct kqueue*) ;

__attribute__((used)) static void
FUNC_3(
 struct proc *VAR_1,
 kqueue_id_t VAR_2,
 struct fileproc *VAR_3,
 struct kqueue *VAR_4)
{
 FUNC_2(VAR_1, VAR_4);
 if (VAR_3 != ((void*)0)) {
  FUNC_0((VAR_4->kq_state & VAR_0) == 0);
  FUNC_1(VAR_1, (int)VAR_2, VAR_3, 0);
 }
}
