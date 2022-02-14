
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct TYPE_2__ {int device; } ;
struct if_phonet_req {TYPE_1__ ifr_phonet_autoconf; } ;


 int VAR_0 ;
 int VAR_1 ;


__attribute__((used)) static int FUNC_0(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct if_phonet_req *VAR_5 = (struct if_phonet_req *)VAR_3;

 switch (VAR_4) {
 case 128:
  VAR_5->ifr_phonet_autoconf.device = VAR_1;
  return 0;
 }
 return -VAR_0;
}
