
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct imap_conn {scalar_t__ mailbox_uidvalidity; scalar_t__ mailbox; } ;
struct TYPE_10__ {int* tcpconnect; } ;
struct TYPE_7__ {struct imap_conn imapc; } ;
struct connectdata {struct Curl_easy* data; TYPE_5__ bits; TYPE_2__ proto; } ;
struct IMAP {scalar_t__ query; scalar_t__ mindex; scalar_t__ uid; scalar_t__ custom; scalar_t__ mailbox; scalar_t__ uidvalidity; int transfer; } ;
struct TYPE_8__ {scalar_t__ kind; } ;
struct TYPE_9__ {TYPE_3__ mimepost; scalar_t__ upload; scalar_t__ opt_no_body; } ;
struct TYPE_6__ {struct IMAP* protop; } ;
struct Curl_easy {TYPE_4__ set; TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct connectdata*,int*) ;
 scalar_t__ FUNC_2 (struct connectdata*) ;
 scalar_t__ FUNC_3 (struct connectdata*) ;
 scalar_t__ FUNC_4 (struct connectdata*) ;
 scalar_t__ FUNC_5 (struct connectdata*) ;
 scalar_t__ FUNC_6 (struct connectdata*) ;
 int FUNC_7 (struct Curl_easy*,char*) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static CURLcode FUNC_9(struct connectdata *VAR_6, bool *VAR_7,
                             bool *VAR_8)
{

  CURLcode VAR_9 = VAR_0;
  struct Curl_easy *VAR_10 = VAR_6->data;
  struct IMAP *VAR_11 = VAR_10->req.protop;
  struct imap_conn *VAR_12 = &VAR_6->proto.imapc;
  bool VAR_13 = VAR_1;

  FUNC_0(FUNC_7(VAR_6->data, "DO phase starts\n"));

  if(VAR_6->data->set.opt_no_body) {

    VAR_11->transfer = VAR_3;
  }

  *VAR_8 = VAR_1;



  if(VAR_11->mailbox && VAR_12->mailbox &&
     FUNC_8(VAR_11->mailbox, VAR_12->mailbox) &&
     (!VAR_11->uidvalidity || !VAR_12->mailbox_uidvalidity ||
      FUNC_8(VAR_11->uidvalidity, VAR_12->mailbox_uidvalidity)))
    VAR_13 = VAR_5;


  if(VAR_6->data->set.upload || VAR_10->set.mimepost.kind != VAR_4)

    VAR_9 = FUNC_2(VAR_6);
  else if(VAR_11->custom && (VAR_13 || !VAR_11->mailbox))

    VAR_9 = FUNC_4(VAR_6);
  else if(!VAR_11->custom && VAR_13 && (VAR_11->uid || VAR_11->mindex))

    VAR_9 = FUNC_3(VAR_6);
  else if(!VAR_11->custom && VAR_13 && VAR_11->query)

    VAR_9 = FUNC_5(VAR_6);
  else if(VAR_11->mailbox && !VAR_13 &&
         (VAR_11->custom || VAR_11->uid || VAR_11->mindex || VAR_11->query))

    VAR_9 = FUNC_6(VAR_6);
  else

    VAR_9 = FUNC_4(VAR_6);

  if(VAR_9)
    return VAR_9;


  VAR_9 = FUNC_1(VAR_6, VAR_8);

  *VAR_7 = VAR_6->bits.tcpconnect[VAR_2];

  if(*VAR_8)
    FUNC_0(FUNC_7(VAR_6->data, "DO phase is complete\n"));

  return VAR_9;
}
