
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; int function; } ;
struct qib_qp {TYPE_1__ s_timer; scalar_t__ timeout_jiffies; int s_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct qib_qp *VAR_3)
{
 VAR_3->s_flags |= VAR_0;
 VAR_3->s_timer.function = VAR_2;

 VAR_3->s_timer.expires = VAR_1 + VAR_3->timeout_jiffies;
 FUNC_0(&VAR_3->s_timer);
}
