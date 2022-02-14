
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pingpong {scalar_t__ sendleft; } ;
struct imap_conn {int state; struct pingpong pp; } ;
struct TYPE_2__ {struct imap_conn imapc; } ;
struct connectdata {TYPE_1__ proto; int * sock; } ;
typedef int curl_socket_t ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct pingpong*) ;
 scalar_t__ FUNC_1 (struct pingpong*) ;
 scalar_t__ FUNC_2 (int ,struct pingpong*,int*,size_t*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 scalar_t__ FUNC_14 (struct connectdata*,int,int) ;
 int FUNC_15 (struct connectdata*,int) ;

__attribute__((used)) static CURLcode FUNC_16(struct connectdata *VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  curl_socket_t VAR_7 = VAR_5->sock[VAR_2];
  int VAR_8;
  struct imap_conn *VAR_9 = &VAR_5->proto.imapc;
  struct pingpong *VAR_10 = &VAR_9->pp;
  size_t VAR_11 = 0;


  if(VAR_9->state == VAR_4)
    return FUNC_3(VAR_5);


  if(VAR_10->sendleft)
    return FUNC_0(VAR_10);

  do {

    VAR_6 = FUNC_2(VAR_7, VAR_10, &VAR_8, &VAR_11);
    if(VAR_6)
      return VAR_6;


    if(VAR_8 == -1)
      return VAR_1;

    if(!VAR_8)
      break;


    switch(VAR_9->state) {
    case 129:
      VAR_6 = FUNC_13(VAR_5, VAR_8, VAR_9->state);
      break;

    case 137:
      VAR_6 = FUNC_7(VAR_5, VAR_8, VAR_9->state);
      break;

    case 128:
      VAR_6 = FUNC_14(VAR_5, VAR_8, VAR_9->state);
      break;

    case 138:
      VAR_6 = FUNC_6(VAR_5, VAR_8, VAR_9->state);
      break;

    case 133:
      VAR_6 = FUNC_11(VAR_5, VAR_8, VAR_9->state);
      break;

    case 134:
    case 131:
      VAR_6 = FUNC_10(VAR_5, VAR_8, VAR_9->state);
      break;

    case 130:
      VAR_6 = FUNC_12(VAR_5, VAR_8, VAR_9->state);
      break;

    case 136:
      VAR_6 = FUNC_9(VAR_5, VAR_8, VAR_9->state);
      break;

    case 135:
      VAR_6 = FUNC_8(VAR_5, VAR_8, VAR_9->state);
      break;

    case 140:
      VAR_6 = FUNC_5(VAR_5, VAR_8, VAR_9->state);
      break;

    case 139:
      VAR_6 = FUNC_4(VAR_5, VAR_8, VAR_9->state);
      break;

    case 132:

    default:

      FUNC_15(VAR_5, VAR_3);
      break;
    }
  } while(!VAR_6 && VAR_9->state != VAR_3 && FUNC_1(VAR_10));

  return VAR_6;
}
