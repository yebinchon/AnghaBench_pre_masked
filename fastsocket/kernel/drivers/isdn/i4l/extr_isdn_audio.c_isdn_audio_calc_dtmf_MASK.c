
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* dtmf_state; } ;
typedef TYPE_1__ modem_info ;
struct TYPE_6__ {scalar_t__ idx; int* buf; } ;
typedef TYPE_2__ dtmf_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int*,TYPE_1__*) ;
 int* VAR_3 ;

void
FUNC_1(modem_info * VAR_4, unsigned char *VAR_5, int VAR_6, int VAR_7)
{
 dtmf_state *VAR_8 = VAR_4->dtmf_state;
 int VAR_9;
 int VAR_10;

 while (VAR_6) {
  VAR_10 = VAR_1 - VAR_8->idx;
  if (VAR_10 > VAR_6)
   VAR_10 = VAR_6;
  if (VAR_10 <= 0)
   break;
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   if (VAR_7)
    VAR_8->buf[VAR_8->idx++] =
        VAR_2[*VAR_5++] >> (15 - VAR_0);
   else
    VAR_8->buf[VAR_8->idx++] =
        VAR_3[*VAR_5++] >> (15 - VAR_0);
  }
  if (VAR_8->idx == VAR_1) {
   FUNC_0(VAR_8->buf, VAR_4);
   VAR_8->idx = 0;
  }
  VAR_6 -= VAR_10;
 }
}
