
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int errno_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_3__ {int b_flags; int b_error; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(buf_t VAR_1, errno_t VAR_2) {

        if ((VAR_1->b_error = VAR_2))
         FUNC_1(VAR_1->b_flags, VAR_0);
 else
         FUNC_0(VAR_1->b_flags, VAR_0);
}
