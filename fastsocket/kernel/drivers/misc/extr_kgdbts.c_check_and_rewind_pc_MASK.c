
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long ip; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,unsigned long) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 unsigned long FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(char *VAR_3, char *VAR_4)
{
 unsigned long VAR_5 = FUNC_4(VAR_4);
 int VAR_6 = 0;

 FUNC_3(&VAR_3[1], (char *)VAR_1,
   VAR_0);
 FUNC_1(VAR_1, &VAR_2);
 FUNC_6("Stopped at IP: %lx\n", FUNC_2(&VAR_2));





 if (FUNC_5(VAR_4, "silent") &&
  FUNC_2(&VAR_2) + VAR_6 != VAR_5) {
  FUNC_0("kgdbts: BP mismatch %lx expected %lx\n",
      FUNC_2(&VAR_2) + VAR_6, VAR_5);
  return 1;
 }




 return 0;
}
