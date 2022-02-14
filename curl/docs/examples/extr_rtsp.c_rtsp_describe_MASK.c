
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,long) ;
 int FUNC_5 (char*,char const*) ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_6(CURL *VAR_6, const char *VAR_7,
                          const char *VAR_8)
{
  CURLcode VAR_9 = VAR_0;
  FILE *VAR_10 = FUNC_1(VAR_8, "wb");
  FUNC_5("\nRTSP: DESCRIBE %s\n", VAR_7);
  if(VAR_10 == ((void*)0)) {
    FUNC_2(VAR_4, "Could not open '%s' for writing\n", VAR_8);
    VAR_10 = VAR_5;
  }
  else {
    FUNC_5("Writing SDP to '%s'\n", VAR_8);
  }
  FUNC_4(VAR_6, VAR_2, VAR_10);
  FUNC_4(VAR_6, VAR_1, (long)VAR_3);
  FUNC_3(VAR_6);
  FUNC_4(VAR_6, VAR_2, VAR_5);
  if(VAR_10 != VAR_5) {
    FUNC_0(VAR_10);
  }
}
