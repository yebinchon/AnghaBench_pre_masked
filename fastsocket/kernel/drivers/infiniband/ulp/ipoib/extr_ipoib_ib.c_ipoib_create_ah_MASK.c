
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_ah {struct ib_ah* ah; int ref; scalar_t__ last_send; struct net_device* dev; } ;
struct ib_pd {int dummy; } ;
struct ib_ah_attr {int dummy; } ;
struct ib_ah {int dummy; } ;


 int VAR_0 ;
 struct ipoib_ah* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ib_ah*) ;
 struct ib_ah* FUNC_2 (struct ib_pd*,struct ib_ah_attr*) ;
 int FUNC_3 (int ,char*,struct ib_ah*) ;
 int FUNC_4 (struct ipoib_ah*) ;
 struct ipoib_ah* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;

struct ipoib_ah *FUNC_8(struct net_device *VAR_2,
     struct ib_pd *VAR_3, struct ib_ah_attr *VAR_4)
{
 struct ipoib_ah *VAR_5;
 struct ib_ah *VAR_6;

 VAR_5 = FUNC_5(sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->dev = VAR_2;
 VAR_5->last_send = 0;
 FUNC_6(&VAR_5->ref);

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_1(VAR_6)) {
  FUNC_4(VAR_5);
  VAR_5 = (struct ipoib_ah *)VAR_6;
 } else {
  VAR_5->ah = VAR_6;
  FUNC_3(FUNC_7(VAR_2), "Created ah %p\n", VAR_5->ah);
 }

 return VAR_5;
}
