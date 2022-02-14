
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_9__ {int length; } ;
struct TYPE_11__ {int arg; TYPE_1__ parm; int driver; int command; } ;
typedef TYPE_3__ isdn_ctrl ;
struct TYPE_10__ {int (* statcallb ) (TYPE_3__*) ;} ;
struct TYPE_12__ {int* xlen; int lock; scalar_t__* xmit_lock; struct sk_buff** xskb; TYPE_2__ interface; int myid; scalar_t__* sndcount; int * spqueue; scalar_t__ secondhalf; } ;
typedef TYPE_4__ icn_card ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_4 (int *) ;
 scalar_t__* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int,int *) ;

__attribute__((used)) static void
FUNC_11(int VAR_7, icn_card * VAR_8)
{
 int VAR_9 = VAR_7 + ((VAR_8->secondhalf) ? 2 : 0);
 int VAR_10;
 unsigned long VAR_11;
 struct sk_buff *VAR_12;
 isdn_ctrl VAR_13;

 if (!(VAR_8->sndcount[VAR_7] || VAR_8->xskb[VAR_7] ||
       !FUNC_6(&VAR_8->spqueue[VAR_7])))
  return;
 if (FUNC_2(VAR_8, VAR_9)) {
  while (VAR_2 &&
         (VAR_8->sndcount[VAR_7] ||
   !FUNC_6(&VAR_8->spqueue[VAR_7]) ||
   VAR_8->xskb[VAR_7])) {
   FUNC_7(&VAR_8->lock, VAR_11);
   if (VAR_8->xmit_lock[VAR_7]) {
    FUNC_8(&VAR_8->lock, VAR_11);
    break;
   }
   VAR_8->xmit_lock[VAR_7]++;
   FUNC_8(&VAR_8->lock, VAR_11);
   VAR_12 = VAR_8->xskb[VAR_7];
   if (!VAR_12) {
    VAR_12 = FUNC_4(&VAR_8->spqueue[VAR_7]);
    if (VAR_12) {



     if (*(FUNC_5(VAR_12,1)))
      VAR_8->xlen[VAR_7] = VAR_12->len;
     else
      VAR_8->xlen[VAR_7] = 0;
    }
   }
   if (!VAR_12)
    break;
   if (VAR_12->len > VAR_0) {
    FUNC_10(0xff, &VAR_5);
    VAR_10 = VAR_0;
   } else {
    FUNC_10(0x0, &VAR_5);
    VAR_10 = VAR_12->len;
   }
   FUNC_10(VAR_10, &VAR_6);
   FUNC_3(&VAR_4, VAR_12->data, VAR_10);
   FUNC_5(VAR_12, VAR_10);
   VAR_3;
   FUNC_1(VAR_8, VAR_9 & 2);
   FUNC_7(&VAR_8->lock, VAR_11);
   VAR_8->sndcount[VAR_7] -= VAR_10;
   if (!VAR_12->len) {
    if (VAR_8->xskb[VAR_7])
     VAR_8->xskb[VAR_7] = ((void*)0);
    VAR_8->xmit_lock[VAR_7] = 0;
    FUNC_8(&VAR_8->lock, VAR_11);
    FUNC_0(VAR_12);
    if (VAR_8->xlen[VAR_7]) {
     VAR_13.command = VAR_1;
     VAR_13.driver = VAR_8->myid;
     VAR_13.arg = VAR_7;
     VAR_13.parm.length = VAR_8->xlen[VAR_7];
     VAR_8->interface.statcallb(&VAR_13);
    }
   } else {
    VAR_8->xskb[VAR_7] = VAR_12;
    VAR_8->xmit_lock[VAR_7] = 0;
    FUNC_8(&VAR_8->lock, VAR_11);
   }
   if (!FUNC_2(VAR_8, VAR_9))
    break;
  }
  FUNC_1(VAR_8, VAR_9 & 2);
 }
}
