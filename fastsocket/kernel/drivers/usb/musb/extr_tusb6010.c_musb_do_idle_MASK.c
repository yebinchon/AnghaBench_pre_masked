
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct musb {int port1_status; int lock; int gadget_driver; int is_active; int idle_timeout; int a_wait_bcon; TYPE_1__* xceiv; } ;
struct TYPE_2__ {int state; } ;


 int FUNC_0 (int,char*,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct musb*) ;
 scalar_t__ FUNC_2 (struct musb*) ;
 scalar_t__ FUNC_3 (struct musb*) ;
 int VAR_4 ;
 int FUNC_4 (struct musb*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct musb*,int) ;
 int FUNC_9 (struct musb*,int ) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_5)
{
 struct musb *VAR_6 = (void *)VAR_5;
 unsigned long VAR_7;

 FUNC_5(&VAR_6->lock, VAR_7);

 switch (VAR_6->xceiv->state) {
 case 128:
  if ((VAR_6->a_wait_bcon != 0)
   && (VAR_6->idle_timeout == 0
    || FUNC_7(VAR_4, VAR_6->idle_timeout))) {
   FUNC_0(4, "Nothing connected %s, turning off VBUS\n",
     FUNC_4(VAR_6));
  }

 case 129:
  FUNC_9(VAR_6, 0);
 default:
  break;
 }

 if (!VAR_6->is_active) {
  u32 VAR_8;


  if (FUNC_1(VAR_6) && (VAR_6->port1_status >> 16))
   goto done;
  VAR_8 = VAR_1 | VAR_0;

  FUNC_8(VAR_6, VAR_8);
 }
done:
 FUNC_6(&VAR_6->lock, VAR_7);
}
