
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct il_priv*,int ,int ,int ,int) ;
 int FUNC_2 (struct il_priv*,int ,int ) ;

int
FUNC_3(struct il_priv *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_3, VAR_0, 0);
 VAR_4 = FUNC_1(VAR_3, VAR_1,
      VAR_2,
      VAR_2,
      1000);
 if (VAR_4 < 0)
  FUNC_0("Can't stop Rx DMA.\n");

 return 0;
}
