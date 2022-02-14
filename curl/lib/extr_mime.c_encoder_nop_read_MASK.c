
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t bufend; size_t bufbeg; int buf; } ;
typedef TYPE_1__ mime_encoder_state ;
struct TYPE_5__ {TYPE_1__ encstate; } ;
typedef TYPE_2__ curl_mimepart ;


 int FUNC_0 (char*,int ,size_t) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_0, size_t VAR_1, bool VAR_2,
                               curl_mimepart *VAR_3)
{
  mime_encoder_state *VAR_4 = &VAR_3->encstate;
  size_t VAR_5 = VAR_4->bufend - VAR_4->bufbeg;

  (void) VAR_2;

  if(VAR_1 > VAR_5)
    VAR_1 = VAR_5;
  if(VAR_1)
    FUNC_0(VAR_0, VAR_4->buf, VAR_1);
  VAR_4->bufbeg += VAR_1;
  return VAR_1;
}
