
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int caddr_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_5__ {scalar_t__ b_resid; int b_bcount; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(buf_t VAR_0) {
        caddr_t VAR_1;

        if (FUNC_0(VAR_0, &VAR_1) == 0) {
         FUNC_2(VAR_1, VAR_0->b_bcount);
  FUNC_1(VAR_0);
 }
 VAR_0->b_resid = 0;
}
