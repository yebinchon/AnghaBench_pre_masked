
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (scalar_t__,int *) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_4 (char*) ;
 int FUNC_5 (char*,unsigned long) ;

__attribute__((used)) static int FUNC_6(char *VAR_3, char *VAR_4)
{
 unsigned long VAR_5 = FUNC_4(VAR_4);




 FUNC_3(&VAR_3[1], (char *)VAR_1,
   VAR_0);
 FUNC_1(VAR_1, &VAR_2);
 FUNC_5("Singlestep stopped at IP: %lx\n",
     FUNC_2(&VAR_2));
 if (FUNC_2(&VAR_2) == VAR_5) {
  FUNC_0("kgdbts: SingleStep failed at %lx\n",
      FUNC_2(&VAR_2));
  return 1;
 }

 return 0;
}
