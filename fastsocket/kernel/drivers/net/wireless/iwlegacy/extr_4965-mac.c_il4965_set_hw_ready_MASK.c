
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int hw_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct il_priv*,int ,int ,int ,int) ;
 int FUNC_2 (struct il_priv*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct il_priv *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2, VAR_0,
     VAR_1);


 VAR_3 = FUNC_1(VAR_2, VAR_0,
      VAR_1,
      VAR_1,
      100);
 if (VAR_3 >= 0)
  VAR_2->hw_ready = 1;

 FUNC_0("hardware %s ready\n", (VAR_2->hw_ready) ? "" : "not");
}
