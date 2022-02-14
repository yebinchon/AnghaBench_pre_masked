
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ip6q {TYPE_2__* ip6q_prev; struct ip6q* ip6q_next; int ip6q_ttl; } ;
struct fq6_head {int dummy; } ;
struct TYPE_4__ {scalar_t__ ip6q_ttl; } ;
struct TYPE_3__ {int ip6s_fragoverflow; int ip6s_fragtimeout; } ;


 int FUNC_0 (struct fq6_head*) ;
 int FUNC_1 (struct fq6_head*) ;
 int FUNC_2 (struct fq6_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,struct fq6_head*,struct fq6_head*) ;
 int FUNC_5 (struct fq6_head*) ;
 unsigned int VAR_0 ;
 int FUNC_6 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ip6q VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(void *VAR_6)
{
#pragma unused(arg)
 struct fq6_head VAR_7, VAR_8;
 struct ip6q *VAR_9;

 FUNC_2(&VAR_7);
 FUNC_2(&VAR_8);






 FUNC_9();

 FUNC_7(&VAR_4);
 VAR_9 = VAR_3.ip6q_next;
 if (VAR_9)
  while (VAR_9 != &VAR_3) {
   --VAR_9->ip6q_ttl;
   VAR_9 = VAR_9->ip6q_next;
   if (VAR_9->ip6q_prev->ip6q_ttl == 0) {
    VAR_5.ip6s_fragtimeout++;

    FUNC_4(VAR_9->ip6q_prev, &VAR_7, &VAR_8);
   }
  }





 if (VAR_2 >= 0) {
  while (VAR_0 > (unsigned)VAR_2 &&
      VAR_3.ip6q_prev) {
   VAR_5.ip6s_fragoverflow++;

   FUNC_4(VAR_3.ip6q_prev, &VAR_7, &VAR_8);
  }
 }

 VAR_1 = 0;
 FUNC_6();
 FUNC_8(&VAR_4);


 if (!FUNC_1(&VAR_7))
  FUNC_0(&VAR_7);

 FUNC_5(&VAR_8);

 FUNC_3(FUNC_1(&VAR_7));
 FUNC_3(FUNC_1(&VAR_8));
}
