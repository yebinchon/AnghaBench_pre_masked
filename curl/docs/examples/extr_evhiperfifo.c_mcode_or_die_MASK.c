
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLMcode ;







 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2, CURLMcode VAR_3)
{
  if(VAR_0 != VAR_3) {
    const char *VAR_4;
    switch(VAR_3) {
    case 133:
      VAR_4 = "CURLM_BAD_HANDLE";
      break;
    case 134:
      VAR_4 = "CURLM_BAD_EASY_HANDLE";
      break;
    case 129:
      VAR_4 = "CURLM_OUT_OF_MEMORY";
      break;
    case 131:
      VAR_4 = "CURLM_INTERNAL_ERROR";
      break;
    case 128:
      VAR_4 = "CURLM_UNKNOWN_OPTION";
      break;
    case 130:
      VAR_4 = "CURLM_LAST";
      break;
    default:
      VAR_4 = "CURLM_unknown";
      break;
    case 132:
      VAR_4 = "CURLM_BAD_SOCKET";
      FUNC_1(VAR_1, "ERROR: %s returns %s\n", VAR_2, VAR_4);

      return;
    }
    FUNC_1(VAR_1, "ERROR: %s returns %s\n", VAR_2, VAR_4);
    FUNC_0(VAR_3);
  }
}
