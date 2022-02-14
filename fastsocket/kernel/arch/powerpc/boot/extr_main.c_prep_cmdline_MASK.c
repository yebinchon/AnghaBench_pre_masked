
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* edit_cmdline ) (char*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (void*,char*,char*,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (void*,char*,char*) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void *VAR_3)
{
 if (VAR_1[0] == '\0')
  FUNC_0(VAR_3, "bootargs", VAR_1, VAR_0-1);

 FUNC_1("\n\rLinux/PowerPC load: %s", VAR_1);

 if (VAR_2.edit_cmdline)
  VAR_2.edit_cmdline(VAR_1, VAR_0);
 FUNC_1("\n\r");


 FUNC_2(VAR_3, "bootargs", VAR_1);
}
