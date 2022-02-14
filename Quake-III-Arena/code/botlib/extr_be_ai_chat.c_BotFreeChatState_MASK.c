
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bot_consolemessage_t ;
typedef int bot_chatstate_t ;
struct TYPE_2__ {int (* Print ) (int ,char*,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,int) ;

void FUNC_7(int VAR_4)
{
 bot_chatstate_t *VAR_5;
 bot_consolemessage_t VAR_6;
 int VAR_7;

 if (VAR_4 <= 0 || VAR_4 > VAR_0)
 {
  VAR_3.Print(VAR_1, "chat state handle %d out of range\n", VAR_4);
  return;
 }
 if (!VAR_2[VAR_4])
 {
  VAR_3.Print(VAR_1, "invalid chat state %d\n", VAR_4);
  return;
 }
 VAR_5 = VAR_2[VAR_4];
 if (FUNC_4("bot_reloadcharacters"))
 {
  FUNC_0(VAR_4);
 }

 for (VAR_7 = FUNC_1(VAR_4, &VAR_6); VAR_7; VAR_7 = FUNC_1(VAR_4, &VAR_6))
 {

  FUNC_2(VAR_4, VAR_7);
 }
 FUNC_3(VAR_2[VAR_4]);
 VAR_2[VAR_4] = ((void*)0);
}
