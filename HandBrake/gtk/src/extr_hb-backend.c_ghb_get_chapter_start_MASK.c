
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int list_chapter; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_6__ {scalar_t__ duration; } ;
typedef TYPE_2__ hb_chapter_t ;
typedef scalar_t__ gint64 ;
typedef scalar_t__ gint ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;

gint64
FUNC_2(const hb_title_t *VAR_0, gint VAR_1)
{
    hb_chapter_t * VAR_2;
    gint VAR_3, VAR_4;
    gint64 VAR_5 = 0;

    if (VAR_0 == ((void*)0)) return 0;
    VAR_3 = FUNC_0( VAR_0->list_chapter );
    if (VAR_1 > VAR_3) return VAR_1 = VAR_3;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
        VAR_2 = FUNC_1(VAR_0->list_chapter, VAR_4);
        VAR_5 += VAR_2->duration;
    }
    return VAR_5;
}
