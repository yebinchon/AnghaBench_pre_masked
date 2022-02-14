
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timebuf ;
typedef scalar_t__ time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct input {int num; } ;
typedef int curl_infotype ;
typedef int CURL ;
 int FUNC_0 (char const*,int,unsigned char*,size_t,int) ;
 int FUNC_1 (int ,char*,char*,int,char*) ;
 int FUNC_2 (struct timeval*,int *) ;
 struct tm* FUNC_3 (scalar_t__*) ;
 int FUNC_4 (char*,int,char*,int,int,int,long) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static
int FUNC_6(CURL *VAR_1, curl_infotype VAR_2,
             char *VAR_3, size_t VAR_4,
             void *VAR_5)
{
  char VAR_6[60];
  const char *VAR_7;
  struct input *VAR_8 = (struct input *)VAR_5;
  int VAR_9 = VAR_8->num;
  static time_t VAR_10;
  static int VAR_11;
  struct timeval VAR_12;
  time_t VAR_13;
  struct tm *VAR_14;
  (void)VAR_1;

  FUNC_2(&VAR_12, ((void*)0));
  if(!VAR_11) {
    VAR_10 = FUNC_5(((void*)0)) - VAR_12.tv_sec;
    VAR_11 = 1;
  }
  VAR_13 = VAR_10 + VAR_12.tv_sec;
  VAR_14 = FUNC_3(&VAR_13);
  FUNC_4(VAR_6, sizeof(VAR_6), "%02d:%02d:%02d.%06ld",
           VAR_14->tm_hour, VAR_14->tm_min, VAR_14->tm_sec, (long)VAR_12.tv_usec);

  switch(VAR_2) {
  case 128:
    FUNC_1(VAR_0, "%s [%d] Info: %s", VAR_6, VAR_9, VAR_3);

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

  FUNC_0(VAR_7, VAR_9, (unsigned char *)VAR_3, VAR_4, 1);
  return 0;
}
