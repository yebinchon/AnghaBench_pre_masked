
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; scalar_t__ ml_priv; } ;
struct lcs_card {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (struct lcs_card*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_3)
{
 struct lcs_card *VAR_4;
 int VAR_5;

 FUNC_0(2, VAR_2, "opendev");
 VAR_4 = (struct lcs_card *) VAR_3->ml_priv;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5) {
  FUNC_4("Error in opening device!\n");

 } else {
  VAR_3->flags |= VAR_1;
  FUNC_2(VAR_3);
  FUNC_3(VAR_3);
  VAR_4->state = VAR_0;
 }
 return VAR_5;
}
