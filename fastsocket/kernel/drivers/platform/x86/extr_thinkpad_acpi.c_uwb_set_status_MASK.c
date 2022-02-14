
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tpacpi_rfkill_state { ____Placeholder_tpacpi_rfkill_state } tpacpi_rfkill_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,char*,char*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_2(enum tpacpi_rfkill_state VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_1,
  "will attempt to %s UWB\n",
  (VAR_7 == VAR_2) ? "enable" : "disable");
 if (VAR_7 == VAR_2)
  VAR_8 = VAR_3;
 else
  VAR_8 = 0;

 if (!FUNC_0(VAR_5, ((void*)0), "SUWB", "vd", VAR_8))
  return -VAR_0;

 return 0;
}
