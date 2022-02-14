
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tempbuf {int * buf; int len; int type; } ;
struct connectdata {struct Curl_easy* data; } ;
struct SingleRequest {int keepon; } ;
struct TYPE_2__ {unsigned int tempcount; int done; struct tempbuf* tempwrite; } ;
struct Curl_easy {TYPE_1__ state; scalar_t__ multi; struct connectdata* conn; struct SingleRequest req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct connectdata*,int ,int *,int ) ;
 int FUNC_1 (struct Curl_easy*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct Curl_easy*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;

CURLcode FUNC_5(struct Curl_easy *VAR_6, int VAR_7)
{
  struct SingleRequest *VAR_8 = &VAR_6->req;
  CURLcode VAR_9 = VAR_0;


  int VAR_10 = VAR_8->keepon &~ (VAR_4| VAR_5);


  VAR_10 |= ((VAR_7 & VAR_1)?VAR_4:0) |
    ((VAR_7 & VAR_2)?VAR_5:0);


  VAR_8->keepon = VAR_10;

  if(!(VAR_10 & VAR_4) && VAR_6->state.tempcount) {


    unsigned int VAR_11;
    unsigned int VAR_12 = VAR_6->state.tempcount;
    struct tempbuf VAR_13[3];
    struct connectdata *VAR_14 = VAR_6->conn;
    struct Curl_easy *VAR_15 = ((void*)0);


    for(VAR_11 = 0; VAR_11 < VAR_6->state.tempcount; VAR_11++) {
      VAR_13[VAR_11] = VAR_6->state.tempwrite[VAR_11];
      VAR_6->state.tempwrite[VAR_11].buf = ((void*)0);
    }
    VAR_6->state.tempcount = 0;


    if(VAR_14->data != VAR_6) {
      VAR_15 = VAR_14->data;
      VAR_14->data = VAR_6;
    }

    for(VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {


      if(!VAR_9)
        VAR_9 = FUNC_0(VAR_14, VAR_13[VAR_11].type, VAR_13[VAR_11].buf,
                                   VAR_13[VAR_11].len);
      FUNC_4(VAR_13[VAR_11].buf);
    }


    if(VAR_15)
      VAR_14->data = VAR_15;

    if(VAR_9)
      return VAR_9;
  }



  if((VAR_10 & (VAR_4|VAR_5)) !=
     (VAR_4|VAR_5)) {
    FUNC_1(VAR_6, 0, VAR_3);
    if(VAR_6->multi)
      FUNC_2(VAR_6->multi);
  }

  if(!VAR_6->state.done)


    FUNC_3(VAR_6);

  return VAR_9;
}
