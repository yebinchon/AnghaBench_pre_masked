
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_transceiver {int dev; } ;


 int FUNC_0 (int ) ;
 struct otg_transceiver* VAR_0 ;

struct otg_transceiver *FUNC_1(void)
{
 if (VAR_0)
  FUNC_0(VAR_0->dev);
 return VAR_0;
}
