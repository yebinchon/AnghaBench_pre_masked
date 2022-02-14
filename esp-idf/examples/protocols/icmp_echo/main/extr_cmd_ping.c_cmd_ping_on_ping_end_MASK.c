
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float uint32_t ;
typedef int transmitted ;
typedef int total_time_ms ;
typedef int target_addr ;
typedef int received ;
typedef float ip_addr_t ;
typedef int esp_ping_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (float*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,float*,int) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int * FUNC_5 (float*) ;
 int * FUNC_6 (float*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void FUNC_8(esp_ping_handle_t VAR_4, void *VAR_5)
{
    ip_addr_t VAR_6;
    uint32_t VAR_7;
    uint32_t VAR_8;
    uint32_t VAR_9;
    FUNC_2(VAR_4, VAR_3, &VAR_7, sizeof(VAR_7));
    FUNC_2(VAR_4, VAR_2, &VAR_8, sizeof(VAR_8));
    FUNC_2(VAR_4, VAR_1, &VAR_6, sizeof(VAR_6));
    FUNC_2(VAR_4, VAR_0, &VAR_9, sizeof(VAR_9));
    uint32_t VAR_10 = (uint32_t)((1 - ((float)VAR_8) / VAR_7) * 100);
    if (FUNC_0(&VAR_6)) {
        FUNC_7("\n--- %s ping statistics ---\n", FUNC_4(*FUNC_5(&VAR_6)));
    } else {
        FUNC_7("\n--- %s ping statistics ---\n", FUNC_3(*FUNC_6(&VAR_6)));
    }
    FUNC_7("%d packets transmitted, %d received, %d%% packet loss, time %dms\n",
           VAR_7, VAR_8, VAR_10, VAR_9);


    FUNC_1(VAR_4);
}
