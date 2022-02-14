
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int kern_return_t ;
struct TYPE_3__ {scalar_t__ target_type; int target; } ;
typedef TYPE_1__ KXLDReloc ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;

kern_return_t
FUNC_1(KXLDReloc *VAR_4, u_int VAR_5)
{
    kern_return_t VAR_6 = VAR_0;

    FUNC_0(VAR_4->target_type == VAR_2,
        VAR_3, VAR_6 = VAR_0);

    VAR_4->target = VAR_5;

    VAR_6 = VAR_1;

finish:
    return VAR_6;
}
