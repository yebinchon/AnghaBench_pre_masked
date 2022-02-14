
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char wchar_t ;
typedef size_t UINT ;
struct TYPE_4__ {char* name; char* unistr; char* str; } ;
typedef TYPE_1__ TABLE ;
typedef int LIST ;


 size_t FUNC_0 (char*) ;
 size_t FUNC_1 (char*,size_t) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (char*,size_t,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,size_t,char*) ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (char*,int) ;
 int FUNC_16 (char*,size_t,char*,char*,char*,int) ;
 int FUNC_17 (char*,size_t,char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,size_t,char*) ;
 int FUNC_20 (char*,size_t,char*,size_t) ;
 char* FUNC_21 (size_t) ;

TABLE *FUNC_22(char *VAR_0, char *VAR_1, UINT VAR_2, LIST *VAR_3)
{
 UINT VAR_4, VAR_5;
 UINT VAR_6;
 UINT VAR_7;
 char *VAR_8;
 char *VAR_9;
 UINT VAR_10;
 wchar_t *VAR_11;
 char *VAR_12;
 UINT VAR_13, VAR_14;
 TABLE *VAR_15;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }
 FUNC_13(VAR_0);


 VAR_5 = FUNC_10(VAR_0);
 if (VAR_5 == 0)
 {
  return ((void*)0);
 }


 if (VAR_0[0] == '#' || (VAR_0[0] == '/' && VAR_0[1] == '/'))
 {
  return ((void*)0);
 }


 VAR_6 = 0;
 for (VAR_4 = 0;;VAR_4++)
 {
  if (VAR_0[VAR_4] == 0)
  {

   return ((void*)0);
  }
  if (VAR_0[VAR_4] == ' ' || VAR_0[VAR_4] == '\t')
  {
   break;
  }
  VAR_6++;
 }

 VAR_8 = FUNC_6(VAR_6 + 1);
 FUNC_9(VAR_8, VAR_6 + 1, VAR_0);

 VAR_7 = VAR_6;
 for (VAR_4 = VAR_6;VAR_4 < VAR_5;VAR_4++)
 {
  if (VAR_0[VAR_4] != ' ' && VAR_0[VAR_4] != '\t')
  {
   break;
  }
  VAR_7++;
 }
 if (VAR_4 == VAR_5)
 {
  FUNC_3(VAR_8);
  return ((void*)0);
 }


 FUNC_14(&VAR_0[VAR_7]);


 VAR_13 = FUNC_1(&VAR_0[VAR_7], FUNC_10(&VAR_0[VAR_7]));
 if (VAR_13 == 0)
 {
  FUNC_3(VAR_8);
  return ((void*)0);
 }
 VAR_11 = FUNC_6(VAR_13);
 FUNC_20(VAR_11, VAR_13, &VAR_0[VAR_7], FUNC_10(&VAR_0[VAR_7]));

 if (FUNC_15(VAR_11, L'$'))
 {

  wchar_t *VAR_16;
  UINT VAR_17 = (FUNC_18(VAR_11) + 1024) * 2;
  UINT VAR_18;

  VAR_16 = FUNC_6(VAR_17);

  FUNC_17(VAR_16, VAR_17, VAR_11);

  for (VAR_18 = 0; VAR_18 < FUNC_5(VAR_3);VAR_18++)
  {
   TABLE *VAR_19 = FUNC_4(VAR_3, VAR_18);

   FUNC_16(VAR_16, VAR_17, VAR_16, (wchar_t *)VAR_19->name, VAR_19->unistr, 0);
  }

  FUNC_3(VAR_11);

  VAR_11 = FUNC_2(VAR_16);

  FUNC_3(VAR_16);
 }


 VAR_14 = FUNC_0(VAR_11);
 if (VAR_14 == 0)
 {
  VAR_14 = 1;
  VAR_12 = FUNC_6(1);
  VAR_12[0] = 0;
 }
 else
 {
  VAR_12 = FUNC_6(VAR_14);
  FUNC_19(VAR_12, VAR_14, VAR_11);
 }

 if (FUNC_8(VAR_8, "PREFIX") == 0)
 {

  FUNC_9(VAR_1, VAR_2, VAR_12);
  FUNC_12(VAR_1);

  if (FUNC_8(VAR_1, "$") == 0 || FUNC_8(VAR_1, "NULL") == 0)
  {
   VAR_1[0] = 0;
  }

  FUNC_3(VAR_8);
  FUNC_3(VAR_12);
  FUNC_3(VAR_11);

  return ((void*)0);
 }

 VAR_10 = FUNC_10(VAR_8) + FUNC_10(VAR_1) + 2;
 VAR_9 = FUNC_21(VAR_10);

 if (VAR_1[0] != 0)
 {
  FUNC_7(VAR_9, VAR_10, VAR_1);
  FUNC_7(VAR_9, VAR_10, "@");
 }

 FUNC_7(VAR_9, VAR_10, VAR_8);

 FUNC_3(VAR_8);


 VAR_15 = FUNC_6(sizeof(TABLE));
 FUNC_11(VAR_9);
 VAR_15->name = VAR_9;
 VAR_15->str = VAR_12;
 VAR_15->unistr = VAR_11;

 return VAR_15;
}
