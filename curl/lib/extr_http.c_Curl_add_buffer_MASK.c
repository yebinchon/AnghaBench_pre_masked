
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size_used; char* buffer; int size_max; } ;
typedef TYPE_1__ Curl_send_buffer ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,void const*,size_t) ;

CURLcode FUNC_5(Curl_send_buffer **VAR_2, const void *VAR_3,
                         size_t VAR_4)
{
  char *VAR_5;
  Curl_send_buffer *VAR_6 = *VAR_2;

  if(~VAR_4 < VAR_6->size_used) {



    FUNC_0(VAR_6->buffer);
    FUNC_2(VAR_6);
    *VAR_2 = ((void*)0);
    return VAR_1;
  }

  if(!VAR_6->buffer ||
     ((VAR_6->size_used + VAR_4) > (VAR_6->size_max - 1))) {



    size_t VAR_7;

    if((VAR_4 > (size_t)-1 / 2) || (VAR_6->size_used > (size_t)-1 / 2) ||
       (~(VAR_4 * 2) < (VAR_6->size_used * 2)))
      VAR_7 = (size_t)-1;
    else
      VAR_7 = (VAR_6->size_used + VAR_4) * 2;

    if(VAR_6->buffer)

      VAR_5 = FUNC_1(VAR_6->buffer, VAR_7);
    else

      VAR_5 = FUNC_3(VAR_7);

    if(!VAR_5) {

      FUNC_2(VAR_6);
      *VAR_2 = ((void*)0);
      return VAR_1;
    }

    VAR_6->buffer = VAR_5;
    VAR_6->size_max = VAR_7;
  }
  FUNC_4(&VAR_6->buffer[VAR_6->size_used], VAR_3, VAR_4);

  VAR_6->size_used += VAR_4;

  return VAR_0;
}
