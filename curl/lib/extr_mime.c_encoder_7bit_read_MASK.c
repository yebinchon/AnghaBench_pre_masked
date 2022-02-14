
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t bufend; size_t bufbeg; char* buf; } ;
typedef TYPE_1__ mime_encoder_state ;
struct TYPE_5__ {TYPE_1__ encstate; } ;
typedef TYPE_2__ curl_mimepart ;


 size_t VAR_0 ;

__attribute__((used)) static size_t FUNC_0(char *VAR_1, size_t VAR_2, bool VAR_3,
                                curl_mimepart *VAR_4)
{
  mime_encoder_state *VAR_5 = &VAR_4->encstate;
  size_t VAR_6 = VAR_5->bufend - VAR_5->bufbeg;

  (void) VAR_3;

  if(VAR_2 > VAR_6)
    VAR_2 = VAR_6;

  for(VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    *VAR_1 = VAR_5->buf[VAR_5->bufbeg];
    if(*VAR_1++ & 0x80)
      return VAR_6? VAR_6: VAR_0;
    VAR_5->bufbeg++;
  }

  return VAR_6;
}
