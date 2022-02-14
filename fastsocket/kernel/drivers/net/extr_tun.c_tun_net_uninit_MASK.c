
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wait; } ;
struct tun_struct {TYPE_1__ socket; struct tun_file* tfile; } ;
struct tun_file {int count; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct tun_struct*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct tun_struct* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct tun_struct *VAR_1 = FUNC_2(VAR_0);
 struct tun_file *VAR_2 = VAR_1->tfile;



 if (VAR_2) {
  FUNC_3(&VAR_1->socket.wait);
  if (FUNC_1(&VAR_2->count))
   FUNC_0(VAR_1);
 }
}
