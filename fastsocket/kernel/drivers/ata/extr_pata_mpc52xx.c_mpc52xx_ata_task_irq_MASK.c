
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc52xx_ata_priv {int waiting_for_dma; int dmatsk; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static irqreturn_t
FUNC_2(int VAR_2, void *VAR_3)
{
 struct mpc52xx_ata_priv *VAR_4 = VAR_3;
 while (FUNC_0(VAR_4->dmatsk))
  FUNC_1(VAR_4->dmatsk, ((void*)0), ((void*)0));

 VAR_4->waiting_for_dma |= VAR_0;

 return VAR_1;
}
