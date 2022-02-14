
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct il_priv {int reg_lock; } ;


 int FUNC_0 (struct il_priv*) ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(struct il_priv *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;

 FUNC_4(&VAR_0->reg_lock, VAR_3);
 if (FUNC_3(FUNC_0(VAR_0))) {
  FUNC_2(VAR_0, VAR_1, VAR_2);
  FUNC_1(VAR_0);
 }
 FUNC_5(&VAR_0->reg_lock, VAR_3);
}
