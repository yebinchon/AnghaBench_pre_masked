
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int len; unsigned char sc; TYPE_2__** f; int y; int * l; } ;
typedef TYPE_1__ hu_textline_t ;
typedef scalar_t__ boolean ;
struct TYPE_5__ {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,TYPE_2__*) ;
 unsigned char FUNC_2 (int ) ;

void
FUNC_3
( hu_textline_t* VAR_2,
  boolean VAR_3 )
{

    int VAR_4;
    int VAR_5;
    int VAR_6;
    unsigned char VAR_7;


    VAR_6 = VAR_2->x;
    for (VAR_4=0;VAR_4<VAR_2->len;VAR_4++)
    {
 VAR_7 = FUNC_2(VAR_2->l[VAR_4]);
 if (VAR_7 != ' '
     && VAR_7 >= VAR_2->sc
     && VAR_7 <= '_')
 {
     VAR_5 = FUNC_0(VAR_2->f[VAR_7 - VAR_2->sc]->width);
     if (VAR_6+VAR_5 > VAR_1)
  break;
     FUNC_1(VAR_6, VAR_2->y, VAR_0, VAR_2->f[VAR_7 - VAR_2->sc]);
     VAR_6 += VAR_5;
 }
 else
 {
     VAR_6 += 4;
     if (VAR_6 >= VAR_1)
  break;
 }
    }


    if (VAR_3
 && VAR_6 + FUNC_0(VAR_2->f['_' - VAR_2->sc]->width) <= VAR_1)
    {
 FUNC_1(VAR_6, VAR_2->y, VAR_0, VAR_2->f['_' - VAR_2->sc]);
    }
}
