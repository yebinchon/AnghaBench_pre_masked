
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int filename2 ;
typedef int filename ;
typedef int UINT64 ;
typedef int LIST ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

bool FUNC_8(LIST *VAR_2, char *VAR_3, UINT64 VAR_4, UINT64 VAR_5)
{
 char VAR_6[16];
 bool VAR_7 = 0;
 char VAR_8[VAR_1];
 char VAR_9[VAR_1];
 bool VAR_10 = 0;
 bool VAR_11 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0 || FUNC_5(VAR_3) < 9)
 {
  return 0;
 }

 FUNC_4(VAR_6, sizeof(VAR_6), VAR_3);
 FUNC_6(VAR_6);

 VAR_6[8] = 0;

 if (FUNC_0(VAR_6, VAR_0, 8) == 0)
 {

  VAR_7 = 0;
 }
 else
 {

  VAR_7 = 1;
 }


 FUNC_4(VAR_8, sizeof(VAR_8), VAR_3 + 8);
 FUNC_7(VAR_8);


 if (VAR_8[0] == '\\' || VAR_8[0] == '/' || (VAR_8[1] == ':' && VAR_8[2] == '\\'))
 {
  VAR_10 = 1;
 }

 if (VAR_10 == 0)
 {

  FUNC_4(VAR_9, sizeof(VAR_9), "@");
  FUNC_3(VAR_9, sizeof(VAR_9), VAR_8);
  FUNC_4(VAR_8, sizeof(VAR_8), VAR_9);
 }

 VAR_11 = FUNC_1(VAR_2, VAR_8, VAR_4, VAR_5);

 if (VAR_7)
 {
  VAR_11 = FUNC_2(VAR_11);
 }

 return VAR_11;
}
