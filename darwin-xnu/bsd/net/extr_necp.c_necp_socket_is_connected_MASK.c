
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inpcb {TYPE_1__* inp_socket; } ;
struct TYPE_2__ {int so_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool
FUNC_0(struct inpcb *VAR_3)
{
 return (VAR_3->inp_socket->so_state & (VAR_1 | VAR_0 | VAR_2));
}
