
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct TYPE_4__ {int lock; int tx_enabled; int device_name; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*,struct tty_struct*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_2)
{
 MGSLPC_INFO *VAR_3 = (MGSLPC_INFO *)VAR_2->driver_data;
 unsigned long VAR_4;

 if (FUNC_0(VAR_3, VAR_2->name, "tx_release"))
  return;
 if (VAR_1 >= VAR_0)
  FUNC_1("tx_release(%s)\n",VAR_3->device_name);

 FUNC_2(&VAR_3->lock,VAR_4);
 if (!VAR_3->tx_enabled)
   FUNC_4(VAR_3, VAR_2);
 FUNC_3(&VAR_3->lock,VAR_4);
}
