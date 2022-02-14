
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i801_priv {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct i801_priv*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct i801_priv *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 do {
  FUNC_3(1);
  VAR_4 = FUNC_2(FUNC_0(VAR_2));
 } while ((!(VAR_4 & VAR_1))
   && (VAR_3++ < VAR_0));

 if (VAR_3 > VAR_0)
  FUNC_1(&VAR_2->pci_dev->dev, "PEC Timeout!\n");

 FUNC_4(VAR_4, FUNC_0(VAR_2));
}
