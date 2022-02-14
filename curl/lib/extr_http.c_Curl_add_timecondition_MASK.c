
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm {int tm_wday; size_t tm_mon; int tm_sec; int tm_min; int tm_hour; scalar_t__ tm_year; int tm_mday; } ;
struct connectdata {struct Curl_easy* data; } ;
struct TYPE_2__ {int timecondition; int timevalue; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef int datestr ;
typedef int Curl_send_buffer ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 scalar_t__ FUNC_0 (int **,char*,int ) ;
 scalar_t__ FUNC_1 (struct connectdata const*,char const*) ;
 scalar_t__ FUNC_2 (int ,struct tm*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (struct Curl_easy*,char*) ;
 int FUNC_4 (char*,int,char*,char const*,int ,int ,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_5 (char*) ;

CURLcode FUNC_6(const struct connectdata *VAR_5,
                                Curl_send_buffer *VAR_6)
{
  struct Curl_easy *VAR_7 = VAR_5->data;
  const struct tm *VAR_8;
  struct tm VAR_9;
  CURLcode VAR_10;
  char VAR_11[80];
  const char *VAR_12;

  if(VAR_7->set.timecondition == VAR_2)

    return VAR_1;

  VAR_10 = FUNC_2(VAR_7->set.timevalue, &VAR_9);
  if(VAR_10) {
    FUNC_3(VAR_7, "Invalid TIMEVALUE");
    return VAR_10;
  }
  VAR_8 = &VAR_9;

  switch(VAR_7->set.timecondition) {
  default:
    return VAR_0;

  case 130:
    VAR_12 = "If-Modified-Since";
    break;
  case 129:
    VAR_12 = "If-Unmodified-Since";
    break;
  case 128:
    VAR_12 = "Last-Modified";
    break;
  }

  if(FUNC_1(VAR_5, VAR_12)) {

    return VAR_1;
  }
  FUNC_4(VAR_11, sizeof(VAR_11),
            "%s: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
            VAR_12,
            VAR_4[VAR_8->tm_wday?VAR_8->tm_wday-1:6],
            VAR_8->tm_mday,
            VAR_3[VAR_8->tm_mon],
            VAR_8->tm_year + 1900,
            VAR_8->tm_hour,
            VAR_8->tm_min,
            VAR_8->tm_sec);

  VAR_10 = FUNC_0(&VAR_6, VAR_11, FUNC_5(VAR_11));

  return VAR_10;
}
