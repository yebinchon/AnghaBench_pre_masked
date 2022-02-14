
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int debug_flags; int async_busy; unsigned short async_channel; int hysdn_lock; int irq_queue; scalar_t__ async_len; int async_data; } ;
typedef TYPE_1__ hysdn_card ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,unsigned char*) ;
 scalar_t__ FUNC_6 (unsigned char*) ;

int
FUNC_7(hysdn_card *VAR_2, unsigned char *VAR_3, unsigned short VAR_4)
{
 int VAR_5 = 50;
 unsigned long VAR_6;

 if (VAR_2->debug_flags & VAR_1)
  FUNC_0(VAR_2, "async tx-cfg chan=%d len=%d", VAR_4, FUNC_6(VAR_3) + 1);

 while (VAR_2->async_busy) {

  if (VAR_2->debug_flags & VAR_1)
   FUNC_0(VAR_2, "async tx-cfg delayed");

  FUNC_1(20);
  if (!--VAR_5)
   return (-VAR_0);
 }

 FUNC_3(&VAR_2->hysdn_lock, VAR_6);
 FUNC_5(VAR_2->async_data, VAR_3);
 VAR_2->async_len = FUNC_6(VAR_3) + 1;
 VAR_2->async_channel = VAR_4;
 VAR_2->async_busy = 1;


 FUNC_2(&VAR_2->irq_queue);
 FUNC_4(&VAR_2->hysdn_lock, VAR_6);

 if (VAR_2->debug_flags & VAR_1)
  FUNC_0(VAR_2, "async tx-cfg data queued");

 VAR_5++;

 while (VAR_2->async_busy) {

  if (VAR_2->debug_flags & VAR_1)
   FUNC_0(VAR_2, "async tx-cfg waiting for tx-ready");

  FUNC_1(20);
  if (!--VAR_5)
   return (-VAR_0);
 }

 if (VAR_2->debug_flags & VAR_1)
  FUNC_0(VAR_2, "async tx-cfg data send");

 return (0);
}
