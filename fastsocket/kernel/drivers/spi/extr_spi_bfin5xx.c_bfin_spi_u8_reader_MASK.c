
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct driver_data {scalar_t__ rx; scalar_t__ rx_end; TYPE_1__* cur_chip; } ;
struct TYPE_2__ {int idle_tx_val; } ;


 int VAR_0 ;
 int FUNC_0 (struct driver_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct driver_data*) ;
 int FUNC_3 (struct driver_data*) ;
 int FUNC_4 (struct driver_data*,int ) ;

__attribute__((used)) static void FUNC_5(struct driver_data *VAR_1)
{
 u16 VAR_2 = VAR_1->cur_chip->idle_tx_val;


 FUNC_0(VAR_1);

 while (VAR_1->rx < VAR_1->rx_end) {
  FUNC_4(VAR_1, VAR_2);
  while (!(FUNC_3(VAR_1) & VAR_0))
   FUNC_1();
  *(u8 *) (VAR_1->rx++) = FUNC_2(VAR_1);
 }
}
