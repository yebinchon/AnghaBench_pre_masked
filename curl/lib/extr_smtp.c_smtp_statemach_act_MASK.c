
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pingpong {scalar_t__ sendleft; } ;
struct smtp_conn {int state; struct pingpong pp; } ;
struct TYPE_3__ {struct smtp_conn smtpc; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; int * sock; } ;
struct TYPE_4__ {int httpcode; } ;
struct Curl_easy {TYPE_2__ info; } ;
typedef int curl_socket_t ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pingpong*) ;
 scalar_t__ FUNC_1 (struct pingpong*) ;
 scalar_t__ FUNC_2 (int ,struct pingpong*,int*,size_t*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct connectdata*) ;
 scalar_t__ FUNC_4 (struct connectdata*,int,int) ;
 scalar_t__ FUNC_5 (struct connectdata*,int,int) ;
 scalar_t__ FUNC_6 (struct connectdata*,int,int) ;
 scalar_t__ FUNC_7 (struct connectdata*,int,int) ;
 scalar_t__ FUNC_8 (struct connectdata*,int,int) ;
 scalar_t__ FUNC_9 (struct connectdata*,int,int) ;
 scalar_t__ FUNC_10 (struct connectdata*,int,int) ;
 scalar_t__ FUNC_11 (struct connectdata*,int,int) ;
 scalar_t__ FUNC_12 (struct connectdata*,int,int) ;
 scalar_t__ FUNC_13 (struct connectdata*,int,int) ;
 int FUNC_14 (struct connectdata*,int) ;

__attribute__((used)) static CURLcode FUNC_15(struct connectdata *VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  curl_socket_t VAR_6 = VAR_4->sock[VAR_1];
  struct Curl_easy *VAR_7 = VAR_4->data;
  int VAR_8;
  struct smtp_conn *VAR_9 = &VAR_4->proto.smtpc;
  struct pingpong *VAR_10 = &VAR_9->pp;
  size_t VAR_11 = 0;


  if(VAR_9->state == VAR_3)
    return FUNC_3(VAR_4);


  if(VAR_10->sendleft)
    return FUNC_0(VAR_10);

  do {

    VAR_5 = FUNC_2(VAR_6, VAR_10, &VAR_8, &VAR_11);
    if(VAR_5)
      return VAR_5;


    if(VAR_9->state != 131 && VAR_8 != 1)
      VAR_7->info.httpcode = VAR_8;

    if(!VAR_8)
      break;


    switch(VAR_9->state) {
    case 129:
      VAR_5 = FUNC_12(VAR_4, VAR_8, VAR_9->state);
      break;

    case 135:
      VAR_5 = FUNC_7(VAR_4, VAR_8, VAR_9->state);
      break;

    case 134:
      VAR_5 = FUNC_8(VAR_4, VAR_8, VAR_9->state);
      break;

    case 128:
      VAR_5 = FUNC_13(VAR_4, VAR_8, VAR_9->state);
      break;

    case 138:
      VAR_5 = FUNC_4(VAR_4, VAR_8, VAR_9->state);
      break;

    case 137:
      VAR_5 = FUNC_5(VAR_4, VAR_8, VAR_9->state);
      break;

    case 133:
      VAR_5 = FUNC_9(VAR_4, VAR_8, VAR_9->state);
      break;

    case 130:
      VAR_5 = FUNC_11(VAR_4, VAR_8, VAR_9->state);
      break;

    case 136:
      VAR_5 = FUNC_6(VAR_4, VAR_8, VAR_9->state);
      break;

    case 132:
      VAR_5 = FUNC_10(VAR_4, VAR_8, VAR_9->state);
      break;

    case 131:

    default:

      FUNC_14(VAR_4, VAR_2);
      break;
    }
  } while(!VAR_5 && VAR_9->state != VAR_2 && FUNC_1(VAR_10));

  return VAR_5;
}
