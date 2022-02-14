
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int trace_ascii; } ;
typedef int curl_infotype ;
typedef int CURL ;
 int FUNC_0 (char const*,int ,unsigned char*,size_t,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static
int FUNC_2(CURL *VAR_1, curl_infotype VAR_2,
             char *VAR_3, size_t VAR_4,
             void *VAR_5)
{
  struct data *VAR_6 = (struct data *)VAR_5;
  const char *VAR_7;
  (void)VAR_1;

  switch(VAR_2) {
  case 128:
    FUNC_1(VAR_0, "== Info: %s", (char *)VAR_3);

  default:
    return 0;

  case 131:
    VAR_7 = "=> Send header";
    break;
  case 133:
    VAR_7 = "=> Send data";
    break;
  case 129:
    VAR_7 = "=> Send SSL data";
    break;
  case 132:
    VAR_7 = "<= Recv header";
    break;
  case 134:
    VAR_7 = "<= Recv data";
    break;
  case 130:
    VAR_7 = "<= Recv SSL data";
    break;
  }

  FUNC_0(VAR_7, VAR_0, (unsigned char *)VAR_3, VAR_4, VAR_6->trace_ascii);
  return 0;
}
