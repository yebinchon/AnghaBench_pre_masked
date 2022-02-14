
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct kqlist {int dummy; } ;
struct filedesc {int fd_kqhashmask; struct kqlist* fd_kqhash; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_6__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct kqlist*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 struct kqlist* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(proc_t VAR_2)
{
 struct filedesc *VAR_3 = VAR_2->p_fd;

 FUNC_4(VAR_2);

 if (FUNC_1(VAR_3->fd_kqhash == ((void*)0))) {
  struct kqlist *VAR_4;
  u_long VAR_5;

  FUNC_5(VAR_2);
  VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_5);
  FUNC_3(VAR_2);


  if (VAR_3->fd_kqhashmask == 0) {
   VAR_3->fd_kqhash = VAR_4;
   VAR_3->fd_kqhashmask = VAR_5;
  } else {
   FUNC_5(VAR_2);
   FUNC_0(VAR_4, VAR_1);
   FUNC_3(VAR_2);
  }
 }
}
