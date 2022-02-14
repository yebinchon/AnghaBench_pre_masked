
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_5__ {int lock; scalar_t__ tx_enabled; int device_name; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_1__*,struct tty_struct*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(MGSLPC_INFO * VAR_2, int VAR_3, struct tty_struct *VAR_4)
{
  unsigned long VAR_5;

 if (VAR_1 >= VAR_0)
  FUNC_0("set_txenable(%s,%d)\n", VAR_2->device_name, VAR_3);

 FUNC_1(&VAR_2->lock,VAR_5);
 if (VAR_3) {
  if (!VAR_2->tx_enabled)
   FUNC_3(VAR_2, VAR_4);
 } else {
  if (VAR_2->tx_enabled)
   FUNC_4(VAR_2);
 }
 FUNC_2(&VAR_2->lock,VAR_5);
 return 0;
}
