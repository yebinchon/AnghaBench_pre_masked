
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct POP3 {int transfer; int custom; int id; } ;
struct TYPE_2__ {struct POP3* protop; } ;
struct Curl_easy {TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct connectdata*,char*) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_2, CURLcode VAR_3,
                          bool VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  struct Curl_easy *VAR_6 = VAR_2->data;
  struct POP3 *VAR_7 = VAR_6->req.protop;

  (void)VAR_4;

  if(!VAR_7)
    return VAR_0;

  if(VAR_3) {
    FUNC_1(VAR_2, "POP3 done with bad status");
    VAR_5 = VAR_3;
  }


  FUNC_0(VAR_7->id);
  FUNC_0(VAR_7->custom);


  VAR_7->transfer = VAR_1;

  return VAR_5;
}
