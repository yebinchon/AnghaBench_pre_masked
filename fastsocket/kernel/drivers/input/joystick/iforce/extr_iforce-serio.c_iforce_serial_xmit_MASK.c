
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t head; size_t tail; unsigned char* buf; } ;
struct iforce {int xmit_lock; int xmit_flags; int serio; TYPE_1__ xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned char) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

void FUNC_8(struct iforce *VAR_2)
{
 unsigned char VAR_3;
 int VAR_4;
 unsigned long VAR_5;

 if (FUNC_7(VAR_1, VAR_2->xmit_flags)) {
  FUNC_3(VAR_0, VAR_2->xmit_flags);
  return;
 }

 FUNC_4(&VAR_2->xmit_lock, VAR_5);

again:
 if (VAR_2->xmit.head == VAR_2->xmit.tail) {
  FUNC_1(VAR_1, VAR_2->xmit_flags);
  FUNC_5(&VAR_2->xmit_lock, VAR_5);
  return;
 }

 VAR_3 = 0x2b;

 FUNC_2(VAR_2->serio, 0x2b);

 FUNC_2(VAR_2->serio, VAR_2->xmit.buf[VAR_2->xmit.tail]);
 VAR_3 ^= VAR_2->xmit.buf[VAR_2->xmit.tail];
 FUNC_0(VAR_2->xmit.tail, 1);

 for (VAR_4=VAR_2->xmit.buf[VAR_2->xmit.tail]; VAR_4 >= 0; --VAR_4) {
  FUNC_2(VAR_2->serio, VAR_2->xmit.buf[VAR_2->xmit.tail]);
  VAR_3 ^= VAR_2->xmit.buf[VAR_2->xmit.tail];
  FUNC_0(VAR_2->xmit.tail, 1);
 }

 FUNC_2(VAR_2->serio, VAR_3);

 if (FUNC_6(VAR_0, VAR_2->xmit_flags))
  goto again;

 FUNC_1(VAR_1, VAR_2->xmit_flags);

 FUNC_5(&VAR_2->xmit_lock, VAR_5);
}
