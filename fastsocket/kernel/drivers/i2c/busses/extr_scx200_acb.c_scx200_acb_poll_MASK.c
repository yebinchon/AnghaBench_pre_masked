
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int dev; } ;
struct scx200_acb_iface {size_t state; int needs_reset; int result; TYPE_1__ adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ) ;
 unsigned long VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct scx200_acb_iface*,int) ;
 int * VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct scx200_acb_iface *VAR_9)
{
 u8 VAR_10;
 unsigned long VAR_11;

 VAR_11 = VAR_6 + VAR_5;
 while (1) {
  VAR_10 = FUNC_3(VAR_0);


  FUNC_4(0, VAR_0);

  if ((VAR_10 & (VAR_3|VAR_1|VAR_2)) != 0) {
   FUNC_5(VAR_9, VAR_10);
   return;
  }
  if (FUNC_6(VAR_6, VAR_11))
   break;
  FUNC_1();
  FUNC_0();
 }

 FUNC_2(&VAR_9->adapter.dev, "timeout in state %s\n",
  VAR_7[VAR_9->state]);

 VAR_9->state = VAR_8;
 VAR_9->result = -VAR_4;
 VAR_9->needs_reset = 1;
}
