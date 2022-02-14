
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_infotype ;
typedef int CURL ;
 int FUNC_0 (char const*,unsigned char*,size_t,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static
int FUNC_2(CURL *VAR_1, curl_infotype VAR_2,
             char *VAR_3, size_t VAR_4,
             void *VAR_5)
{
  const char *VAR_6;
  (void)VAR_1;
  (void)VAR_5;
  switch(VAR_2) {
  case 128:
    FUNC_1(VAR_0, "== Info: %s", VAR_3);

  default:
    return 0;

  case 131:
    VAR_6 = "=> Send header";
    break;
  case 133:
    VAR_6 = "=> Send data";
    break;
  case 129:
    VAR_6 = "=> Send SSL data";
    break;
  case 132:
    VAR_6 = "<= Recv header";
    break;
  case 134:
    VAR_6 = "<= Recv data";
    break;
  case 130:
    VAR_6 = "<= Recv SSL data";
    break;
  }

  FUNC_0(VAR_6, (unsigned char *)VAR_3, VAR_4, 1);
  return 0;
}
