
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(char *VAR_8, char *VAR_9)
{
 if (!VAR_2) {
  if (!FUNC_4(VAR_8+1, VAR_9, 2))
   return 0;
  return 1;
 }
 switch (VAR_6) {
 case 1:

  FUNC_3(&VAR_8[1], (char *)VAR_3,
    VAR_1);
  FUNC_1(VAR_3, &VAR_4);
  FUNC_5("Stopped at IP: %lx\n",
    FUNC_2(&VAR_4));

  VAR_5 = FUNC_2(&VAR_4) +
   VAR_0;
  break;
 case 2:
  if (FUNC_4(VAR_8, "$OK", 3)) {
   FUNC_0("kgdbts: failed sstep break set\n");
   return 1;
  }
  break;
 case 3:
  if (FUNC_4(VAR_8, "$T0", 3)) {
   FUNC_0("kgdbts: failed continue sstep\n");
   return 1;
  }
  break;
 case 4:
  if (FUNC_4(VAR_8, "$OK", 3)) {
   FUNC_0("kgdbts: failed sstep break unset\n");
   return 1;
  }

  VAR_6 = 0;
  return 0;
 default:
  FUNC_0("kgdbts: ERROR failed sstep put emulation\n");
 }


 VAR_7.idx--;
 return 0;
}
