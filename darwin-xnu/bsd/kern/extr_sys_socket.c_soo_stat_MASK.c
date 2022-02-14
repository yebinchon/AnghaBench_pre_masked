
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat64 {int st_mode; scalar_t__ st_size; void* st_gid; void* st_uid; } ;
struct stat {int st_mode; scalar_t__ st_size; void* st_gid; void* st_uid; } ;
struct TYPE_4__ {scalar_t__ sb_cc; scalar_t__ sb_ctl; } ;
struct socket {int so_state; TYPE_3__* so_proto; int so_cred; TYPE_1__ so_rcv; } ;
typedef int caddr_t ;
struct TYPE_6__ {TYPE_2__* pr_usrreqs; } ;
struct TYPE_5__ {int (* pru_sense ) (struct socket*,void*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct socket*) ;
 int FUNC_5 (struct socket*,int) ;
 int FUNC_6 (struct socket*,int) ;
 int FUNC_7 (struct socket*,void*,int) ;

int
FUNC_8(struct socket *VAR_9, void *VAR_10, int VAR_11)
{
 int VAR_12;

 struct stat *VAR_13 = (struct stat *)0;

 struct stat64 *VAR_14 = (struct stat64 *)0;







 if (VAR_11 != 0) {
  VAR_14 = (struct stat64 *)VAR_10;
  FUNC_0((caddr_t)VAR_14, sizeof (*VAR_14));
 } else {
  VAR_13 = (struct stat *)VAR_10;
  FUNC_0((caddr_t)VAR_13, sizeof (*VAR_13));
 }

 FUNC_5(VAR_9, 1);
 if (VAR_11 != 0) {
  VAR_14->st_mode = VAR_2;
  if ((VAR_9->so_state & VAR_0) == 0 ||
      VAR_9->so_rcv.sb_cc != 0)
   VAR_14->st_mode |= VAR_5 | VAR_3 | VAR_4;
  if ((VAR_9->so_state & VAR_1) == 0)
   VAR_14->st_mode |= VAR_8 | VAR_6 | VAR_7;
  VAR_14->st_size = VAR_9->so_rcv.sb_cc - VAR_9->so_rcv.sb_ctl;
  VAR_14->st_uid = FUNC_3(VAR_9->so_cred);
  VAR_14->st_gid = FUNC_2(VAR_9->so_cred);
 } else {
  VAR_13->st_mode = VAR_2;
  if ((VAR_9->so_state & VAR_0) == 0 ||
      VAR_9->so_rcv.sb_cc != 0)
   VAR_13->st_mode |= VAR_5 | VAR_3 | VAR_4;
  if ((VAR_9->so_state & VAR_1) == 0)
   VAR_13->st_mode |= VAR_8 | VAR_6 | VAR_7;
  VAR_13->st_size = VAR_9->so_rcv.sb_cc - VAR_9->so_rcv.sb_ctl;
  VAR_13->st_uid = FUNC_3(VAR_9->so_cred);
  VAR_13->st_gid = FUNC_2(VAR_9->so_cred);
 }

 VAR_12 = (*VAR_9->so_proto->pr_usrreqs->pru_sense)(VAR_9, VAR_10, VAR_11);
 FUNC_6(VAR_9, 1);
 return (VAR_12);
}
