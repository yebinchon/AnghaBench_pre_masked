
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bdx_priv {TYPE_1__* ndev; int rxf_fifo0; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bdx_priv*) ;
 int FUNC_3 (struct bdx_priv*,int *) ;

__attribute__((used)) static void FUNC_4(struct bdx_priv *VAR_4, u32 VAR_5)
{
 if (VAR_5 & VAR_3) {
  FUNC_3(VAR_4, &VAR_4->rxf_fifo0);
  FUNC_0("RX_FREE_0\n");
 }

 if (VAR_5 & VAR_0)
  FUNC_2(VAR_4);

 if (VAR_5 & VAR_1)
  FUNC_1("%s: PCI-E Link Fault\n", VAR_4->ndev->name);

 if (VAR_5 & VAR_2)
  FUNC_1("%s: PCI-E Time Out\n", VAR_4->ndev->name);

}
