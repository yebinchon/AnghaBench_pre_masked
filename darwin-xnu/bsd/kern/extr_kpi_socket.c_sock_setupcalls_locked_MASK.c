
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* socket_t ;
typedef int * sock_upcall ;
struct TYPE_6__ {int sb_flags; int * sb_upcallarg; int * sb_upcall; } ;
struct TYPE_5__ {int sb_flags; int * sb_upcallarg; int * sb_upcall; } ;
struct TYPE_7__ {TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(socket_t VAR_2, sock_upcall VAR_3, void *VAR_4,
    sock_upcall VAR_5, void *VAR_6, int VAR_7)
{
 if (VAR_3 != ((void*)0)) {
  VAR_2->so_rcv.sb_flags |= VAR_0;
  if (VAR_7)
   VAR_2->so_rcv.sb_flags |= VAR_1;
  VAR_2->so_rcv.sb_upcall = VAR_3;
  VAR_2->so_rcv.sb_upcallarg = VAR_4;
 } else {
  VAR_2->so_rcv.sb_flags &= ~(VAR_0 | VAR_1);
  VAR_2->so_rcv.sb_upcall = ((void*)0);
  VAR_2->so_rcv.sb_upcallarg = ((void*)0);
 }

 if (VAR_5 != ((void*)0)) {
  VAR_2->so_snd.sb_flags |= VAR_0;
  if (VAR_7)
   VAR_2->so_snd.sb_flags |= VAR_1;
  VAR_2->so_snd.sb_upcall = VAR_5;
  VAR_2->so_snd.sb_upcallarg = VAR_6;
 } else {
  VAR_2->so_snd.sb_flags &= ~(VAR_0 | VAR_1);
  VAR_2->so_snd.sb_upcall = ((void*)0);
  VAR_2->so_snd.sb_upcallarg = ((void*)0);
 }
}
