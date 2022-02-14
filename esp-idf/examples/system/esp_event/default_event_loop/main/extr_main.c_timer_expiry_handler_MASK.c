
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(void* VAR_6, esp_event_base_t VAR_7, int32_t VAR_8, void* VAR_9)
{
    static int VAR_10 = 0;

    VAR_10++;

    if (VAR_10 >= VAR_4) {

        FUNC_0(FUNC_3(VAR_1));

        FUNC_1(VAR_0, "%s:%s: posting to default loop", VAR_7, FUNC_4(VAR_7, VAR_3));


        FUNC_0(FUNC_2(VAR_2, VAR_3, ((void*)0), 0, VAR_5));
    }

    FUNC_1(VAR_0, "%s:%s: timer_expiry_handler, executed %d out of %d times", VAR_7, FUNC_4(VAR_7, VAR_8), VAR_10, VAR_4);
}
