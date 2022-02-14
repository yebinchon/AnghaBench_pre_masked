
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const char *VAR_9, CURLMcode VAR_10)
{
  if(VAR_5 != VAR_10) {
    const char *VAR_11;
    switch(VAR_10) {
      FUNC_2(VAR_1); break;
      FUNC_2(VAR_0); break;
      FUNC_2(VAR_6); break;
      FUNC_2(VAR_3); break;
      FUNC_2(VAR_7); break;
      FUNC_2(VAR_4); break;
      default: VAR_11 = "CURLM_unknown"; break;
      FUNC_2(VAR_2);
      FUNC_1(VAR_8, "ERROR: %s returns %s\n", VAR_9, VAR_11);

      return;
    }
    FUNC_1(VAR_8, "ERROR: %s returns %s\n", VAR_9, VAR_11);
    FUNC_0(VAR_10);
  }
}
