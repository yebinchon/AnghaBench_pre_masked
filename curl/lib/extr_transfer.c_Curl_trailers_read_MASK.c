
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t trailers_bytes_sent; TYPE_2__* trailers_buf; } ;
struct Curl_easy {TYPE_1__ state; } ;
struct TYPE_4__ {size_t size_used; int * buffer; } ;
typedef TYPE_2__ Curl_send_buffer ;


 int FUNC_0 (char*,int *,size_t) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_0, size_t VAR_1, size_t VAR_2,
                                 void *VAR_3)
{
  struct Curl_easy *VAR_4 = (struct Curl_easy *)VAR_3;
  Curl_send_buffer *VAR_5 = VAR_4->state.trailers_buf;
  size_t VAR_6 = VAR_5->size_used-VAR_4->state.trailers_bytes_sent;
  size_t VAR_7 = (VAR_1*VAR_2 < VAR_6) ? VAR_1*VAR_2 : VAR_6;
  if(VAR_7) {
    FUNC_0(VAR_0,
           &VAR_5->buffer[VAR_4->state.trailers_bytes_sent],
           VAR_7);
    VAR_4->state.trailers_bytes_sent += VAR_7;
  }
  return VAR_7;
}
