
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct IMAP {char* section; scalar_t__ mindex; scalar_t__ partial; scalar_t__ uid; } ;
struct TYPE_3__ {struct IMAP* protop; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct connectdata*,char*,scalar_t__,char*,...) ;
 int FUNC_2 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct IMAP *VAR_5 = VAR_3->data->req.protop;

  if(VAR_5->uid) {


    if(VAR_5->partial)
      VAR_4 = FUNC_1(VAR_3, "UID FETCH %s BODY[%s]<%s>",
                            VAR_5->uid,
                            VAR_5->section ? VAR_5->section : "",
                            VAR_5->partial);
    else
      VAR_4 = FUNC_1(VAR_3, "UID FETCH %s BODY[%s]",
                            VAR_5->uid,
                            VAR_5->section ? VAR_5->section : "");
  }
  else if(VAR_5->mindex) {


    if(VAR_5->partial)
      VAR_4 = FUNC_1(VAR_3, "FETCH %s BODY[%s]<%s>",
                            VAR_5->mindex,
                            VAR_5->section ? VAR_5->section : "",
                            VAR_5->partial);
    else
      VAR_4 = FUNC_1(VAR_3, "FETCH %s BODY[%s]",
                            VAR_5->mindex,
                            VAR_5->section ? VAR_5->section : "");
  }
  else {
        FUNC_0(VAR_3->data, "Cannot FETCH without a UID.");
        return VAR_1;
  }
  if(!VAR_4)
    FUNC_2(VAR_3, VAR_2);

  return VAR_4;
}
