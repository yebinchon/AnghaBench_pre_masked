
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int banner ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (unsigned long,int,unsigned long*,char*,int) ;
 scalar_t__ FUNC_4 (char*,scalar_t__,char*,char*) ;
 int FUNC_5 (char*,char*,int,int) ;

__attribute__((used)) static int
FUNC_6(char *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4[2];
 char VAR_5[128];
 int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; ; VAR_6++) {
  if (FUNC_3(VAR_3, VAR_6, VAR_4, VAR_5,
      sizeof(VAR_5)))
   return 0;
  if (FUNC_2(VAR_4[1]) == VAR_0)
   break;
 }

 VAR_7 = FUNC_5(VAR_2, "%x.%02x\n", FUNC_0(VAR_4[1]),
        FUNC_1(VAR_4[1]));
 VAR_2 += VAR_7;

 if (VAR_5[0])
  VAR_7 += FUNC_4(VAR_2, VAR_1-VAR_7, "%s\n", VAR_5);

 return VAR_7;
}
