
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct proc {int dummy; } ;
typedef TYPE_3__* socket_t ;
typedef scalar_t__ errno_t ;
struct TYPE_10__ {int sb_flags; } ;
struct TYPE_9__ {int sb_flags; } ;
struct TYPE_11__ {TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (struct proc*,TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (struct proc*,TYPE_3__*,int,int ) ;

errno_t
FUNC_4(struct proc *VAR_6, socket_t VAR_7, int VAR_8)
{
 errno_t VAR_9;

 if (VAR_8 != VAR_4 &&
     VAR_8 != VAR_3)
  return (VAR_0);

 FUNC_0(VAR_7, 1);







 if (VAR_8 == VAR_4 &&
     (VAR_7->so_rcv.sb_flags & VAR_7->so_snd.sb_flags & VAR_2) != VAR_2) {
  FUNC_1(VAR_7, 1);
  return (VAR_1);
 }
 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_5);
 if (VAR_9 == 0)
  VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8);
 FUNC_1(VAR_7, 1);
 return (VAR_9);
}
