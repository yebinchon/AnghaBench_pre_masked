
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct il_priv*,int ,int ,int ,int) ;
 int FUNC_3 (struct il_priv*,int ,int ) ;

int
FUNC_4(struct il_priv *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_2, FUNC_0(0), 0);
 VAR_3 = FUNC_2(VAR_2, VAR_1,
      VAR_0,
      VAR_0,
      1000);
 if (VAR_3 < 0)
  FUNC_1("Can't stop Rx DMA.\n");

 return 0;
}
