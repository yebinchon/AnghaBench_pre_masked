
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bufbeg; scalar_t__ bufend; int pos; int* buf; } ;
typedef TYPE_1__ mime_encoder_state ;
struct TYPE_5__ {scalar_t__ easy; TYPE_1__ encstate; } ;
typedef TYPE_2__ curl_mimepart ;
typedef scalar_t__ CURLcode ;


 scalar_t__ FUNC_0 (scalar_t__,char*,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 void** VAR_2 ;

__attribute__((used)) static size_t FUNC_1(char *VAR_3, size_t VAR_4, bool VAR_5,
                                curl_mimepart *VAR_6)
{
  mime_encoder_state *VAR_7 = &VAR_6->encstate;
  size_t VAR_8 = 0;
  int VAR_9;
  char *VAR_10 = VAR_3;

  while(VAR_7->bufbeg < VAR_7->bufend) {

    if(VAR_7->pos > VAR_0 - 4) {

      if(VAR_4 < 2)
        break;
      *VAR_10++ = '\r';
      *VAR_10++ = '\n';
      VAR_7->pos = 0;
      VAR_8 += 2;
      VAR_4 -= 2;
    }


    if(VAR_4 < 4 || VAR_7->bufend - VAR_7->bufbeg < 3)
      break;


    VAR_9 = VAR_7->buf[VAR_7->bufbeg++] & 0xFF;
    VAR_9 = (VAR_9 << 8) | (VAR_7->buf[VAR_7->bufbeg++] & 0xFF);
    VAR_9 = (VAR_9 << 8) | (VAR_7->buf[VAR_7->bufbeg++] & 0xFF);
    *VAR_10++ = VAR_2[(VAR_9 >> 18) & 0x3F];
    *VAR_10++ = VAR_2[(VAR_9 >> 12) & 0x3F];
    *VAR_10++ = VAR_2[(VAR_9 >> 6) & 0x3F];
    *VAR_10++ = VAR_2[VAR_9 & 0x3F];
    VAR_8 += 4;
    VAR_7->pos += 4;
    VAR_4 -= 4;
  }


  if(VAR_5 && VAR_4 >= 4) {

    VAR_10[2] = VAR_10[3] = '=';
    VAR_9 = 0;
    switch(VAR_7->bufend - VAR_7->bufbeg) {
    case 2:
      VAR_9 = (VAR_7->buf[VAR_7->bufbeg + 1] & 0xFF) << 8;

    case 1:
      VAR_9 |= (VAR_7->buf[VAR_7->bufbeg] & 0xFF) << 16;
      VAR_10[0] = VAR_2[(VAR_9 >> 18) & 0x3F];
      VAR_10[1] = VAR_2[(VAR_9 >> 12) & 0x3F];
      if(++VAR_7->bufbeg != VAR_7->bufend) {
        VAR_10[2] = VAR_2[(VAR_9 >> 6) & 0x3F];
        VAR_7->bufbeg++;
      }
      VAR_8 += 4;
      VAR_7->pos += 4;
      break;
    }
  }
  return VAR_8;
}
