
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct driver_data {scalar_t__ tx; scalar_t__ tx_end; } ;


 int VAR_0 ;
 int FUNC_0 (struct driver_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct driver_data*) ;
 int FUNC_3 (struct driver_data*,int ) ;

__attribute__((used)) static void FUNC_4(struct driver_data *VAR_1)
{

 FUNC_0(VAR_1);

 while (VAR_1->tx < VAR_1->tx_end) {
  FUNC_3(VAR_1, (*(u8 *) (VAR_1->tx++)));


  while (!(FUNC_2(VAR_1) & VAR_0))
   FUNC_1();

  FUNC_0(VAR_1);
 }
}
