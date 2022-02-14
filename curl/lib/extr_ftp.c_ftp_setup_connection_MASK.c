
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int known_filesize; } ;
struct TYPE_16__ {TYPE_7__ ftpc; } ;
struct TYPE_13__ {void* type_set; } ;
struct TYPE_12__ {int * rawalloc; } ;
struct connectdata {TYPE_8__ proto; int passwd; int user; TYPE_5__ bits; TYPE_4__ host; struct Curl_easy* data; } ;
struct FTP {int passwd; int user; scalar_t__ downloadsize; int transfer; int * path; } ;
struct TYPE_14__ {void* prefer_ascii; void* ftp_list_only; } ;
struct TYPE_10__ {int * path; } ;
struct TYPE_11__ {TYPE_2__ up; } ;
struct TYPE_9__ {struct FTP* protop; } ;
struct Curl_easy {TYPE_6__ set; TYPE_3__ state; TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_0 (char) ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 struct FTP* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (int *,char*) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_6)
{
  struct Curl_easy *VAR_7 = VAR_6->data;
  char *VAR_8;
  struct FTP *VAR_9;

  VAR_6->data->req.protop = VAR_9 = FUNC_1(sizeof(struct FTP), 1);
  if(((void*)0) == VAR_9)
    return VAR_1;

  VAR_9->path = &VAR_7->state.up.path[1];



  VAR_8 = FUNC_3(VAR_9->path, ";type=");

  if(!VAR_8)
    VAR_8 = FUNC_3(VAR_6->host.rawalloc, ";type=");

  if(VAR_8) {
    char VAR_10;
    *VAR_8 = 0;
    VAR_10 = FUNC_0(VAR_8[6]);
    VAR_6->bits.type_set = VAR_5;

    switch(VAR_10) {
    case 'A':
      VAR_7->set.prefer_ascii = VAR_5;
      break;

    case 'D':
      VAR_7->set.ftp_list_only = VAR_5;
      break;

    case 'I':
    default:

      VAR_7->set.prefer_ascii = VAR_3;
      break;
    }
  }


  VAR_9->transfer = VAR_4;
  VAR_9->downloadsize = 0;





  VAR_9->user = VAR_6->user;
  VAR_9->passwd = VAR_6->passwd;
  if(FUNC_2(VAR_9->user))
    return VAR_2;
  if(FUNC_2(VAR_9->passwd))
    return VAR_2;

  VAR_6->proto.ftpc.known_filesize = -1;

  return VAR_0;
}
