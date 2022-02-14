
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sk; int * file; } ;
struct tun_struct {int dev; TYPE_2__ socket; int * tfile; } ;
struct TYPE_3__ {int sk_receive_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tun_struct *VAR_0)
{

 FUNC_1(VAR_0->dev);
 VAR_0->tfile = ((void*)0);
 VAR_0->socket.file = ((void*)0);
 FUNC_2(VAR_0->dev);


 FUNC_3(&VAR_0->socket.sk->sk_receive_queue);


 FUNC_0(VAR_0->dev);
}
