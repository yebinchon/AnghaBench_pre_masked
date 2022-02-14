
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* probe; } ;
struct TYPE_6__ {TYPE_2__ doh; int newurl; int protop; } ;
struct Curl_easy {TYPE_3__ req; } ;
struct TYPE_4__ {int easy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct Curl_easy *VAR_0)
{
  FUNC_1(VAR_0->req.protop);
  FUNC_1(VAR_0->req.newurl);


  FUNC_0(&VAR_0->req.doh.probe[0].easy);
  FUNC_0(&VAR_0->req.doh.probe[1].easy);

}
