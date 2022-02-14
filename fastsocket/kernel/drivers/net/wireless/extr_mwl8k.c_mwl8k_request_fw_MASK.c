
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl8k_priv {TYPE_1__* pdev; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct firmware const**) ;
 int FUNC_1 (struct firmware const**,char const*,int *) ;
 int FUNC_2 (int ,int,char const*,int *,int ,struct mwl8k_priv*,int ) ;

__attribute__((used)) static int FUNC_3(struct mwl8k_priv *VAR_3,
       const char *VAR_4, const struct firmware **VAR_5,
       bool VAR_6)
{

 if (*VAR_5 != ((void*)0))
  FUNC_0(VAR_5);

 if (VAR_6)
  return FUNC_2(VAR_1, 1, VAR_4,
            &VAR_3->pdev->dev, VAR_0,
            VAR_3, VAR_2);
 else
  return FUNC_1(VAR_5, VAR_4, &VAR_3->pdev->dev);
}
