
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tGATT_TCB ;
typedef scalar_t__ UINT16 ;
struct TYPE_2__ {scalar_t__ handle_of_h_r; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static BOOLEAN FUNC_3(tGATT_TCB *VAR_3, UINT16 VAR_4)
{
    BOOLEAN VAR_5 = VAR_1;

    FUNC_0 ("gatts_proc_ind_ack ack handle=%d", VAR_4);

    if (VAR_4 == VAR_2.handle_of_h_r) {
        FUNC_2(VAR_3);

        VAR_5 = VAR_0;
    }

    FUNC_1(VAR_3);
    return VAR_5;
}
