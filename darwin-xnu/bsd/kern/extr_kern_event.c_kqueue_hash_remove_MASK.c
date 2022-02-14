
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct filedesc* p_fd; } ;
struct kqworkloop {int kqwl_dynamicid; } ;
struct kqueue {int kq_state; } ;
struct kqlist {int dummy; } ;
struct filedesc {int fd_kqhashmask; struct kqlist* fd_kqhash; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct kqlist*,struct kqworkloop*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct proc*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(
 struct proc *VAR_4,
 struct kqueue *VAR_5)
{
 struct kqworkloop *VAR_6 = (struct kqworkloop *)VAR_5;
 struct filedesc *VAR_7 = VAR_4->p_fd;
 struct kqlist *VAR_8;


 FUNC_3(VAR_4);

 if ((VAR_5->kq_state & VAR_0) == 0) {
  FUNC_2(VAR_5->kq_state & VAR_0);
  return;
 }
 FUNC_2(VAR_5->kq_state & VAR_1);
 VAR_8 = &VAR_7->fd_kqhash[FUNC_0(VAR_6->kqwl_dynamicid, VAR_7->fd_kqhashmask)];
 FUNC_1(VAR_8, VAR_6, VAR_3, VAR_2);
}
