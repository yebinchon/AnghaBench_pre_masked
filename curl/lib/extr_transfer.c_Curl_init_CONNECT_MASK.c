
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int in_set; int fread_func_set; } ;
struct TYPE_3__ {int in; int fread_func; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ state; } ;



void FUNC_0(struct Curl_easy *VAR_0)
{
  VAR_0->state.fread_func = VAR_0->set.fread_func_set;
  VAR_0->state.in = VAR_0->set.in_set;
}
