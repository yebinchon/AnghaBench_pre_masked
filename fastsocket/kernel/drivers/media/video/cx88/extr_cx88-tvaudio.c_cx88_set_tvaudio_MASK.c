
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {int tvaudio; int use_nicam; int name; int audiomode_current; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cx88_core*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_7 ;
 int FUNC_3 (struct cx88_core*,int ) ;
 int FUNC_4 (struct cx88_core*,int ) ;
 int FUNC_5 (struct cx88_core*,int ,int ) ;
 int FUNC_6 (struct cx88_core*) ;
 int FUNC_7 (struct cx88_core*,int ) ;
 int FUNC_8 (struct cx88_core*,int ) ;
 int FUNC_9 (struct cx88_core*,int) ;

void FUNC_10(struct cx88_core *VAR_8)
{
 switch (VAR_8->tvaudio) {
 case 137:
  FUNC_5(VAR_8, 0, VAR_3);
  break;
 case 138:
 case 136:
 case 129:
 case 133:
 case 130:

  FUNC_4(VAR_8, VAR_2);



  FUNC_8(VAR_8, VAR_5);
  if (0 == FUNC_0(VAR_8)) {

   FUNC_4(VAR_8, VAR_2);
   VAR_8->audiomode_current = VAR_6;
   VAR_8->use_nicam = 0;
  } else {
   VAR_8->use_nicam = 1;
  }
  break;
 case 135:
  FUNC_6(VAR_8);
  break;
 case 134:
  FUNC_7(VAR_8, VAR_7);
  break;
 case 132:
  FUNC_9(VAR_8, 0x01);

  FUNC_1(VAR_1, 0);

  FUNC_1(VAR_0, 0x1);
  FUNC_3(VAR_8, VAR_4);
  break;
 case 128:
 case 131:
  FUNC_2("%s/0: unknown tv audio mode [%d]\n",
         VAR_8->name, VAR_8->tvaudio);
  break;
 }
 return;
}
