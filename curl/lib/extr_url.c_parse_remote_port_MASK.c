
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {unsigned short remote_port; } ;
struct TYPE_3__ {int uh; scalar_t__ allow_port; } ;
struct TYPE_4__ {scalar_t__ use_port; } ;
struct Curl_easy {TYPE_1__ state; TYPE_2__ set; } ;
typedef int portbuf ;
typedef int CURLcode ;
typedef scalar_t__ CURLUcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (char*,int,char*,unsigned short) ;

__attribute__((used)) static CURLcode FUNC_2(struct Curl_easy *VAR_3,
                                  struct connectdata *VAR_4)
{

  if(VAR_3->set.use_port && VAR_3->state.allow_port) {

    char VAR_5[16];
    CURLUcode VAR_6;
    VAR_4->remote_port = (unsigned short)VAR_3->set.use_port;
    FUNC_1(VAR_5, sizeof(VAR_5), "%d", VAR_4->remote_port);
    VAR_6 = FUNC_0(VAR_3->state.uh, VAR_2, VAR_5, 0);
    if(VAR_6)
      return VAR_1;
  }

  return VAR_0;
}
