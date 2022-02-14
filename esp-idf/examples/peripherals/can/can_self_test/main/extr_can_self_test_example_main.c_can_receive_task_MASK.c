
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ can_message_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_6)
{
    can_message_t VAR_7;
    for (int VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        FUNC_5(VAR_5, VAR_4);
        for (int VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {

            FUNC_0(FUNC_2(&VAR_7, VAR_4));
            FUNC_1(VAR_0, "Msg received - Data = %d", VAR_7.data[0]);
        }

        FUNC_4(VAR_3);
    }
    FUNC_3(((void*)0));
}
