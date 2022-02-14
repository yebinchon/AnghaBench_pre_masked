
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32_t ;
struct TYPE_2__ {scalar_t__ seq; scalar_t__ iv_index; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;

u32_t FUNC_7(void)
{
    u32_t VAR_5 = VAR_4.seq++;

    if (FUNC_0(VAR_2)) {
        FUNC_5();
    }

    if (!FUNC_1(VAR_4.flags, VAR_0) &&
            VAR_4.seq > VAR_3 &&
            FUNC_6(VAR_1)) {



        FUNC_3(VAR_4.iv_index + 1, 1);
        FUNC_4(((void*)0));
    }

    return VAR_5;
}
