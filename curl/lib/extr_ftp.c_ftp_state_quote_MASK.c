
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ftp_conn {int count1; int count2; int known_filesize; char* file; int pp; } ;
struct curl_slist {char* data; struct curl_slist* next; } ;
struct TYPE_5__ {struct ftp_conn ftpc; } ;
struct connectdata {TYPE_2__ proto; struct Curl_easy* data; } ;
struct FTP {int transfer; } ;
struct TYPE_6__ {int ignorecl; struct curl_slist* postquote; struct curl_slist* prequote; struct curl_slist* quote; } ;
struct TYPE_4__ {struct FTP* protop; } ;
struct Curl_easy {TYPE_3__ set; TYPE_1__ req; } ;
typedef int ftpstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct Curl_easy*,int) ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int FUNC_1 (int *,char*,char*) ;
 int VAR_6 ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*,int) ;
 int FUNC_4 (struct connectdata*,int) ;
 int FUNC_5 (struct connectdata*,int) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_7,
                                bool VAR_8,
                                ftpstate VAR_9)
{
  CURLcode VAR_10 = VAR_0;
  struct Curl_easy *VAR_11 = VAR_7->data;
  struct FTP *VAR_12 = VAR_11->req.protop;
  struct ftp_conn *VAR_13 = &VAR_7->proto.ftpc;
  bool VAR_14 = VAR_1;
  struct curl_slist *VAR_15;

  switch(VAR_9) {
  case 130:
  default:
    VAR_15 = VAR_11->set.quote;
    break;
  case 129:
  case 128:
    VAR_15 = VAR_11->set.prequote;
    break;
  case 131:
    VAR_15 = VAR_11->set.postquote;
    break;
  }







  if(VAR_8)
    VAR_13->count1 = 0;
  else
    VAR_13->count1++;

  if(VAR_15) {
    int VAR_16 = 0;


    while((VAR_16< VAR_13->count1) && VAR_15) {
      VAR_15 = VAR_15->next;
      VAR_16++;
    }
    if(VAR_15) {
      char *VAR_17 = VAR_15->data;
      if(VAR_17[0] == '*') {
        VAR_17++;
        VAR_13->count2 = 1;
      }
      else
        VAR_13->count2 = 0;

      FUNC_1(&VAR_13->pp, "%s", VAR_17);
      FUNC_5(VAR_7, VAR_9);
      VAR_14 = VAR_6;
    }
  }

  if(!VAR_14) {

    switch(VAR_9) {
    case 130:
    default:
      VAR_10 = FUNC_2(VAR_7);
      break;
    case 129:
      if(VAR_12->transfer != VAR_2)
        FUNC_5(VAR_7, VAR_5);
      else {
        if(VAR_13->known_filesize != -1) {
          FUNC_0(VAR_11, VAR_13->known_filesize);
          VAR_10 = FUNC_3(VAR_7, VAR_13->known_filesize);
        }
        else {
          if(VAR_11->set.ignorecl) {






            FUNC_1(&VAR_13->pp, "RETR %s", VAR_13->file);
            FUNC_5(VAR_7, VAR_3);
          }
          else {
            FUNC_1(&VAR_13->pp, "SIZE %s", VAR_13->file);
            FUNC_5(VAR_7, VAR_4);
          }
        }
      }
      break;
    case 128:
      VAR_10 = FUNC_4(VAR_7, VAR_1);
      break;
    case 131:
      break;
    }
  }

  return VAR_10;
}
