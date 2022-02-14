
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,...) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(CURL *VAR_5, const char *VAR_6, const char *VAR_7)
{
  CURLcode VAR_8 = VAR_0;
  FUNC_2("\nRTSP: PLAY %s\n", VAR_6);
  FUNC_1(VAR_5, VAR_3, VAR_6);
  FUNC_1(VAR_5, VAR_1, VAR_7);
  FUNC_1(VAR_5, VAR_2, (long)VAR_4);
  FUNC_0(VAR_5);


  FUNC_1(VAR_5, VAR_1, ((void*)0));
}
