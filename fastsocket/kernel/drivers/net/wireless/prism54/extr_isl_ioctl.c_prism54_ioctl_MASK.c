
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct iwreq {TYPE_1__ u; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int *) ;

int
FUNC_2(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct iwreq *VAR_6 = (struct iwreq *) VAR_4;
 int VAR_7 = -1;
 switch (VAR_5) {
  case 128:
  if (!FUNC_0(VAR_0))
  return -VAR_2;
  VAR_7 = FUNC_1(VAR_3, &VAR_6->u.data);
  return VAR_7;
 }
 return -VAR_1;
}
