
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inpcb {int dummy; } ;
struct ifnet {char* if_xname; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int p_pid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct inpcb*,struct ifnet*) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int,char*,char*) ;
 char* FUNC_3 (TYPE_1__*) ;

boolean_t
FUNC_4(struct inpcb *VAR_2, struct ifnet *VAR_3)
{
 boolean_t VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 == VAR_0 && VAR_1) {
  FUNC_2("pid %d (%s) is unable to receive packets on %s\n",
      FUNC_1()->p_pid, FUNC_3(FUNC_1()),
      VAR_3->if_xname);
 }
 return (VAR_4);
}
