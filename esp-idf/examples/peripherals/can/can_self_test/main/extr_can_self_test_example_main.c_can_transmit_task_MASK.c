
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data_length_code; int* data; int flags; int identifier; } ;
typedef TYPE_1__ can_message_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_6)
{
    can_message_t VAR_7 = {.data_length_code = 1, .identifier = VAR_1, .flags = VAR_0};
    for (int VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
        FUNC_5(VAR_5, VAR_4);
        for (int VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {

            VAR_7.data[0] = VAR_9;
            FUNC_0(FUNC_1(&VAR_7, VAR_4));
            FUNC_3(FUNC_2(10));
        }
    }
    FUNC_4(((void*)0));
}
