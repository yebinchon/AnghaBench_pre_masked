
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fw_ver_str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,int,int,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;

__attribute__((used)) static inline void FUNC_5(void)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_3(VAR_4.fw_ver_str, "ERROR");

 if (FUNC_1()) {
  VAR_5 = FUNC_0(VAR_1);
  VAR_6 = FUNC_0(VAR_3);
  VAR_7 = FUNC_0(VAR_0);
  VAR_8 = FUNC_0(VAR_2);
  FUNC_2(VAR_4.fw_ver_str, "%c.%c%c%c",
     VAR_5, VAR_6, VAR_7, VAR_8);
 }
 FUNC_4();

 return;
}
