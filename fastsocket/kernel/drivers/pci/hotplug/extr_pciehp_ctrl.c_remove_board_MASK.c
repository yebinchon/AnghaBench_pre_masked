
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {struct controller* ctrl; } ;
struct controller {int dummy; } ;


 scalar_t__ FUNC_0 (struct controller*) ;
 scalar_t__ FUNC_1 (struct controller*) ;
 int FUNC_2 (struct controller*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct slot*) ;
 int FUNC_5 (struct slot*) ;
 int FUNC_6 (struct slot*) ;

__attribute__((used)) static int FUNC_7(struct slot *VAR_0)
{
 int VAR_1 = 0;
 struct controller *VAR_2 = VAR_0->ctrl;

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1)
  return VAR_1;

 if (FUNC_0(VAR_2)) {

  VAR_1 = FUNC_5(VAR_0);
  if (VAR_1) {
   FUNC_2(VAR_2,
     "Issue of Slot Disable command failed\n");
   return VAR_1;
  }





  FUNC_3(1000);
 }


 if (FUNC_1(VAR_2))
  FUNC_4(VAR_0);

 return 0;
}
