
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_info {struct sercos3_priv* priv; } ;
struct sercos3_priv {int ier0_cache_lock; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct uio_info*,struct sercos3_priv*) ;
 int FUNC_1 (struct uio_info*,struct sercos3_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct uio_info *VAR_0, s32 VAR_1)
{
 struct sercos3_priv *VAR_2 = VAR_0->priv;

 FUNC_2(&VAR_2->ier0_cache_lock);
 if (VAR_1)
  FUNC_1(VAR_0, VAR_2);
 else
  FUNC_0(VAR_0, VAR_2);
 FUNC_3(&VAR_2->ier0_cache_lock);

 return 0;
}
