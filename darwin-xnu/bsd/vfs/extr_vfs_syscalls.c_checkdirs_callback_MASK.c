
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
struct filedesc {scalar_t__ fd_cdir; scalar_t__ fd_rdir; } ;
struct cdirargs {scalar_t__ olddp; scalar_t__ newdp; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_5__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(proc_t VAR_1, void * VAR_2)
{
 struct cdirargs * VAR_3 = (struct cdirargs * )VAR_2;
 vnode_t VAR_4 = VAR_3->olddp;
 vnode_t VAR_5 = VAR_3->newdp;
 struct filedesc *VAR_6;
 vnode_t VAR_7;
 vnode_t VAR_8;
 vnode_t VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;







 FUNC_0(VAR_1);
 VAR_6 = VAR_1->p_fd;
 if (VAR_6 == (struct filedesc *)0) {
  FUNC_1(VAR_1);
  return(VAR_0);
 }
 VAR_8 = VAR_6->fd_cdir;
 VAR_9 = VAR_6->fd_rdir;
 FUNC_1(VAR_1);

 if (VAR_8 == VAR_4) {
  FUNC_2(VAR_5);
  VAR_7 = VAR_6->fd_cdir;
  VAR_8 = VAR_5;
  VAR_10 = 1;
  FUNC_3(VAR_7);
 }
 if (VAR_9 == VAR_4) {
  FUNC_2(VAR_5);
  VAR_7 = VAR_6->fd_rdir;
  VAR_9 = VAR_5;
  VAR_11 = 1;
  FUNC_3(VAR_7);
 }
 if (VAR_10 || VAR_11) {
  FUNC_0(VAR_1);
  VAR_6->fd_cdir = VAR_8;
  VAR_6->fd_rdir = VAR_9;
  FUNC_1(VAR_1);
 }
 return(VAR_0);
}
