
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int lock; } ;
struct mii_bus {struct tg3* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct tg3*,int,int*) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_1, int VAR_2, int VAR_3)
{
 struct tg3 *VAR_4 = VAR_1->priv;
 u32 VAR_5;

 FUNC_0(&VAR_4->lock);

 if (FUNC_2(VAR_4, VAR_3, &VAR_5))
  VAR_5 = -VAR_0;

 FUNC_1(&VAR_4->lock);

 return VAR_5;
}
