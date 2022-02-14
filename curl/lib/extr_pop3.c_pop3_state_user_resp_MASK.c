
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pp; } ;
struct TYPE_4__ {TYPE_1__ pop3c; } ;
struct connectdata {char* passwd; TYPE_2__ proto; struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int pop3state ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct Curl_easy*,char*,int) ;
 int FUNC_2 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_3, int VAR_4,
                                     pop3state VAR_5)
{
  CURLcode VAR_6 = VAR_1;
  struct Curl_easy *VAR_7 = VAR_3->data;

  (void)VAR_5;

  if(VAR_4 != '+') {
    FUNC_1(VAR_7, "Access denied. %c", VAR_4);
    VAR_6 = VAR_0;
  }
  else

    VAR_6 = FUNC_0(&VAR_3->proto.pop3c.pp, "PASS %s",
                           VAR_3->passwd ? VAR_3->passwd : "");
  if(!VAR_6)
    FUNC_2(VAR_3, VAR_2);

  return VAR_6;
}
