
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct ax_device {int mii_lock; int mii; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (struct ifreq*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct ax_device* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct ax_device *VAR_4 = FUNC_5(VAR_1);
 unsigned long VAR_5;
 int VAR_6;

 if (!FUNC_2(VAR_1))
  return -VAR_0;

 FUNC_3(&VAR_4->mii_lock, VAR_5);
 VAR_6 = FUNC_0(&VAR_4->mii, FUNC_1(VAR_2), VAR_3, ((void*)0));
 FUNC_4(&VAR_4->mii_lock, VAR_5);

 return VAR_6;
}
