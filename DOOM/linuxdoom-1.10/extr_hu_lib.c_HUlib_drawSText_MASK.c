
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hu_textline_t ;
struct TYPE_3__ {int h; int cl; int * l; int * on; } ;
typedef TYPE_1__ hu_stext_t ;


 int FUNC_0 (int *,int) ;

void FUNC_1(hu_stext_t* VAR_0)
{
    int VAR_1, VAR_2;
    hu_textline_t *VAR_3;

    if (!*VAR_0->on)
 return;


    for (VAR_1=0 ; VAR_1<VAR_0->h ; VAR_1++)
    {
 VAR_2 = VAR_0->cl - VAR_1;
 if (VAR_2 < 0)
     VAR_2 += VAR_0->h;

 VAR_3 = &VAR_0->l[VAR_2];


 FUNC_0(VAR_3, 0);
    }

}
