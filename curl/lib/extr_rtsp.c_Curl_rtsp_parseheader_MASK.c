
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct RTSP {long CSeq_recv; } ;
struct TYPE_6__ {char** str; } ;
struct TYPE_5__ {long rtsp_CSeq_recv; } ;
struct TYPE_4__ {struct RTSP* protop; } ;
struct Curl_easy {TYPE_3__ set; TYPE_2__ state; TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char) ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (struct Curl_easy*,char*,...) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,long*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;

CURLcode FUNC_8(struct connectdata *VAR_5,
                               char *VAR_6)
{
  struct Curl_easy *VAR_7 = VAR_5->data;
  long VAR_8 = 0;

  if(FUNC_1("CSeq:", VAR_6)) {

    int VAR_9 = FUNC_5(&VAR_6[4], ": %ld", &VAR_8);
    if(VAR_9 == 1) {
      struct RTSP *VAR_10 = VAR_7->req.protop;
      VAR_10->CSeq_recv = VAR_8;
      VAR_7->state.rtsp_CSeq_recv = VAR_8;
    }
    else {
      FUNC_2(VAR_7, "Unable to read the CSeq header: [%s]", VAR_6);
      return VAR_2;
    }
  }
  else if(FUNC_1("Session:", VAR_6)) {
    char *VAR_11;


    VAR_11 = VAR_6 + 8;
    while(*VAR_11 && FUNC_0(*VAR_11))
      VAR_11++;

    if(!*VAR_11) {
      FUNC_2(VAR_7, "Got a blank Session ID");
    }
    else if(VAR_7->set.str[VAR_4]) {

      if(FUNC_7(VAR_11, VAR_7->set.str[VAR_4],
                 FUNC_6(VAR_7->set.str[VAR_4])) != 0) {
        FUNC_2(VAR_7, "Got RTSP Session ID Line [%s], but wanted ID [%s]",
              VAR_11, VAR_7->set.str[VAR_4]);
        return VAR_3;
      }
    }
    else {







      char *VAR_12 = VAR_11;
      while(*VAR_12 && *VAR_12 != ';' && !FUNC_0(*VAR_12))
        VAR_12++;


      VAR_7->set.str[VAR_4] = FUNC_3(VAR_12 - VAR_11 + 1);
      if(VAR_7->set.str[VAR_4] == ((void*)0))
        return VAR_1;
      FUNC_4(VAR_7->set.str[VAR_4], VAR_11, VAR_12 - VAR_11);
      (VAR_7->set.str[VAR_4])[VAR_12 - VAR_11] = '\0';
    }
  }
  return VAR_0;
}
