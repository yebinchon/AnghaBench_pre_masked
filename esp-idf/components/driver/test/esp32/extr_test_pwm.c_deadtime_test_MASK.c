
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mcpwm_unit_t ;
typedef int mcpwm_timer_t ;
typedef int mcpwm_io_signals_t ;
typedef int mcpwm_deadtime_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int,int) ;
 int VAR_8 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(mcpwm_unit_t VAR_9, mcpwm_io_signals_t VAR_10, mcpwm_io_signals_t VAR_11, mcpwm_timer_t VAR_12)
{
    FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12);
    mcpwm_deadtime_type_t VAR_13[8] = {VAR_7, VAR_6, VAR_1,
            VAR_3, VAR_0, VAR_2,
            VAR_4, VAR_5};

    for(int VAR_14=0; VAR_14<8; VAR_14++) {
        FUNC_2(VAR_9, VAR_12, VAR_13[VAR_14], 1000, 1000);
        FUNC_3(1000 / VAR_8);
        FUNC_1(VAR_9, VAR_12);
    }
}
