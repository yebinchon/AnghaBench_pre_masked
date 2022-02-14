
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,...) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(CURL *VAR_4, const char *VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  FUNC_2("\nRTSP: OPTIONS %s\n", VAR_5);
  FUNC_1(VAR_4, VAR_2, VAR_5);
  FUNC_1(VAR_4, VAR_1, (long)VAR_3);
  FUNC_0(VAR_4);
}
