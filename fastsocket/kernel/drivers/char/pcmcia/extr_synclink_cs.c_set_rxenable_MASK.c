
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; scalar_t__ rx_enabled; int device_name; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(MGSLPC_INFO * VAR_2, int VAR_3)
{
  unsigned long VAR_4;

 if (VAR_1 >= VAR_0)
  FUNC_0("set_rxenable(%s,%d)\n", VAR_2->device_name, VAR_3);

 FUNC_3(&VAR_2->lock,VAR_4);
 if (VAR_3) {
  if (!VAR_2->rx_enabled)
   FUNC_1(VAR_2);
 } else {
  if (VAR_2->rx_enabled)
   FUNC_2(VAR_2);
 }
 FUNC_4(&VAR_2->lock,VAR_4);
 return 0;
}
