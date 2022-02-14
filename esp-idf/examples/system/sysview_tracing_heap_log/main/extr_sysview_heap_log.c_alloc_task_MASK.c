
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int QueueHandle_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,int,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 void* FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,void*,int ) ;
 int FUNC_7 (int ,char*,int,int ,int,int *,scalar_t__) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void *VAR_7)
{
    QueueHandle_t VAR_8 = (QueueHandle_t)VAR_7;

    FUNC_7(VAR_2, "free", 2048, VAR_8, 5, ((void*)0), VAR_5-1);


    FUNC_2(VAR_0);
    for(int VAR_9 = 1; VAR_9 < 5; VAR_9++) {
        uint32_t VAR_10 = 2*VAR_9;
        void *VAR_11 = FUNC_4(VAR_10/2);

        VAR_11 = FUNC_4(VAR_10);
        FUNC_1(VAR_1, "Task[%p]: allocated %d bytes @ %p", FUNC_8(), VAR_10, VAR_11);
        if (FUNC_6(VAR_8, ( void * )&VAR_11, VAR_4) != VAR_3) {
            FUNC_0(VAR_1, "Failed to send to queue!");
        }
        FUNC_5(100/VAR_6);
    }

    FUNC_3();
    while(1);
}
