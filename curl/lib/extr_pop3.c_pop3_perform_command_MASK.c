
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pp; } ;
struct TYPE_8__ {TYPE_3__ pop3c; } ;
struct connectdata {TYPE_4__ proto; struct Curl_easy* data; } ;
struct POP3 {char* id; char* custom; int transfer; } ;
struct TYPE_6__ {scalar_t__ ftp_list_only; } ;
struct TYPE_5__ {struct POP3* protop; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct Curl_easy *VAR_5 = VAR_3->data;
  struct POP3 *VAR_6 = VAR_5->req.protop;
  const char *VAR_7 = ((void*)0);


  if(VAR_6->id[0] == '\0' || VAR_3->data->set.ftp_list_only) {
    VAR_7 = "LIST";

    if(VAR_6->id[0] != '\0')

      VAR_6->transfer = VAR_1;
  }
  else
    VAR_7 = "RETR";


  if(VAR_6->id[0] != '\0')
    VAR_4 = FUNC_0(&VAR_3->proto.pop3c.pp, "%s %s",
                           (VAR_6->custom && VAR_6->custom[0] != '\0' ?
                            VAR_6->custom : VAR_7), VAR_6->id);
  else
    VAR_4 = FUNC_0(&VAR_3->proto.pop3c.pp, "%s",
                           (VAR_6->custom && VAR_6->custom[0] != '\0' ?
                            VAR_6->custom : VAR_7));

  if(!VAR_4)
    FUNC_1(VAR_3, VAR_2);

  return VAR_4;
}
