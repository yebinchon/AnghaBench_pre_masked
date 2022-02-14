
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sk; } ;
struct tun_struct {TYPE_1__ socket; } ;
struct net_device {int dummy; } ;


 struct tun_struct* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct tun_struct *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->socket.sk);
}
