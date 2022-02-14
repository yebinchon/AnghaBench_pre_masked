
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int poll_timer; } ;
struct ib_cq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct ipoib_dev_priv* FUNC_1 (void*) ;

void FUNC_2(struct ib_cq *VAR_1, void *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->poll_timer, VAR_0);
}
