
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct slot {struct controller* ctrl; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct controller*) ;
 scalar_t__ FUNC_1 (struct controller*) ;
 scalar_t__ FUNC_2 (struct controller*) ;
 int FUNC_3 (struct controller*,char*,int ) ;
 int FUNC_4 (struct slot*,scalar_t__*) ;
 int FUNC_5 (struct slot*,scalar_t__*) ;
 int FUNC_6 (struct slot*,scalar_t__*) ;
 int FUNC_7 (struct slot*) ;
 int FUNC_8 (struct slot*) ;
 int FUNC_9 (struct slot*) ;

int FUNC_10(struct slot *VAR_2)
{
 u8 VAR_3 = 0;
 int VAR_4 = 0;
 struct controller *VAR_5 = VAR_2->ctrl;

 if (!VAR_2->ctrl)
  return 1;

 if (!FUNC_0(VAR_2->ctrl)) {
  VAR_4 = FUNC_4(VAR_2, &VAR_3);
  if (VAR_4 || !VAR_3) {
   FUNC_3(VAR_5, "No adapter on slot(%s)\n",
      FUNC_8(VAR_2));
   return -VAR_1;
  }
 }

 if (FUNC_1(VAR_2->ctrl)) {
  VAR_4 = FUNC_5(VAR_2, &VAR_3);
  if (VAR_4 || VAR_3) {
   FUNC_3(VAR_5, "Latch open on slot(%s)\n",
      FUNC_8(VAR_2));
   return -VAR_1;
  }
 }

 if (FUNC_2(VAR_2->ctrl)) {
  VAR_4 = FUNC_6(VAR_2, &VAR_3);
  if (VAR_4 || !VAR_3) {
   FUNC_3(VAR_5, "Already disabled on slot(%s)\n",
      FUNC_8(VAR_2));
   return -VAR_0;
  }
 }

 VAR_4 = FUNC_7(VAR_2);
 FUNC_9(VAR_2);

 return VAR_4;
}
