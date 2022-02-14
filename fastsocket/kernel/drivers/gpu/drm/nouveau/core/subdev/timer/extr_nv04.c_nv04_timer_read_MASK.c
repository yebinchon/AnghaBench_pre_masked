
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct nv04_timer_priv {int dummy; } ;
struct nouveau_timer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nv04_timer_priv*,int ) ;

__attribute__((used)) static u64
FUNC_1(struct nouveau_timer *VAR_2)
{
 struct nv04_timer_priv *VAR_3 = (void *)VAR_2;
 u32 VAR_4, VAR_5;

 do {
  VAR_4 = FUNC_0(VAR_3, VAR_1);
  VAR_5 = FUNC_0(VAR_3, VAR_0);
 } while (VAR_4 != FUNC_0(VAR_3, VAR_1));

 return ((u64)VAR_4 << 32 | VAR_5);
}
