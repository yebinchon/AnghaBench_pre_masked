
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct slot {struct controller* ctrl; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct controller*,char*) ;
 int FUNC_1 (struct controller*,char*,int ) ;
 int FUNC_2 (struct slot*,int*) ;
 int FUNC_3 (struct slot*,int ) ;
 int FUNC_4 (struct slot*) ;

u8 FUNC_5(struct slot *VAR_2)
{
 u32 VAR_3;
 u8 VAR_4;
 struct controller *VAR_5 = VAR_2->ctrl;


 FUNC_0(VAR_5, "Presence/Notify input change\n");




 FUNC_2(VAR_2, &VAR_4);
 if (VAR_4) {



  FUNC_1(VAR_5, "Card present on Slot(%s)\n", FUNC_4(VAR_2));
  VAR_3 = VAR_1;
 } else {



  FUNC_1(VAR_5, "Card not present on Slot(%s)\n",
     FUNC_4(VAR_2));
  VAR_3 = VAR_0;
 }

 FUNC_3(VAR_2, VAR_3);

 return 1;
}
