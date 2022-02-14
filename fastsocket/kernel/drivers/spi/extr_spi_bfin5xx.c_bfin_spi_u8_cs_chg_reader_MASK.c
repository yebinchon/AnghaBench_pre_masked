
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct driver_data {scalar_t__ rx; scalar_t__ rx_end; struct chip_data* cur_chip; } ;
struct chip_data {int idle_tx_val; } ;


 int VAR_0 ;
 int FUNC_0 (struct driver_data*,struct chip_data*) ;
 int FUNC_1 (struct driver_data*,struct chip_data*) ;
 int FUNC_2 (struct driver_data*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct driver_data*) ;
 int FUNC_5 (struct driver_data*) ;
 int FUNC_6 (struct driver_data*,int ) ;

__attribute__((used)) static void FUNC_7(struct driver_data *VAR_1)
{
 struct chip_data *VAR_2 = VAR_1->cur_chip;
 u16 VAR_3 = VAR_2->idle_tx_val;


 FUNC_2(VAR_1);

 while (VAR_1->rx < VAR_1->rx_end) {
  FUNC_0(VAR_1, VAR_2);
  FUNC_6(VAR_1, VAR_3);
  while (!(FUNC_5(VAR_1) & VAR_0))
   FUNC_3();
  *(u8 *) (VAR_1->rx++) = FUNC_4(VAR_1);
  FUNC_1(VAR_1, VAR_2);
 }
}
