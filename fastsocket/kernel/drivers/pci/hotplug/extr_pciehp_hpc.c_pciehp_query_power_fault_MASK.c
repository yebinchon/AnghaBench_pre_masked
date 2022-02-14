
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct slot {struct controller* ctrl; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct controller*,char*) ;
 int FUNC_1 (struct controller*,int ,int*) ;

int FUNC_2(struct slot *VAR_2)
{
 struct controller *VAR_3 = VAR_2->ctrl;
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0, &VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_3, "Cannot check for power fault\n");
  return VAR_5;
 }
 return !!(VAR_4 & VAR_1);
}
