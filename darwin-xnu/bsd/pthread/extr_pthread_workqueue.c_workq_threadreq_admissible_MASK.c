
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* workq_threadreq_t ;
struct workqueue {int dummy; } ;
struct uthread {int dummy; } ;
struct TYPE_3__ {scalar_t__ tr_qos; int tr_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct workqueue*,scalar_t__,struct uthread*,int) ;
 int FUNC_1 (struct workqueue*,struct uthread*) ;

__attribute__((used)) static bool
FUNC_2(struct workqueue *VAR_2, struct uthread *VAR_3,
  workq_threadreq_t VAR_4)
{
 if (VAR_4->tr_qos == VAR_1) {
  return FUNC_1(VAR_2, VAR_3);
 }
 if ((VAR_4->tr_flags & VAR_0) == 0) {
  return FUNC_0(VAR_2, VAR_4->tr_qos, VAR_3, 1);
 }
 return 1;
}
