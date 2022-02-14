
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fq6_head {int dummy; } ;
struct TYPE_5__ {struct TYPE_5__* ip6q_next; } ;
struct TYPE_4__ {int ip6s_fragdropped; } ;


 int FUNC_0 (struct fq6_head*) ;
 int FUNC_1 (struct fq6_head*) ;
 int FUNC_2 (struct fq6_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,struct fq6_head*,struct fq6_head*) ;
 int FUNC_5 (struct fq6_head*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(void)
{
 struct fq6_head VAR_3, VAR_4;

 FUNC_2(&VAR_3);
 FUNC_2(&VAR_4);

 FUNC_6(&VAR_1);
 while (VAR_0.ip6q_next != &VAR_0) {
  VAR_2.ip6s_fragdropped++;

  FUNC_4(VAR_0.ip6q_next, &VAR_3, &VAR_4);
 }
 FUNC_7(&VAR_1);


 if (!FUNC_1(&VAR_3))
  FUNC_0(&VAR_3);

 FUNC_5(&VAR_4);

 FUNC_3(FUNC_1(&VAR_3));
 FUNC_3(FUNC_1(&VAR_4));
}
