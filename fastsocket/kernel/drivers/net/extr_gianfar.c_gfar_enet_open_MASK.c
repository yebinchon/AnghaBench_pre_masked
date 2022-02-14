
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct gfar_private {int wol_en; int napi; int rx_recycle; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct gfar_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_0)
{
 struct gfar_private *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 FUNC_5(&VAR_1->napi);

 FUNC_8(&VAR_1->rx_recycle);


 FUNC_3(VAR_0);

 FUNC_1(VAR_0);

 VAR_2 = FUNC_2(VAR_0);

 if(VAR_2) {
  FUNC_4(&VAR_1->napi);
  return VAR_2;
 }

 VAR_2 = FUNC_9(VAR_0);
 if (VAR_2) {
  FUNC_4(&VAR_1->napi);
  return VAR_2;
 }

 FUNC_7(VAR_0);

 FUNC_0(&VAR_0->dev, VAR_1->wol_en);

 return VAR_2;
}
