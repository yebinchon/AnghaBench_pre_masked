
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t trailers_bytes_sent; TYPE_2__* trailers_buf; } ;
struct Curl_easy {TYPE_1__ state; } ;
struct TYPE_4__ {size_t size_used; } ;
typedef TYPE_2__ Curl_send_buffer ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0)
{
  struct Curl_easy *VAR_1 = (struct Curl_easy *)VAR_0;
  Curl_send_buffer *VAR_2 = VAR_1->state.trailers_buf;
  return VAR_2->size_used - VAR_1->state.trailers_bytes_sent;
}
