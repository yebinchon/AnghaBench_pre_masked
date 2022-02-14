
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nozomi {int card_type; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(struct nozomi *VAR_2)
{
 int VAR_3;
 u32 VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
  VAR_4 += FUNC_1(VAR_2->pdev, VAR_3);


 VAR_2->card_type = VAR_4 == 2048 ? VAR_0 : VAR_1;

 FUNC_0(&VAR_2->pdev->dev, "Card type is: %d\n", VAR_2->card_type);
}
