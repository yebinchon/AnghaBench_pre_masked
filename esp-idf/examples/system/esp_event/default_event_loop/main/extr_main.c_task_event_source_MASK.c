
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iteration ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int*,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void* VAR_8)
{
    for(int VAR_9 = 1; VAR_9 <= VAR_2; VAR_9++) {

        FUNC_1(VAR_0, "%s:%s: posting to default loop, %d out of %d", VAR_1,
                FUNC_4(VAR_1, VAR_4), VAR_9, VAR_2);



        FUNC_0(FUNC_3(VAR_1, VAR_4, &VAR_9, sizeof(VAR_9), VAR_6));

        if (VAR_9 == VAR_3) {
            FUNC_1(VAR_0, "%s:%s: unregistering task_iteration_handler", VAR_1, FUNC_4(VAR_1, VAR_4));
            FUNC_0(FUNC_2(VAR_1, VAR_4, VAR_7));
        }

        FUNC_6(FUNC_5(VAR_5));
    }

    FUNC_6(FUNC_5(VAR_5));

    FUNC_1(VAR_0, "%s:%s: deleting task event source", VAR_1, FUNC_4(VAR_1, VAR_4));

    FUNC_7(((void*)0));
}
