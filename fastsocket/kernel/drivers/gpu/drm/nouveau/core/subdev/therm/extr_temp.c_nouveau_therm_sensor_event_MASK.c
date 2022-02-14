
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_2__ {int (* pause ) (struct nouveau_therm*,int) ;int (* downclock ) (struct nouveau_therm*,int) ;} ;
struct nouveau_therm_priv {TYPE_1__ emergency; } ;
struct nouveau_therm {int (* temp_get ) (struct nouveau_therm*) ;} ;
typedef enum nouveau_therm_thrs_direction { ____Placeholder_nouveau_therm_thrs_direction } nouveau_therm_thrs_direction ;
typedef enum nouveau_therm_thrs { ____Placeholder_nouveau_therm_thrs } nouveau_therm_thrs ;


 int VAR_0 ;
 int FUNC_0 (struct work_struct*,int ) ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;

 struct work_struct* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nouveau_therm*,int ) ;
 int FUNC_3 (struct nouveau_therm*,int,int) ;
 int FUNC_4 (struct nouveau_therm*,char*,int,char const*) ;
 int VAR_4 ;
 int FUNC_5 (struct work_struct*) ;
 int FUNC_6 (struct nouveau_therm*) ;
 int FUNC_7 (struct nouveau_therm*,int) ;
 int FUNC_8 (struct nouveau_therm*,int) ;

void FUNC_9(struct nouveau_therm *VAR_5,
           enum nouveau_therm_thrs VAR_6,
           enum nouveau_therm_thrs_direction VAR_7)
{
 struct nouveau_therm_priv *VAR_8 = (void *)VAR_5;
 bool VAR_9;
 const char *VAR_10[] = {
  "fanboost", "downclock", "critical", "shutdown"
 };
 int VAR_11 = VAR_5->temp_get(VAR_5);

 if (VAR_6 < 0 || VAR_6 > 3)
  return;

 if (VAR_7 == VAR_2)
  FUNC_4(VAR_5, "temperature (%i C) went below the '%s' threshold\n",
   VAR_11, VAR_10[VAR_6]);
 else
  FUNC_4(VAR_5, "temperature (%i C) hit the '%s' threshold\n",
   VAR_11, VAR_10[VAR_6]);

 VAR_9 = (VAR_7 == VAR_3);
 switch (VAR_6) {
 case 130:
  if (VAR_9) {
   FUNC_3(VAR_5, 1, 100);
   FUNC_2(VAR_5, VAR_1);
  }
  break;
 case 131:
  if (VAR_8->emergency.downclock)
   VAR_8->emergency.downclock(VAR_5, VAR_9);
  break;
 case 132:
  if (VAR_8->emergency.pause)
   VAR_8->emergency.pause(VAR_5, VAR_9);
  break;
 case 128:
  if (VAR_9) {
   struct work_struct *VAR_12;

   VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_0);
   if (VAR_12) {
    FUNC_0(VAR_12, VAR_4);
    FUNC_5(VAR_12);
   }
  }
  break;
 case 129:
  break;
 }

}
