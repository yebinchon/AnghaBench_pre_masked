
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_priv {int dummy; } ;
struct stub_device {int priv_lock; int priv_free; int priv_tx; int priv_init; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct stub_priv* FUNC_2 (int *) ;

__attribute__((used)) static struct stub_priv *FUNC_3(struct stub_device *VAR_0)
{
 unsigned long VAR_1;
 struct stub_priv *VAR_2;

 FUNC_0(&VAR_0->priv_lock, VAR_1);

 VAR_2 = FUNC_2(&VAR_0->priv_init);
 if (VAR_2) {
  FUNC_1(&VAR_0->priv_lock, VAR_1);
  return VAR_2;
 }

 VAR_2 = FUNC_2(&VAR_0->priv_tx);
 if (VAR_2) {
  FUNC_1(&VAR_0->priv_lock, VAR_1);
  return VAR_2;
 }

 VAR_2 = FUNC_2(&VAR_0->priv_free);
 if (VAR_2) {
  FUNC_1(&VAR_0->priv_lock, VAR_1);
  return VAR_2;
 }

 FUNC_1(&VAR_0->priv_lock, VAR_1);
 return ((void*)0);
}
