
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,long) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(CURL *VAR_3, const char *VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  FUNC_2("\nRTSP: TEARDOWN %s\n", VAR_4);
  FUNC_1(VAR_3, VAR_1, (long)VAR_2);
  FUNC_0(VAR_3);
}
