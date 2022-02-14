
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pingpong {char* sendthis; int response; scalar_t__ sendleft; scalar_t__ sendsize; int conn; } ;
struct TYPE_8__ {struct pingpong pp; } ;
struct TYPE_9__ {TYPE_2__ smtpc; } ;
struct connectdata {int writesockfd; struct Curl_easy* data; TYPE_3__ proto; } ;
struct SMTP {int transfer; scalar_t__ trailing_crlf; int custom; } ;
struct TYPE_12__ {int infilesize; } ;
struct TYPE_10__ {scalar_t__ kind; } ;
struct TYPE_11__ {TYPE_4__ mimepost; scalar_t__ upload; scalar_t__ mail_rcpt; int connect_only; } ;
struct TYPE_7__ {struct SMTP* protop; } ;
struct Curl_easy {TYPE_6__ state; TYPE_5__ set; TYPE_1__ req; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct connectdata*,int ,char*,scalar_t__,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct connectdata*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct connectdata*,int ) ;
 int FUNC_6 (struct connectdata*,int ) ;
 char* FUNC_7 (int *) ;

__attribute__((used)) static CURLcode FUNC_8(struct connectdata *VAR_7, CURLcode VAR_8,
                          bool VAR_9)
{
  CURLcode VAR_10 = VAR_0;
  struct Curl_easy *VAR_11 = VAR_7->data;
  struct SMTP *VAR_12 = VAR_11->req.protop;
  struct pingpong *VAR_13 = &VAR_7->proto.smtpc.pp;
  char *VAR_14;
  ssize_t VAR_15;
  ssize_t VAR_16;

  (void)VAR_9;

  if(!VAR_12 || !VAR_13->conn)
    return VAR_0;


  FUNC_1(VAR_12->custom);

  if(VAR_8) {
    FUNC_3(VAR_7, "SMTP done with bad status");
    VAR_10 = VAR_8;
  }
  else if(!VAR_11->set.connect_only && VAR_11->set.mail_rcpt &&
          (VAR_11->set.upload || VAR_11->set.mimepost.kind)) {
    if(VAR_12->trailing_crlf || !VAR_7->data->state.infilesize) {
      VAR_14 = FUNC_7(&VAR_4[2]);
      VAR_15 = VAR_5 - 2;
    }
    else {
      VAR_14 = FUNC_7(VAR_4);
      VAR_15 = VAR_5;
    }

    if(!VAR_14)
      return VAR_1;


    VAR_10 = FUNC_2(VAR_7, VAR_7->writesockfd, VAR_14, VAR_15, &VAR_16);
    if(VAR_10) {
      FUNC_4(VAR_14);
      return VAR_10;
    }

    if(VAR_16 != VAR_15) {


      VAR_13->sendthis = VAR_14;
      VAR_13->sendsize = VAR_15;
      VAR_13->sendleft = VAR_15 - VAR_16;
    }
    else {

      VAR_13->response = FUNC_0();

      FUNC_4(VAR_14);
    }

    FUNC_6(VAR_7, VAR_6);


    VAR_10 = FUNC_5(VAR_7, VAR_2);
  }


  VAR_12->transfer = VAR_3;

  return VAR_10;
}
