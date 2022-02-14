
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int irqreturn_t ;
typedef int hrz_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_13, void *VAR_14)
{
  hrz_dev *VAR_15 = VAR_14;
  u32 VAR_16;
  unsigned int VAR_17;

  FUNC_0 (VAR_1, "interrupt_handler: %p", VAR_14);


  VAR_17 = 0;
  while ((VAR_16 = FUNC_1 (VAR_15, VAR_7)
   & VAR_6)) {
    if (VAR_16 & VAR_10) {
      ++VAR_17;
      FUNC_0 (VAR_2|VAR_0|VAR_3, "rx_bus_master_complete asserted");
      FUNC_2 (VAR_15);
    }
    if (VAR_16 & VAR_12) {
      ++VAR_17;
      FUNC_0 (VAR_2|VAR_0|VAR_4, "tx_bus_master_complete asserted");
      FUNC_4 (VAR_15);
    }
    if (VAR_16 & VAR_11) {
      ++VAR_17;
      FUNC_0 (VAR_2|VAR_3, "rx_data_av asserted");
      FUNC_3 (VAR_15);
    }
  }
  if (VAR_17) {
    FUNC_0 (VAR_2, "work done: %u", VAR_17);
  } else {
    FUNC_0 (VAR_2|VAR_5, "spurious interrupt source: %#x", VAR_16);
  }

  FUNC_0 (VAR_2|VAR_1, "interrupt_handler done: %p", VAR_14);
  if (VAR_17)
 return VAR_8;
  return VAR_9;
}
