
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int con_flags; int gap_handle; int (* p_callback ) (int ,int ) ;int con_state; } ;
typedef TYPE_1__ tGAP_CCB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2 (tGAP_CCB *VAR_3)
{
    FUNC_0 ("gap_checks_con_flags conn_flags:0x%x, ", VAR_3->con_flags);

    if ((VAR_3->con_flags & VAR_0) == VAR_0) {
        VAR_3->con_state = VAR_1;

        VAR_3->p_callback (VAR_3->gap_handle, VAR_2);
    }
}
