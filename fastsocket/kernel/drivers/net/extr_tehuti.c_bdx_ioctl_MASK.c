
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 VAR_0;
 if (VAR_5 >= VAR_2 && VAR_5 <= (VAR_2 + 15))
  FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_5));
 else
  FUNC_0(-VAR_1);
}
