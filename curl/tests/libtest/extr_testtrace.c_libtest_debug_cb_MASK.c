
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timebuf ;
typedef scalar_t__ time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; } ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct libtest_trace_cfg {int nohex; scalar_t__ tracetime; } ;
typedef int curl_infotype ;
typedef int CURL ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*,int ,unsigned char*,size_t,int ) ;
 struct tm* FUNC_2 (scalar_t__*) ;
 int FUNC_3 (char*,int,char*,int ,int ,int ,long) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 struct timeval FUNC_5 () ;

int FUNC_6(CURL *VAR_3, curl_infotype VAR_4,
                     unsigned char *VAR_5, size_t VAR_6,
                     void *VAR_7)
{

  struct libtest_trace_cfg *VAR_8 = VAR_7;
  const char *VAR_9;
  struct timeval VAR_10;
  char VAR_11[20];
  char *VAR_12;
  time_t VAR_13;

  (void)VAR_3;

  VAR_11[0] = '\0';
  VAR_12 = &VAR_11[0];

  if(VAR_8->tracetime) {
    struct tm *VAR_14;
    VAR_10 = FUNC_5();
    if(!VAR_1) {
      VAR_0 = FUNC_4(((void*)0)) - VAR_10.tv_sec;
      VAR_1 = 1;
    }
    VAR_13 = VAR_0 + VAR_10.tv_sec;
    VAR_14 = FUNC_2(&VAR_13);
    FUNC_3(VAR_11, sizeof(VAR_11), "%02d:%02d:%02d.%06ld ",
              VAR_14->tm_hour, VAR_14->tm_min, VAR_14->tm_sec, (long)VAR_10.tv_usec);
  }

  switch(VAR_4) {
  case 128:
    FUNC_0(VAR_2, "%s== Info: %s", VAR_12, (char *)VAR_5);

  default:
    return 0;

  case 131:
    VAR_9 = "=> Send header";
    break;
  case 133:
    VAR_9 = "=> Send data";
    break;
  case 129:
    VAR_9 = "=> Send SSL data";
    break;
  case 132:
    VAR_9 = "<= Recv header";
    break;
  case 134:
    VAR_9 = "<= Recv data";
    break;
  case 130:
    VAR_9 = "<= Recv SSL data";
    break;
  }

  FUNC_1(VAR_11, VAR_9, VAR_2, VAR_5, VAR_6, VAR_8->nohex);
  return 0;
}
