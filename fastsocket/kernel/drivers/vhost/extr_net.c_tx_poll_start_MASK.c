
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net {scalar_t__ tx_poll_state; scalar_t__ poll; } ;
struct socket {int file; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct vhost_net *VAR_3, struct socket *VAR_4)
{
 if (FUNC_0(VAR_3->tx_poll_state != VAR_1))
  return;
 FUNC_1(VAR_3->poll + VAR_2, VAR_4->file);
 VAR_3->tx_poll_state = VAR_0;
}
