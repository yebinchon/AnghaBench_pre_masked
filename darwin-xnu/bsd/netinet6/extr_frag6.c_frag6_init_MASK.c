
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip6q {int dummy; } ;
struct ip6asfrag {int dummy; } ;
struct TYPE_2__ {struct TYPE_2__* ip6q_prev; struct TYPE_2__* ip6q_next; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;

void
FUNC_8(void)
{

 FUNC_0(sizeof (struct ip6q) <= VAR_0);

 FUNC_0(sizeof (struct ip6asfrag) <= VAR_0);


 VAR_7 = FUNC_4();
 VAR_6 = FUNC_3("ip6qlock", VAR_7);
 VAR_5 = FUNC_2();
 FUNC_5(&VAR_4, VAR_6, VAR_5);

 FUNC_6(&VAR_4);

 VAR_3.ip6q_next = VAR_3.ip6q_prev = &VAR_3;


 VAR_1 = VAR_8 / 32;
 VAR_2 = VAR_1 * 2;
 FUNC_1();
 FUNC_7(&VAR_4);
}
