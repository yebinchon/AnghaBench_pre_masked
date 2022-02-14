
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct UrlState {int tempcount; TYPE_1__* tempwrite; } ;
struct SingleRequest {int keepon; } ;
struct Curl_easy {struct UrlState state; struct SingleRequest req; } ;
struct TYPE_2__ {int type; size_t len; char* buf; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct Curl_easy*,char*,size_t,int) ;
 int FUNC_4 (char*,char const*,size_t) ;
 char* FUNC_5 (char*,size_t) ;

__attribute__((used)) static CURLcode FUNC_6(struct Curl_easy *VAR_5,
                           int VAR_6,
                           const char *VAR_7,
                           size_t VAR_8)
{



  struct SingleRequest *VAR_9 = &VAR_5->req;
  struct UrlState *VAR_10 = &VAR_5->state;
  char *VAR_11;
  unsigned int VAR_12;
  bool VAR_13 = VAR_4;

  if(VAR_10->tempcount) {
    for(VAR_12 = 0; VAR_12< VAR_10->tempcount; VAR_12++) {
      if(VAR_10->tempwrite[VAR_12].type == VAR_6) {

        VAR_13 = VAR_2;
        break;
      }
    }
    FUNC_1(VAR_12 < 3);
  }
  else
    VAR_12 = 0;

  if(!VAR_13) {



    size_t VAR_14 = VAR_8 + VAR_10->tempwrite[VAR_12].len;

    char *VAR_15 = FUNC_5(VAR_10->tempwrite[VAR_12].buf, VAR_14);
    if(!VAR_15)
      return VAR_1;

    FUNC_4(VAR_15 + VAR_10->tempwrite[VAR_12].len, VAR_7, VAR_8);


    VAR_10->tempwrite[VAR_12].buf = VAR_15;
    VAR_10->tempwrite[VAR_12].len = VAR_14;
  }
  else {
    VAR_11 = FUNC_0(VAR_7, VAR_8);
    if(!VAR_11)
      return VAR_1;


    VAR_10->tempwrite[VAR_12].buf = VAR_11;
    VAR_10->tempwrite[VAR_12].len = VAR_8;
    VAR_10->tempwrite[VAR_12].type = VAR_6;

    if(VAR_13)
      VAR_10->tempcount++;
  }


  VAR_9->keepon |= VAR_3;

  FUNC_2(FUNC_3(VAR_5, "Paused %zu bytes in buffer for type %02x\n",
               VAR_8, VAR_6));

  return VAR_0;
}
