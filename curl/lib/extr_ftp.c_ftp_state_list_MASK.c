
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pp; } ;
struct TYPE_8__ {TYPE_3__ ftpc; } ;
struct connectdata {TYPE_4__ proto; struct Curl_easy* data; } ;
struct FTP {scalar_t__ path; } ;
struct TYPE_6__ {scalar_t__ ftp_filemethod; char** str; scalar_t__ ftp_list_only; } ;
struct TYPE_5__ {struct FTP* protop; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (struct Curl_easy*,scalar_t__,int ,char**,int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 char* FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct connectdata*,int ) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_6)
{
  CURLcode VAR_7 = VAR_0;
  struct Curl_easy *VAR_8 = VAR_6->data;
  struct FTP *VAR_9 = VAR_8->req.protop;
  char *VAR_10 = ((void*)0);
  char *VAR_11;

  if((VAR_8->set.ftp_filemethod == VAR_2) && VAR_9->path) {

    const char *VAR_12 = ((void*)0);
    char *VAR_13 = ((void*)0);
    VAR_7 = FUNC_1(VAR_8, VAR_9->path, 0, &VAR_13, ((void*)0), VAR_5);
    if(VAR_7)
      return VAR_7;

    VAR_12 = FUNC_5(VAR_13, '/');
    if(VAR_12) {


      size_t VAR_14 = VAR_12 - VAR_13;
      if(VAR_14 == 0)
        ++VAR_14;

      VAR_10 = VAR_13;
      VAR_10[VAR_14] = '\0';
    }
    else
      FUNC_3(VAR_13);
  }

  VAR_11 = FUNC_2("%s%s%s",
                VAR_8->set.str[VAR_4]?
                VAR_8->set.str[VAR_4]:
                (VAR_8->set.ftp_list_only?"NLST":"LIST"),
                VAR_10? " ": "",
                VAR_10? VAR_10: "");
  FUNC_3(VAR_10);

  if(!VAR_11)
    return VAR_1;

  VAR_7 = FUNC_0(&VAR_6->proto.ftpc.pp, "%s", VAR_11);
  FUNC_3(VAR_11);

  if(VAR_7)
    return VAR_7;

  FUNC_4(VAR_6, VAR_3);

  return VAR_7;
}
