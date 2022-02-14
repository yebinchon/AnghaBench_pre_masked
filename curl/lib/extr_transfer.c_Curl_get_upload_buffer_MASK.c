
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ulbuf; } ;
struct TYPE_3__ {int upload_buffer_size; } ;
struct Curl_easy {TYPE_2__ state; TYPE_1__ set; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

CURLcode FUNC_1(struct Curl_easy *VAR_2)
{
  if(!VAR_2->state.ulbuf) {
    VAR_2->state.ulbuf = FUNC_0(VAR_2->set.upload_buffer_size);
    if(!VAR_2->state.ulbuf)
      return VAR_1;
  }
  return VAR_0;
}
