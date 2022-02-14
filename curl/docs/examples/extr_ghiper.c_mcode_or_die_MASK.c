
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLMcode ;







 scalar_t__ VAR_0 ;


 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(const char *VAR_1, CURLMcode VAR_2)
{
  if(VAR_0 != VAR_2) {
    const char *VAR_3;
    switch(VAR_2) {
    case 133: VAR_3 = "CURLM_BAD_HANDLE"; break;
    case 134: VAR_3 = "CURLM_BAD_EASY_HANDLE"; break;
    case 129: VAR_3 = "CURLM_OUT_OF_MEMORY"; break;
    case 131: VAR_3 = "CURLM_INTERNAL_ERROR"; break;
    case 132: VAR_3 = "CURLM_BAD_SOCKET"; break;
    case 128: VAR_3 = "CURLM_UNKNOWN_OPTION"; break;
    case 130: VAR_3 = "CURLM_LAST"; break;
    default: VAR_3 = "CURLM_unknown";
    }
    FUNC_0("ERROR: %s returns %s\n", VAR_1, VAR_3);
    FUNC_1(VAR_2);
  }
}
