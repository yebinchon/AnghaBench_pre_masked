
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct migor_ts_priv {int work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct migor_ts_priv *VAR_4 = VAR_3;
 FUNC_0(VAR_2);
 FUNC_1(&VAR_4->work, VAR_0 / 20);

 return VAR_1;
}
