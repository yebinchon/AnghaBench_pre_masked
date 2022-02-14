
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int wchar_t ;
typedef int realname ;
typedef int note ;
typedef int USERGROUP ;
struct TYPE_8__ {char* Name; } ;
typedef int TRAFFIC ;
typedef int POLICY ;
typedef int HUB ;
typedef TYPE_1__ FOLDER ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,int *,int) ;
 int VAR_0 ;
 int * FUNC_5 (char*,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*,int *) ;

void FUNC_11(HUB *VAR_1, FOLDER *VAR_2)
{
 wchar_t VAR_3[VAR_0];
 wchar_t VAR_4[VAR_0];
 char *VAR_5;
 FOLDER *VAR_6;
 POLICY VAR_7;
 TRAFFIC VAR_8;
 USERGROUP *VAR_9;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_5 = VAR_2->Name;

 FUNC_4(VAR_2, "RealName", VAR_3, sizeof(VAR_3));
 FUNC_4(VAR_2, "Note", VAR_4, sizeof(VAR_4));

 VAR_6 = FUNC_3(VAR_2, "Policy");
 if (VAR_6 != ((void*)0))
 {
  FUNC_9(&VAR_7, VAR_6);
 }

 FUNC_10(VAR_2, "Traffic", &VAR_8);

 VAR_9 = FUNC_5(VAR_5, VAR_3, VAR_4);
 if (VAR_9 == ((void*)0))
 {
  return;
 }

 if (VAR_6 != ((void*)0))
 {
  FUNC_7(VAR_9, &VAR_7);
 }

 FUNC_8(VAR_9, &VAR_8);

 FUNC_1(VAR_1);
 {
  FUNC_0(VAR_1, VAR_9);
 }
 FUNC_2(VAR_1);

 FUNC_6(VAR_9);
}
