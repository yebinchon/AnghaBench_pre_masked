
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hotkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char**) ;
 int FUNC_5 (char*,char*,int*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 TYPE_1__ VAR_9 ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static int FUNC_8(char *VAR_10)
{
 int VAR_11;
 u32 VAR_12;
 char *VAR_13;

 if (!VAR_9.hotkey)
  return -VAR_1;

 if (FUNC_2(&VAR_5))
  return -VAR_3;

 VAR_12 = VAR_8;

 VAR_11 = 0;
 while ((VAR_13 = FUNC_4(&VAR_10))) {
  if (FUNC_6(VAR_13, "enable") == 0) {
   FUNC_0(1);
  } else if (FUNC_6(VAR_13, "disable") == 0) {
   FUNC_0(0);
   VAR_11 = -VAR_2;
  } else if (FUNC_6(VAR_13, "reset") == 0) {
   VAR_12 = (VAR_4 | VAR_7)
    & ~VAR_6;
  } else if (FUNC_5(VAR_13, "0x%x", &VAR_12) == 1) {

  } else if (FUNC_5(VAR_13, "%x", &VAR_12) == 1) {

  } else {
   VAR_11 = -VAR_0;
   goto errexit;
  }
 }

 if (!VAR_11) {
  FUNC_7("procfs hotkey",
   "set mask to 0x%08x\n", VAR_12);
  VAR_11 = FUNC_1(VAR_12);
 }

errexit:
 FUNC_3(&VAR_5);
 return VAR_11;
}
