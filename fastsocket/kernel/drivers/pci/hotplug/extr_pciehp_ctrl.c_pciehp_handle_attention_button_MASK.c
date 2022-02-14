
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct slot {struct controller* ctrl; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct controller*,char*) ;
 int FUNC_1 (struct controller*,char*,int ) ;
 int FUNC_2 (struct slot*,int ) ;
 int FUNC_3 (struct slot*) ;

u8 FUNC_4(struct slot *VAR_1)
{
 u32 VAR_2;
 struct controller *VAR_3 = VAR_1->ctrl;


 FUNC_0(VAR_3, "Attention button interrupt received\n");




 FUNC_1(VAR_3, "Button pressed on Slot(%s)\n", FUNC_3(VAR_1));
 VAR_2 = VAR_0;

 FUNC_2(VAR_1, VAR_2);

 return 0;
}
