
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {scalar_t__ ifr_data; } ;
struct channel_data {int cosa; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct channel_data*,int,unsigned long) ;
 struct channel_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 int VAR_4;
 struct channel_data *VAR_5 = FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_5->cosa, VAR_5, VAR_3,
          (unsigned long)VAR_2->ifr_data);
 if (VAR_4 != -VAR_0)
  return VAR_4;
 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
