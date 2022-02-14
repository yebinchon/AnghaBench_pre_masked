
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* socket_t ;
typedef int errno_t ;
struct TYPE_8__ {int sb_flags; } ;
struct TYPE_7__ {int sb_flags; } ;
struct TYPE_9__ {TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;

errno_t
FUNC_2(socket_t VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, 1);

 if (VAR_2) {
  VAR_1->so_rcv.sb_flags |= VAR_0;
  VAR_1->so_snd.sb_flags |= VAR_0;
 } else {
  VAR_1->so_rcv.sb_flags &= ~VAR_0;
  VAR_1->so_snd.sb_flags &= ~VAR_0;
 }

 FUNC_1(VAR_1, 1);

 return (0);
}
