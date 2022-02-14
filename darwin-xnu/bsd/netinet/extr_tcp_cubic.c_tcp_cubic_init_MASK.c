
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {int * t_ccstate; } ;
struct TYPE_2__ {int num_sockets; } ;
typedef int SInt32 ;


 int FUNC_0 (int volatile*) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct tcpcb*) ;

__attribute__((used)) static int FUNC_3(struct tcpcb *VAR_1)
{
 FUNC_0((volatile SInt32 *)&VAR_0.num_sockets);

 FUNC_1(VAR_1->t_ccstate != ((void*)0));
 FUNC_2(VAR_1);
 return (0);
}
