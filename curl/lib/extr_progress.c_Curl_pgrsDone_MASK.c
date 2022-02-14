
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct TYPE_4__ {int flags; scalar_t__ speeder_c; int callback; scalar_t__ lastshow; } ;
struct TYPE_3__ {int err; } ;
struct Curl_easy {TYPE_2__ progress; TYPE_1__ set; } ;


 int FUNC_0 (struct connectdata*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct connectdata *VAR_1)
{
  int VAR_2;
  struct Curl_easy *VAR_3 = VAR_1->data;
  VAR_3->progress.lastshow = 0;
  VAR_2 = FUNC_0(VAR_1);
  if(VAR_2)
    return VAR_2;

  if(!(VAR_3->progress.flags & VAR_0) &&
     !VAR_3->progress.callback)


    FUNC_1(VAR_3->set.err, "\n");

  VAR_3->progress.speeder_c = 0;
  return 0;
}
