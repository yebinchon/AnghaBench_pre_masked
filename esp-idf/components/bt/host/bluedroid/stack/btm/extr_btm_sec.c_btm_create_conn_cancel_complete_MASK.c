
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_3__ {int (* p_bond_cancel_cmpl_callback ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ api; } ;


 int VAR_0 ;



 int FUNC_0 (int,int*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

void FUNC_3 (UINT8 *VAR_2)
{
    UINT8 VAR_3;

    FUNC_0 (VAR_3, VAR_2);






    switch (VAR_3) {
    case 128:

        FUNC_1();

        break;
    case 130:
    case 129:
    default:

        if (VAR_1.api.p_bond_cancel_cmpl_callback) {
            VAR_1.api.p_bond_cancel_cmpl_callback(VAR_0);
        }
        break;
    }
}
