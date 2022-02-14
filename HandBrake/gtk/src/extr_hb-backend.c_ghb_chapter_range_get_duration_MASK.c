
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int list_chapter; scalar_t__ duration; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_6__ {scalar_t__ duration; } ;
typedef TYPE_2__ hb_chapter_t ;
typedef scalar_t__ gint64 ;
typedef scalar_t__ gint ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;

gint64
FUNC_2(const hb_title_t *VAR_0, gint VAR_1, gint VAR_2)
{
    hb_chapter_t * VAR_3;
    gint VAR_4, VAR_5;
    gint64 VAR_6;

    if (VAR_0 == ((void*)0)) return 0;

    VAR_6 = VAR_0->duration;

    VAR_4 = FUNC_0(VAR_0->list_chapter);
    if (VAR_1 > VAR_4) VAR_1 = VAR_4;
    if (VAR_2 > VAR_4) VAR_2 = VAR_4;

    if (VAR_1 == 1 && VAR_2 == VAR_4)
        return VAR_6;

    VAR_6 = 0;
    for (VAR_5 = VAR_1; VAR_5 <= VAR_2; VAR_5++)
    {
        VAR_3 = FUNC_1(VAR_0->list_chapter, VAR_5-1);
        VAR_6 += VAR_3->duration;
    }
    return VAR_6;
}
