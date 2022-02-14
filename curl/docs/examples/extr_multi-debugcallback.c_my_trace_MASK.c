
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_infotype ;
typedef int CURL ;







 int VAR_0 ;
 int FUNC_0 (char const*,int ,unsigned char*,size_t,int ) ;
 int FUNC_1 (int ,char*,unsigned char*) ;
 int VAR_1 ;

__attribute__((used)) static
int FUNC_2(CURL *VAR_2, curl_infotype VAR_3,
             unsigned char *VAR_4, size_t VAR_5,
             void *VAR_6)
{
  const char *VAR_7;

  (void)VAR_6;
  (void)VAR_2;

  switch(VAR_3) {
  case 128:
    FUNC_1(VAR_1, "== Info: %s", VAR_4);

  default:
    return 0;

  case 129:
    VAR_7 = "=> Send header";
    break;
  case 131:
    VAR_7 = "=> Send data";
    break;
  case 130:
    VAR_7 = "<= Recv header";
    break;
  case 132:
    VAR_7 = "<= Recv data";
    break;
  }

  FUNC_0(VAR_7, VAR_1, VAR_4, VAR_5, VAR_0);
  return 0;
}
