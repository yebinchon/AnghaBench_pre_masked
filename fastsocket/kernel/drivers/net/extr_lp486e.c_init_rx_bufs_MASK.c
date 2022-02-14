
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct i596_rfd {int size; TYPE_2__* rbd; void* pa_next; scalar_t__ cmd; scalar_t__ count; void* pa_rbd; scalar_t__ stat; } ;
struct i596_rbd {int dummy; } ;
struct TYPE_3__ {void* pa_rfd; } ;
struct i596_private {TYPE_2__* rbd_tail; TYPE_1__ scb; struct i596_rfd* rx_tail; } ;
struct TYPE_4__ {struct TYPE_4__* next; void* size; struct TYPE_4__* prev; int skb; scalar_t__ count; scalar_t__ pad; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 struct i596_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*) ;
 TYPE_2__* VAR_6 ;
 void* FUNC_4 (struct i596_rfd*) ;

__attribute__((used)) static inline int
FUNC_5(struct net_device *VAR_7, int VAR_8) {
 struct i596_private *VAR_9;
 struct i596_rfd *VAR_10;
 int VAR_11;


 VAR_9 = FUNC_2(VAR_7);
 VAR_9->scb.pa_rfd = VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_10 = FUNC_1(sizeof(struct i596_rfd), VAR_1);
  if (VAR_10 == ((void*)0))
   break;

  VAR_10->stat = 0;
  VAR_10->pa_rbd = VAR_2;
  VAR_10->count = 0;
  VAR_10->size = 1532;
  if (VAR_11 == 0) {
   VAR_10->cmd = VAR_0;
   VAR_9->rx_tail = VAR_10;
  } else {
   VAR_10->cmd = 0;
  }
  VAR_10->pa_next = VAR_9->scb.pa_rfd;
  VAR_9->scb.pa_rfd = FUNC_4(VAR_10);
  VAR_9->rx_tail->pa_next = VAR_9->scb.pa_rfd;
 }
 return (VAR_11);
}
