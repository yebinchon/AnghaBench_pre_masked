
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t bufend; int* buf; scalar_t__ bufbeg; } ;
typedef TYPE_1__ mime_encoder_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int FUNC_0(mime_encoder_state *VAR_3, int VAR_4, size_t VAR_5)
{
  VAR_5 += VAR_3->bufbeg;
  if(VAR_5 >= VAR_3->bufend && VAR_4)
    return 1;
  if(VAR_5 + 2 > VAR_3->bufend)
    return VAR_4? 0: -1;
  if(VAR_2[VAR_3->buf[VAR_5] & 0xFF] == VAR_0 &&
     VAR_2[VAR_3->buf[VAR_5 + 1] & 0xFF] == VAR_1)
    return 1;
  return 0;
}
