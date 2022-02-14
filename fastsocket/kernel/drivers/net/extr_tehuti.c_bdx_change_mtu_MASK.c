
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int,int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, int VAR_5)
{
 VAR_2;

 if (VAR_5 == VAR_4->mtu)
  FUNC_1(0);


 if (VAR_5 < VAR_3) {
  FUNC_0("%s: %s mtu %d is less then minimal %d\n",
      VAR_0, VAR_4->name, VAR_5, VAR_3);
  FUNC_1(-VAR_1);
 }

 VAR_4->mtu = VAR_5;
 if (FUNC_4(VAR_4)) {
  FUNC_2(VAR_4);
  FUNC_3(VAR_4);
 }
 FUNC_1(0);
}
