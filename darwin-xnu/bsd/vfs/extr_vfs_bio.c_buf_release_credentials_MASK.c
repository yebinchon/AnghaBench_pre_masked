
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* buf_t ;
struct TYPE_3__ {int b_wcred; int b_rcred; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __inline__ void
FUNC_2(buf_t VAR_0)
{
 if (FUNC_0(VAR_0->b_rcred)) {
  FUNC_1(&VAR_0->b_rcred);
 }
 if (FUNC_0(VAR_0->b_wcred)) {
  FUNC_1(&VAR_0->b_wcred);
 }
}
