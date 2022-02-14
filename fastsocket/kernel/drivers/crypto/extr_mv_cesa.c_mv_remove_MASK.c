
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct crypto_priv {int reg; int sram; int sram_size; int irq; int queue_th; } ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct crypto_priv*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct crypto_priv*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct crypto_priv* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct crypto_priv *VAR_4 = FUNC_6(VAR_3);

 FUNC_0(&VAR_2);
 FUNC_0(&VAR_1);
 FUNC_4(VAR_4->queue_th);
 FUNC_1(VAR_4->irq, VAR_4);
 FUNC_5(VAR_4->sram, 0, VAR_4->sram_size);
 FUNC_2(VAR_4->sram);
 FUNC_2(VAR_4->reg);
 FUNC_3(VAR_4);
 VAR_0 = ((void*)0);
 return 0;
}
