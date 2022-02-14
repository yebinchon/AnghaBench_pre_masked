
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tpacpi_rfkill_state { ____Placeholder_tpacpi_rfkill_state } tpacpi_rfkill_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,char*,char*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_2(enum tpacpi_rfkill_state VAR_8)
{
 int VAR_9;

 FUNC_1(VAR_1,
  "will attempt to %s wwan\n",
  (VAR_8 == VAR_2) ? "enable" : "disable");
 if (VAR_8 == VAR_2)
  VAR_9 = VAR_3
    | VAR_4;
 else
  VAR_9 = 0;

 if (!FUNC_0(VAR_6, ((void*)0), "SWAN", "vd", VAR_9))
  return -VAR_0;

 return 0;
}
