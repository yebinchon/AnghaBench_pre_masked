
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int ctx; int (* function ) (int ) ;} ;
struct TYPE_12__ {int arg; int h; int msecs; } ;
struct TYPE_10__ {TYPE_7__* netif; int p; } ;
struct TYPE_14__ {TYPE_5__ cb; TYPE_4__ tmo; TYPE_3__* netifapimsg; TYPE_2__ inp; TYPE_1__* apimsg; } ;
struct tcpip_msg {int type; TYPE_6__ msg; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_11__ {int msg; int (* function ) (int *) ;} ;
struct TYPE_9__ {int msg; int (* function ) (int *) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int FUNC_5 () ;
 int FUNC_6 (int ,TYPE_7__*) ;
 int FUNC_7 (int ,TYPE_7__*) ;
 int VAR_5 ;
 int FUNC_8 (int ,struct tcpip_msg*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int *,void**) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_17(void *VAR_7)
{
  struct tcpip_msg *VAR_8;
  FUNC_4(VAR_7);

  if (&FUNC_16 != ((void*)0)) {
    FUNC_16(VAR_6);
  }

  FUNC_0();
  while (1) {
    FUNC_5();
    FUNC_3();

    FUNC_14(&VAR_5, (void **)&VAR_8);
    FUNC_0();
    switch (VAR_8->type) {
    case 131:
      FUNC_2(VAR_4, ("tcpip_thread: PACKET %p\n", (void *)VAR_8));





      {
        FUNC_7(VAR_8->msg.inp.p, VAR_8->msg.inp.netif);
      }
      FUNC_8(VAR_1, VAR_8);
      break;
    case 133:
      FUNC_2(VAR_4, ("tcpip_thread: CALLBACK %p\n", (void *)VAR_8));
      VAR_8->msg.cb.function(VAR_8->msg.cb.ctx);
      FUNC_8(VAR_0, VAR_8);
      break;

    case 132:
      FUNC_2(VAR_4, ("tcpip_thread: CALLBACK_STATIC %p\n", (void *)VAR_8));
      VAR_8->msg.cb.function(VAR_8->msg.cb.ctx);
      break;

    default:
      FUNC_2(VAR_4, ("tcpip_thread: invalid message: %d\n", VAR_8->type));
      FUNC_1("tcpip_thread: invalid message", 0);
      break;
    }
  }
}
