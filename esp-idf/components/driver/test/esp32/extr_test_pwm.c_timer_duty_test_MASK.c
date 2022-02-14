
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mcpwm_unit_t ;
typedef int mcpwm_timer_t ;
typedef int mcpwm_io_signals_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (double,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 double FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,float) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (char*,double) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(mcpwm_unit_t VAR_5, mcpwm_io_signals_t VAR_6, mcpwm_io_signals_t VAR_7, mcpwm_timer_t VAR_8)
{
    FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
    FUNC_8(1000 / VAR_4);

    FUNC_1(FUNC_4(VAR_5, VAR_8, VAR_2, (VAR_0 * 1)));
    FUNC_1(FUNC_4(VAR_5, VAR_8, VAR_3, (VAR_0 * 2)));

    FUNC_0(FUNC_3(VAR_5, VAR_8, VAR_2), VAR_0 * 1);
    FUNC_0(FUNC_3(VAR_5, VAR_8, VAR_3), VAR_0 * 2);
    FUNC_8(1000 / VAR_4);

    FUNC_4(VAR_5, VAR_8, VAR_2, 55.5f);
    FUNC_6(VAR_5, VAR_8, VAR_2, VAR_1);
    FUNC_7("mcpwm check = %f\n", FUNC_3(VAR_5, VAR_8, VAR_2));

    FUNC_5(VAR_5, VAR_8, VAR_3, 500);
    FUNC_7("mcpwm check = %f\n", FUNC_3(VAR_5, VAR_8, VAR_3));
    FUNC_8(1000 / VAR_4);
}
