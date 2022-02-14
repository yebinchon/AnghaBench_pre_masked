
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int EmuOpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int,char const*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_4, const char *VAR_5, int VAR_6)
{
 int VAR_7 = 0, VAR_8 = VAR_3.EmuOpt;

 if (VAR_5 || (VAR_8 & 2)) {
  if (VAR_5) FUNC_1(4, VAR_5, 0, 0);
  if (VAR_8 & 2) FUNC_1(VAR_0, VAR_4, 0, 0);
 }



 if ((VAR_8 & 0x400) && (VAR_2 & VAR_1))
  FUNC_0();

 if (VAR_3.EmuOpt & 0x2000) {
  if (!(VAR_3.EmuOpt & 0x10000) || !VAR_6) VAR_7 = 1;
 }

 FUNC_2(VAR_7);
}
