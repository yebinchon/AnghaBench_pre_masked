
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tGAP_CB ;
typedef int bt_status_t ;
struct TYPE_3__ {int trace_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

bt_status_t FUNC_4(void)
{

    VAR_5 = (tGAP_CB *)FUNC_3(sizeof(tGAP_CB));
    if (!VAR_5) {
        return VAR_0;
    }


    FUNC_2 (&VAR_4, 0, sizeof (tGAP_CB));




    VAR_4.trace_level = VAR_2;



    FUNC_1();



    FUNC_0();


    return VAR_1;
}
