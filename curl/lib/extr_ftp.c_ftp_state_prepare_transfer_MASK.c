
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* file; int pp; } ;
struct TYPE_8__ {TYPE_3__ ftpc; } ;
struct connectdata {TYPE_4__ proto; struct Curl_easy* data; } ;
struct FTP {scalar_t__ transfer; } ;
struct TYPE_6__ {char** str; scalar_t__ upload; scalar_t__ ftp_list_only; scalar_t__ ftp_use_pret; scalar_t__ ftp_use_port; } ;
struct TYPE_5__ {struct FTP* protop; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,char*) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct connectdata*,int ,int ) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*,int ) ;
 int FUNC_4 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_7)
{
  CURLcode VAR_8 = VAR_0;
  struct FTP *VAR_9 = VAR_7->data->req.protop;
  struct Curl_easy *VAR_10 = VAR_7->data;

  if(VAR_9->transfer != VAR_2) {



    FUNC_4(VAR_7, VAR_4);
    VAR_8 = FUNC_1(VAR_7, VAR_6, VAR_4);
  }
  else if(VAR_10->set.ftp_use_port) {

    VAR_8 = FUNC_3(VAR_7, VAR_1);
  }
  else {

    if(VAR_10->set.ftp_use_pret) {


      if(!VAR_7->proto.ftpc.file) {
        FUNC_0(&VAR_7->proto.ftpc.pp, "PRET %s",
                VAR_10->set.str[VAR_5]?
                VAR_10->set.str[VAR_5]:
                (VAR_10->set.ftp_list_only?"NLST":"LIST"));
      }
      else if(VAR_10->set.upload) {
        FUNC_0(&VAR_7->proto.ftpc.pp, "PRET STOR %s", VAR_7->proto.ftpc.file);
      }
      else {
        FUNC_0(&VAR_7->proto.ftpc.pp, "PRET RETR %s", VAR_7->proto.ftpc.file);
      }
      FUNC_4(VAR_7, VAR_3);
    }
    else {
      VAR_8 = FUNC_2(VAR_7);
    }
  }
  return VAR_8;
}
