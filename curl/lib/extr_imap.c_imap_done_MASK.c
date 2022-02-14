
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int pp; } ;
struct TYPE_10__ {TYPE_4__ imapc; } ;
struct connectdata {TYPE_5__ proto; struct Curl_easy* data; } ;
struct IMAP {int transfer; scalar_t__ custom_params; scalar_t__ custom; scalar_t__ query; scalar_t__ partial; scalar_t__ section; scalar_t__ mindex; scalar_t__ uid; scalar_t__ uidvalidity; scalar_t__ mailbox; } ;
struct TYPE_7__ {scalar_t__ kind; } ;
struct TYPE_8__ {TYPE_2__ mimepost; scalar_t__ upload; int connect_only; } ;
struct TYPE_6__ {struct IMAP* protop; } ;
struct Curl_easy {TYPE_3__ set; TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct connectdata*,char*) ;
 scalar_t__ FUNC_3 (struct connectdata*,int ) ;
 int FUNC_4 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_6, CURLcode VAR_7,
                          bool VAR_8)
{
  CURLcode VAR_9 = VAR_0;
  struct Curl_easy *VAR_10 = VAR_6->data;
  struct IMAP *VAR_11 = VAR_10->req.protop;

  (void)VAR_8;

  if(!VAR_11)
    return VAR_0;

  if(VAR_7) {
    FUNC_2(VAR_6, "IMAP done with bad status");
    VAR_9 = VAR_7;
  }
  else if(!VAR_10->set.connect_only && !VAR_11->custom &&
          (VAR_11->uid || VAR_11->mindex || VAR_10->set.upload ||
          VAR_10->set.mimepost.kind != VAR_5)) {


    if(!VAR_10->set.upload && VAR_10->set.mimepost.kind == VAR_5)
      FUNC_4(VAR_6, VAR_4);
    else {

      VAR_9 = FUNC_0(&VAR_6->proto.imapc.pp, "%s", "");
      if(!VAR_9)
        FUNC_4(VAR_6, VAR_3);
    }


    if(!VAR_9)
      VAR_9 = FUNC_3(VAR_6, VAR_1);
  }


  FUNC_1(VAR_11->mailbox);
  FUNC_1(VAR_11->uidvalidity);
  FUNC_1(VAR_11->uid);
  FUNC_1(VAR_11->mindex);
  FUNC_1(VAR_11->section);
  FUNC_1(VAR_11->partial);
  FUNC_1(VAR_11->query);
  FUNC_1(VAR_11->custom);
  FUNC_1(VAR_11->custom_params);


  VAR_11->transfer = VAR_2;

  return VAR_9;
}
