
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {scalar_t__ send_wc; int dev; int send_cq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ipoib_dev_priv *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1->send_cq, VAR_0, VAR_1->send_wc);
 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
  FUNC_1(VAR_1->dev, VAR_1->send_wc + VAR_3);

 return VAR_2 == VAR_0;
}
