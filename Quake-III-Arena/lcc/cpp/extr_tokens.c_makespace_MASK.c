
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char uchar ;
struct TYPE_4__ {scalar_t__ tp; scalar_t__ bp; TYPE_2__* lp; } ;
typedef TYPE_1__ Tokenrow ;
struct TYPE_5__ {int wslen; int flag; size_t type; char* t; int len; } ;
typedef TYPE_2__ Token ;


 int VAR_0 ;
 char* FUNC_0 (char*,int ,int) ;
 scalar_t__* VAR_1 ;

void
FUNC_1(Tokenrow *VAR_2)
{
 uchar *VAR_3;
 Token *VAR_4 = VAR_2->tp;

 if (VAR_4 >= VAR_2->lp)
  return;
 if (VAR_4->wslen) {
  if (VAR_4->flag&VAR_0
   && (VAR_1[VAR_4->type] || VAR_2->tp>VAR_2->bp && VAR_1[(VAR_4-1)->type])) {
   VAR_4->wslen = 0;
   return;
  }
  VAR_4->t[-1] = ' ';
  return;
 }
 if (VAR_1[VAR_4->type] || VAR_2->tp>VAR_2->bp && VAR_1[(VAR_4-1)->type])
  return;
 VAR_3 = FUNC_0(VAR_4->t, VAR_4->len, 1);
 *VAR_3++ = ' ';
 VAR_4->t = VAR_3;
 VAR_4->wslen = 1;
 VAR_4->flag |= VAR_0;
}
