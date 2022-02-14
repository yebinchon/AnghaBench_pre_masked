
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int *) ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct mlx4_en_priv*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_2, struct net_device *VAR_3,
    int *VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_4(VAR_3);
 int VAR_6;

 if (FUNC_7(VAR_2)) {
  *VAR_4 = FUNC_9(VAR_2) + FUNC_10(VAR_2);
  VAR_6 = VAR_0 + FUNC_8(VAR_2)->nr_frags * VAR_1 +
   FUNC_0(*VAR_4 + 4, VAR_1);
  if (FUNC_11(*VAR_4 != FUNC_6(VAR_2))) {


   if (*VAR_4 < FUNC_6(VAR_2))
    VAR_6 += VAR_1;
   else {
    if (FUNC_5(VAR_5))
     FUNC_1(VAR_5, "Non-linear headers\n");
    return 0;
   }
  }
 } else {
  *VAR_4 = 0;
  if (!FUNC_3(VAR_2, ((void*)0)))
   VAR_6 = VAR_0 + (FUNC_8(VAR_2)->nr_frags + 1) * VAR_1;
  else
   VAR_6 = FUNC_2(VAR_2);
 }

 return VAR_6;
}
