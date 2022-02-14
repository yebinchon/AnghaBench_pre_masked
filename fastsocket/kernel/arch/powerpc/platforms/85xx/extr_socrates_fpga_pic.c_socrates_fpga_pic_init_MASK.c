
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (struct device_node*,int ,int ,int *,int ) ;
 scalar_t__ FUNC_2 (struct device_node*,int) ;
 int FUNC_3 (struct device_node*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

void FUNC_11(struct device_node *VAR_10)
{
 unsigned long VAR_11;
 int VAR_12;


 VAR_8 = FUNC_1(VAR_10, VAR_0,
   VAR_3, &VAR_6,
   VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_4("FPGA PIC: Unable to allocate host\n");
  return;
 }

 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
  VAR_4[VAR_12] = FUNC_2(VAR_10, VAR_12);
  if (VAR_4[VAR_12] == VAR_1) {
   FUNC_6("FPGA PIC: can't get irq%d.\n", VAR_12);
   continue;
  }
  FUNC_7(VAR_4[VAR_12],
    VAR_5);
 }

 VAR_7 = FUNC_3(VAR_10, 0);

 FUNC_9(&VAR_9, VAR_11);
 FUNC_8(FUNC_0(0),
   VAR_2 << 16);
 FUNC_8(FUNC_0(1),
   VAR_2 << 16);
 FUNC_8(FUNC_0(2),
   VAR_2 << 16);
 FUNC_10(&VAR_9, VAR_11);

 FUNC_5("FPGA PIC: Setting up Socrates FPGA PIC\n");
}
