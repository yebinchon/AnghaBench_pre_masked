
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bdx_priv {TYPE_1__* ndev; } ;
struct TYPE_2__ {int* dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct bdx_priv*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct bdx_priv *VAR_4)
{
 u16 VAR_5[3], VAR_6;
 VAR_0;

 VAR_5[2] = FUNC_0(VAR_4, VAR_1);
 VAR_5[2] = FUNC_0(VAR_4, VAR_1);
 VAR_5[1] = FUNC_0(VAR_4, VAR_2);
 VAR_5[1] = FUNC_0(VAR_4, VAR_2);
 VAR_5[0] = FUNC_0(VAR_4, VAR_3);
 VAR_5[0] = FUNC_0(VAR_4, VAR_3);
 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  VAR_4->ndev->dev_addr[VAR_6 * 2 + 1] = VAR_5[VAR_6];
  VAR_4->ndev->dev_addr[VAR_6 * 2] = VAR_5[VAR_6] >> 8;
 }
 FUNC_1(0);
}
