
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bdx_priv {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bdx_priv*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bdx_priv*) ;
 int FUNC_4 (struct bdx_priv*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 struct bdx_priv* FUNC_7 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_10, void *VAR_11)
{
 struct net_device *VAR_12 = VAR_11;
 struct bdx_priv *VAR_13 = FUNC_7(VAR_12);
 u32 VAR_14;

 VAR_0;
 VAR_14 = (FUNC_0(VAR_13, VAR_7) & VAR_4);
 if (FUNC_8(!VAR_14)) {
  FUNC_3(VAR_13);
  return VAR_2;
 }

 if (VAR_14 & VAR_3)
  FUNC_4(VAR_13, VAR_14);

 if (VAR_14 & (VAR_5 | VAR_6)) {
  if (FUNC_5(FUNC_6(&VAR_13->napi))) {
   FUNC_2(&VAR_13->napi);
   FUNC_1(VAR_1);
  } else {
   FUNC_0(VAR_13, VAR_9);
   FUNC_0(VAR_13, VAR_8);
  }
 }

 FUNC_3(VAR_13);
 FUNC_1(VAR_1);
}
